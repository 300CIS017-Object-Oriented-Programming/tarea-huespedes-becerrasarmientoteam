#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
    private:
        double identificacion;
        string nombre;
        bool sexo; //1: Hombre, 0: Mujer.
        string fechaNacimiento;
        double puntaje;
    public:
        Persona(); //Constructor.

        virtual ~Persona() = default; //Destructor.

        //Metodos Getter.
        double getIdentificacion();
        string getNombre();
        bool getSexo();
        string getFechaNacimiento();
        double getPuntaje();

        //Metodos Setter.
        void setIdentificacion(double newID);
        void setNombre(string newNombre);
        void setSexo(bool newSexo);
        void setFechaNacimiento(string newFecha);
        void setPuntaje(double newPuntaje);
        
        void mostrarDatosPersona();
};
#endif