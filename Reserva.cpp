#include "Reserva.h"

Reserva::Reserva() {
    fechaInicio = "";
    fechaFinal = "";
    propietario = nullptr;
    huesped = nullptr;
}

//Metodos Getter.
string Reserva::getFechaInicio() {
    return fechaInicio;
}
string Reserva::getFechaFinal() {
    return fechaFinal;
}
Propietario* Reserva::getPropietario() {
    return propietario;
}
Huesped* Reserva::getHuesped() {
    return huesped;
}

//Metodos Setter.
void Reserva::setFechaInicio(string newFechaInicioIn) {
    fechaInicio = newFechaInicioIn;
}
void Reserva::setFechaFinal(string newFechaFinalIn) {
    fechaFinal = newFechaFinalIn;
}
void Reserva::setPropietario(Propietario *newPropietario) {
    propietario = newPropietario;
}
void Reserva::setHuesped(Huesped *newHuesped) {
    huesped = newHuesped;
}

///////////////////////////////////////////////
void Reserva::mostrarDatos() {
    cout << "Fecha de inicio: " << fechaInicio << endl;
    cout << "Fecha Final: " << fechaFinal << endl;
    propietario->mostrarDatos();
    huesped->mostrarDatos();
}