#ifndef EVALUACION_H
#define EVALUACION_H

#include <iostream>
using namespace std;
#include "Propietario.h"
#include "Huesped.h"

class Evaluacion {
    private:
        string fecha;
        double notaProm;
        string comentarios;
        Propietario *evaluado;
        Huesped *evaluador;
    public:
        Evaluacion(); //Constructor.

        ~Evaluacion() = default; //Destructor.

        //Metodos Getter.
        string getFecha();
        double getNotaProm();
        string getComentarios();
        Persona *getEvaluado();
        Persona *getEvaluador();

        //Metodos Setter.
        void setFecha(string newFecha);
        void setNotaProm(double newNotaProm);
        void setComentarios(string newComentarios);
        void setEvaluado(Propietario *evaluado);
        void setEvaluador(Huesped *evaluador);

        void mostrarDatos();

};

#endif