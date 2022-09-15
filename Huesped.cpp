#include "Huesped.h"

Huesped::Huesped() : Persona() {
    nombreClinica = "";
    nombreLugarOrigen = "";
}

//Metodos Getter.
string Huesped::getNombreClinica() {
    return nombreClinica;
}
string Huesped::getNombreLugarOrigen() {
    return nombreLugarOrigen;
}

//Metodos Setter.

void Huesped::setNombreClinica(string newNombreClinica) {
    nombreClinica = newNombreClinica;
}
void Huesped::setNombreLugarOrigen(string newNombreLugarOrigen) {
    nombreLugarOrigen = newNombreLugarOrigen;
}

///////////////////////////////////////////////
void Huesped::mostrarDatos() {
    this->mostrarDatosPersona();
    cout << "Nombre de la Clinica en la que se situa el familiar: " << nombreClinica << endl;
    cout << "Nombre del lugar de origen del huesped: " << nombreLugarOrigen << endl;
}