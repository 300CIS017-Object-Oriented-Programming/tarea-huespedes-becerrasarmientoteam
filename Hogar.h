#ifndef HOGAR_H
#define HOGAR_H

#include <iostream>
using namespace std;

class Hogar{
    private:
        string direccion;
        int camasDispo;
        bool alojarBebes;
        string descripcion;
    public:
        Hogar(); //Constructor.

        ~Hogar() = default; //Destructor.

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