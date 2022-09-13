#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include "Persona.h"
#include "Hogar.h"

class Propietario {
    private:
        Persona *datosPersona;
        Hogar *Propiedad;
        bool recibeHuespedes;
    public:
        Propietario(); //Constructor.

        virtual ~Propietario(); //Destructor.

        //Metodos Getter.
        Persona *getDatosPersona();
        Hogar *getPropiedad();
        bool getRecibeHuespedes();

        //Metodos Setter.
        void setDatosPersona(Persona *newDatosPersona);
        void setPropiedad(Hogar *newPropiedad);
        void setRecibeHuespedes(bool newRecibeHuespedes);

        void mostrarDatos();
};
#endif