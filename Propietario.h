#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include "Persona.h"
#include "Hogar.h"

class Propietario: public Persona {
    private:
        Hogar *Propiedad;
        bool recibeHuespedes;
    public:
        Propietario(); //Constructor.

        virtual ~Propietario(); //Destructor.

        //Metodos Getter.
        Hogar *getPropiedad();
        bool getRecibeHuespedes();

        //Metodos Setter.
        void setPropiedad(Hogar *newPropiedad);
        void setRecibeHuespedes(bool newRecibeHuespedes);

        void mostrarDatos();
};
#endif