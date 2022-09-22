#include "Propietario.h"

Propietario::Propietario() : Persona() {
    Propiedad = nullptr;
    recibeHuespedes = true;
}
Propietario::~Propietario(){
    delete Propiedad;
}
//Metodos Getter.
Hogar* Propietario::getPropiedad() {
    return Propiedad;
}
bool Propietario::getRecibeHuespedes() const {
    return recibeHuespedes;
}

//Metodos Setter.
void Propietario::setPropiedad(Hogar *newPropiedad) {
    Propiedad = newPropiedad;
}
void Propietario::setRecibeHuespedes(bool newRecibeHuespedes) {
    recibeHuespedes = newRecibeHuespedes;
}

///////////////////////////////////////////////
void Propietario::mostrarDatos() {
    this->mostrarDatosPersona();
    Propiedad->mostrarDatos();
    cout << "Recibe huespedes? (1: Si, 0: No): " << recibeHuespedes << endl;
}