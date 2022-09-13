#ifndef EVALUACION_H
#define EVALUACION_H

#include "Libreria.h"
#include "Propietario.h"
#include "Huesped.h"

class Evaluacion {
    private:
        string fecha;
        double notaProm;
        string comentarios;
        Persona *evaluado;
        Persona *evaluador;
    public:
        Evaluacion(); //Constructor.

        virtual ~Evaluacion(); //Destructor.

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
        void setEvaluado(Persona *evaluado);
        void setEvaluador(Persona *evaluador);

        void mostrarDatos();

};

#endif