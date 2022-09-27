#ifndef HUESPED_H
#define HUESPED_H

#include <iostream>
using namespace std;
#include "Persona.h"

class Huesped: public Persona { //Huesped hereda todos los atributos de persona
    private:
        string nombreClinica;
        string nombreLugarOrigen;
    public:
        Huesped(); //Constructor.

        virtual ~Huesped() = default; //Destructor.

        //Metodos Getter.
        string getNombreClinica();
        string getNombreLugarOrigen();

        //Metodos Setter.
        void setNombreClinica(string newNombreClinica);
        void setNombreLugarOrigen(string newNombreLugarOrigen);

        void mostrarDatos();

};

#endif