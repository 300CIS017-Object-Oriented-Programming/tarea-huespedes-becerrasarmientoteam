#include "Huesped.h"

Huesped::Huesped() {
    datosPersona = nullptr;
    nombreClinica = "";
    nombreLugarOrigen = "";
}

//Metodos Getter.
Persona* Huesped::getDatosPersona() {
    return datosPersona;
}
string Huesped::getNombreClinica() {
    return nombreClinica;
}
string Huesped::getNombreLugarOrigen() {
    return nombreLugarOrigen;
}

//Metodos Setter.
void Huesped::setDatosPersona(Persona *newDatosPersona) {
    datosPersona = newDatosPersona;
}
void Huesped::setNombreClinica(string newNombreClinica) {
    nombreClinica = newNombreClinica;
}
void Huesped::setNombreLugarOrigen(string newNombreLugarOrigen) {
    nombreLugarOrigen = newNombreLugarOrigen;
}

///////////////////////////////////////////////
void Huesped::mostrarDatos() {
    datosPersona->mostrarDatos();
    cout << "Nombre de la Clinica en la que se situa el familiar: " << nombreClinica << endl;
    cout << "Nombre del lugar de origen del huesped: " << nombreLugarOrigen << endl;
}