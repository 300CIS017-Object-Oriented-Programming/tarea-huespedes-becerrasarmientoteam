#ifndef HOGAR_H
#define HOGAR_H

#include "Libreria.h"

class Hogar{
    private:
        string direccion;
        int camasDispo;
        bool alojarBebes;
        string descripcion;
    public:
        Hogar(); //Constructor.

        virtual ~Hogar(); //Destructor.

        //Funciones Getter.
        string getDireccion();
        int getCamasDispo();
        bool getAlojarBebes();
        string getDescripcion();

        //Funciones Setter.
        void setDireccion(string newDireccion);
        void setCamasDispo(int newCamasDispo);
        void setpuedeAlojarBebes(bool newAlojarBebes);
        void setDescripcion(string newDescripcion);

        void mostrarDatos();
};

#endif