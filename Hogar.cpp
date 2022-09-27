#include "Hogar.h"

Hogar::Hogar() {
    direccion = "";
    camasDispo = 0;
    alojarBebes = false;
    descripcion = "";
}

//Metodos Getter.
string Hogar::getDireccion() {
    return direccion;
}
int Hogar::getCamasDispo() {
    return camasDispo;
}
bool Hogar::getAlojarBebes() {
    return alojarBebes;
}
string Hogar::getDescripcion() {
    return descripcion;
}

//Metodos Setter.
void Hogar::setDireccion(string newDireccion) {
    direccion = newDireccion;
}
void Hogar::setCamasDispo(int newCamasDispo) {
    camasDispo = newCamasDispo;
}
void Hogar::setpuedeAlojarBebes(bool newAlojarBebes) {
    alojarBebes = newAlojarBebes;
}
void Hogar::setDescripcion(string newDescripcion) {
    descripcion = newDescripcion;
}

///////////////////////////////////////////////
void Hogar::mostrarDatos() {
    cout << "Direccion: " << direccion << endl;
    cout << "Camas Disponibles: " << camasDispo << endl;
    cout << "Puede alojar bebes? (1: Si, 0: No): " << alojarBebes << endl;
    cout << "Descripcion: " << descripcion << endl;
}