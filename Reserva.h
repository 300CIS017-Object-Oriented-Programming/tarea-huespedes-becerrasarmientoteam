#ifndef RESERVA_H
#define RESERVA_H

#include "Libreria.h"
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

        virtual ~Reserva(); //Destructor.

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