#include "Admin.h"

Admin::Admin() {
    contIdReser = 0;
    contIdEva = 0;
}

Admin::~Admin() {
    for (auto i : propietarios) {
        delete i.second;
    }
    for (auto i : huespedes) {
        delete i.second;
    }
    for (auto i : reservas) {
        delete i.second;
    }
    for (auto i : evaluaciones) {
        delete i.second;
    }
    cout << "Se ha borrado todo.\a" << endl;
}

//Metodos para verificar la existencias de elementos en los mapas NO ordenados.
bool Admin::existePersona(double ID) {
    if (usuarios.find(ID) == usuarios.end()) {
        return false;
    }
    return true;
}
bool Admin::existePropietario(double ID) {
    if (propietarios.find(ID) == propietarios.end()) {
        return false;
    }
    return true;
}
bool Admin::existeHuesped(double ID) {
    if (huespedes.find(ID) == huespedes.end()) {
        return false;
    }
    return true;
}
bool Admin::existeReserva(double ID) {
    if (reservas.find(ID) == reservas.end()) {
        return false;
    }
    return true;
}
bool Admin::existeEvaluacion(double ID) {
    if (evaluaciones.find(ID) == evaluaciones.end()) {
        return false;
    }
    return true;
}

void Admin::crearReservas() {
    double idProp, idHues;
    cout << "Digite el ID del propietario: ";
    cin >> idProp;
    if (!existePropietario(idProp)) {
        cout << "No se ha encontrado el propietario solicitado.\a" << endl;
        return;
    }
    if (!propietarios.at(idProp)->getRecibeHuespedes()) {
        cout << "El propietario solicitado no puede recibir huespedes.\a" << endl;
    }
    cout << "Digite el ID del huesped: ";
    cin >> idHues;
    if (!existeHuesped(idHues)) {
        cout << "No se ha encontrado el huesped solicitado.\a" << endl;
        return;
    }

    propietarios.at(idProp)->setRecibeHuespedes(false);

    string fechaInicio, fechaFinal;
    cout << "Digite la fecha de inicio de la reserva: ";
    cin >> fechaInicio;
    cout << "Digite la fecha final de la reserva: ";
    cin >> fechaFinal;
    auto *newReserva = new Reserva();
    newReserva->setFechaInicio(fechaInicio);
    newReserva->setFechaFinal(fechaFinal);
    newReserva->setPropietario(propietarios.at(idProp));
    newReserva->setHuesped(huespedes.at(idHues));

    reservas[contIdReser] = newReserva;
    contIdReser += 1;
    
    cout << "Se ha agregado la reserva correctamente." << endl;
}

void Admin::liberarReservas() {
    int idReser;
    cout << "Digite el ID de la reserva: ";
    cin >> idReser;

    if (!existeReserva(idReser)) {
        cout << "La reserva solicitada no se ha encontrado.\a" << endl;
        return;
    }

    reservas.at(idReser)->getPropietario()->setRecibeHuespedes(true);

    //Se ha borrado de TODAS las formas posibles.
    reservas.at(idReser)->~Reserva();
    delete reservas.at(idReser);
    reservas.erase(idReser);
}

void Admin::agregarEvaluaciones() {
    double idUser, idEvaluado;
    cout << "Digite el ID del usuario: ";
    cin >> idUser;

    if (!existePersona(idUser)) {
        cout << "No se ha encontrado el usuario solicitado.\a" << endl;
        return;
    }

    cout << "Digite el ID del usuario a evaluar";
    cin >> idEvaluado;

    if (!existePersona(idEvaluado)) {
        cout << "No se ha encontrado el usuario a evaluar solicitado.\a" << endl;
        return;
    }

    string fecha, comentarios;
    double notaProm;

    cout << "Digite la fecha de realizacion de la evaluacion: ";
    cin >> fecha;
    cout << "Digite la nota que le va a asignar al usuario solicitado: ";
    cin >> notaProm;
    cout << "Digite el comentario a realizar al usuario.";
    cin.ignore();
    getline(cin, comentarios);

    auto *newEvaluacion = new Evaluacion();

    newEvaluacion->setFecha(fecha);
    newEvaluacion->setNotaProm(notaProm);
    newEvaluacion->setComentarios(comentarios);
    newEvaluacion->setEvaluador(usuarios.at(idUser));
    newEvaluacion->setEvaluado(usuarios.at(idEvaluado));

    evaluaciones[contIdEva] = newEvaluacion;
    contIdEva += 1;
}