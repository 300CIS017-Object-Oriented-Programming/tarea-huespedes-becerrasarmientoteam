#ifndef HUESPED_H
#define HUESPED_H

#include "Libreria.h"
#include "Persona.h"

class Huesped: public Persona{ //Huesped hereda todos los atributos de persona
    private:
        string nombreClinica;
        string nombreLugarOrigen;
    public:
        Huesped(); //Constructor.

        virtual ~Huesped(); //Destructor.

        //Metodos Getter.
        string getNombreClinica();
        string getNombreLugarOrigen();

        //Metodos Setter.
        void setNombreClinica(string newNombreClinica);
        void setNombreLugarOrigen(string newNombreLugarOrigen);

        void mostrarDatos();

};

#endif