#include "Propietario.h"

Propietario::Propietario() {
    datosPersona = nullptr;
    Propiedad = nullptr;
    recibeHuespedes = true;
}

//Metodos Getter.
Persona* Propietario::getDatosPersona() {
    return datosPersona;
}
Hogar* Propietario::getPropiedad() {
    return Propiedad;
}
bool Propietario::getRecibeHuespedes() {
    return recibeHuespedes;
}

//Metodos Setter.
void Propietario::setDatosPersona(Persona *newDatosPersona) {
    datosPersona = newDatosPersona;
}
void Propietario::setPropiedad(Hogar *newPropiedad) {
    Propiedad = newPropiedad;
}
void Propietario::setRecibeHuespedes(bool newRecibeHuespedes) {
    recibeHuespedes = newRecibeHuespedes;
}

///////////////////////////////////////////////
void Propietario::mostrarDatos() {
    datosPersona->mostrarDatos();
    Propiedad->mostrarDatos();
    cout << "Recibe huespedes? (1: Si, 0: No): " << recibeHuespedes << endl;
}