#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
using namespace std;
#include "Propietario.h"
#include "Huesped.h"

class Reserva {
    private:
        string fechaInicio;
        string fechaFinal;
        Propietario *propietario;
        Huesped *huesped;
    public:
        Reserva(); //Constructor.

        ~Reserva() = default; //Destructor.

        //Metodos Getter.
        string getFechaInicio();
        string getFechaFinal();
        Propietario *getPropietario();
        Huesped *getHuesped();

        //Metodos Setter.
        void setFechaInicio(string newFechaInicio);
        void setFechaFinal(string newFechaFinal);
        void setPropietario(Propietario *newPropietario);
        void setHuesped(Huesped *newHuesped);

        void mostrarDatos();

};

#endif