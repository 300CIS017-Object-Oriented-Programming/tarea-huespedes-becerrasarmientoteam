#ifndef HUESPED_H
#define HUESPED_H

#include "Libreria.h"
#include "Persona.h"

class Huesped {
    private:
        Persona *datosPersona;
        string nombreClinica;
        string nombreLugarOrigen;
    public:
        Huesped(); //Constructor.

        virtual ~Huesped(); //Destructor.

        //Metodos Getter.
        Persona *getDatosPersona();
        string getNombreClinica();
        string getNombreLugarOrigen();

        //Metodos Setter.
        void setDatosPersona(Persona *newDatosPersona);
        void setNombreClinica(string newNombreClinica);
        void setNombreLugarOrigen(string newNombreLugarOrigen);

        void mostrarDatos();

};

#endif