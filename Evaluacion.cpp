#include "Evaluacion.h"

Evaluacion::Evaluacion() {
    fecha = "";
    notaProm = 0;
    comentarios = "";
    evaluado = nullptr;
    evaluador = nullptr;
}

//Metodos Getter.
string Evaluacion::getFecha() {
    return fecha;
}
double Evaluacion::getNotaProm() {
    return notaProm;
}
string Evaluacion::getComentarios() {
    return comentarios;
}
Persona* Evaluacion::getEvaluado() {
    return evaluado;
}
Persona* Evaluacion::getEvaluador() {
    return evaluador;
}

//Metodos Setter.
void Evaluacion::setFecha(string newFecha) {
    fecha = newFecha;
}
void Evaluacion::setNotaProm(double newNotaProm) {
    notaProm = newNotaProm;
}
void Evaluacion::setComentarios(string newComentarios) {
    comentarios = newComentarios;
}
void Evaluacion::setEvaluado(Persona *newEvaluado) {
    evaluado = newEvaluado;
}
void Evaluacion::setEvaluador(Persona *newEvaluador) {
    evaluador = newEvaluador;
}

///////////////////////////////////////////////
void Evaluacion::mostrarDatos() {
    cout << "Fecha del comentario: " << fecha << endl;
    cout << "Nota: " << notaProm << endl;
    cout << "Comentario: " << comentarios << endl;
    evaluado->mostrarDatos();
    evaluador->mostrarDatos();
}