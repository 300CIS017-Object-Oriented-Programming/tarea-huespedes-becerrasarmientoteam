#include "Persona.h"

Persona::Persona() {
    identificacion = 0;
    nombre = "";
    sexo = false;
    fechaNacimiento = "";
    puntaje = 0;
}

//Metodos Getter.
double Persona::getIdentificacion() {
    return identificacion;
}
string Persona::getNombre() {
    return nombre;
}
bool Persona::getSexo() {
    return sexo;
}
string Persona::getFechaNacimiento() {
    return fechaNacimiento;
}
double Persona::getPuntaje() {
    return puntaje;
}

//Metodos Setter.
void Persona::setIdentificacion(double newID) {
    identificacion = newID;
}
void Persona::setNombre(string newNombre) {
    nombre = newNombre;
}
void Persona::setSexo(bool newSexo) {
    sexo = newSexo;
}
void Persona::setFechaNacimiento(string newFecha) {
    fechaNacimiento = newFecha;
}
void Persona::setPuntaje(double newPuntaje) {
    puntaje = newPuntaje;
}
///////////////////////////////////////////////
void Persona::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Sexo (Normal): ";
    if (sexo) {
        cout << "Masculino" << endl;
    }
    else {
        cout << "Femenino" << endl;
    }
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "Puntaje: " << puntaje << endl;
}