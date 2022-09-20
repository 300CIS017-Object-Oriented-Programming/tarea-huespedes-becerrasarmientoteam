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

    if (!existeHuesped(idUser)) {
        cout << "No se ha encontrado el usuario solicitado.\a" << endl;
        return;
    }

    cout << "Digite el ID del usuario a evaluar";
    cin >> idEvaluado;

    if (!existePropietario(idEvaluado)) {
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
    newEvaluacion->setEvaluador(huespedes.at(idUser));
    newEvaluacion->setEvaluado(propietarios.at(idEvaluado));

    evaluaciones[contIdEva] = newEvaluacion;
    contIdEva += 1;
}

void Admin::agregarPersona() {
    int sel;
    do{
        //Variables pertenecientes a la clase Persona.
        double identificacion;
        string nombre;
        bool sexo; //1: Hombre, 0: Mujer.
        string fechaNacimiento;

        //Solicitud de los nuevos datos del usuario.
        cout << "Digite el num de identificacion del usuario: ";
        cin >> identificacion;
        cout << "Digite el nombre del usuario:";
        cin.ignore();
        getline(cin, nombre);
        cout << "Digite el sexo del usuario (normal): 1: Masculino, 0: Femenino: ";
        cin >> sexo;
        cout << "Digite la fecha de nacimiento del usuario: ";
        cin >> fechaNacimiento;

        //Escoger el rol del nuevo usuario.
        cout << "Que tipo de persona quieres agregar?" << endl;
        cout <<"1. Propietario" << endl << "2. Huesped"  << endl <<  "-1. Cancelar " << endl << "Elija: ";
        cin >> sel;

        //Variables pertenecientes a la clase Hogar.
        string direccion;
        int camasDispo;
        bool alojarBebes;
        string descripcion;

        //Variables pertenecientes a la clase Huesped.
        string nombreClinica;
        string nombreLugarOrigen;
        switch (sel) {
            case 1:
                //Solicitud de los datos del nuevo Hogar.
                cout << "Digite la direccion del hogar: ";
                cin.ignore();
                getline(cin, direccion);
                cout << "Digite las camas disponibles: ";
                cin >> camasDispo;
                cout << "Puede alojar bebes? 1: Si, 0: No";
                cin >> alojarBebes;
                cout << "Digite la descripcion del hogar: ";
                cin.ignore();
                getline(cin, descripcion);

                auto *Propiedad = new Hogar(); //Creacion del nuevo hogar.
                auto *newPropietario = new Propietario(); //Creacion del nuevo propietario.

                //Asignar los valores del nuevo propietario.
                newPropietario->setIdentificacion(identificacion);
                newPropietario->setNombre(nombre);
                newPropietario->setSexo(sexo);
                newPropietario->setFechaNacimiento(fechaNacimiento);
                newPropietario->setPropiedad(Propiedad);

                propietarios[identificacion] = newPropietario; //Se agrega al mapa NO ordenado.
                break;
            case 2:
                //Solicitud de los datos del nuevo Huesped.
                cout << "Digite el nombre de la clínica en donde se ecuentra su familiar: ";
                cin.ignore();
                getline(cin, nombreClinica);
                cout << "Digite su lugar de origen: ";
                cin.ignore();
                getline(cin, nombreLugarOrigen);

                auto *newHuesped = new Huesped(); //Creacion del nuevo Huesped.

                //Asignar los valores del nuevo Huesped.
                newHuesped->setIdentificacion(identificacion);
                newHuesped->setNombre(nombre);
                newHuesped->setSexo(sexo);
                newHuesped->setFechaNacimiento(fechaNacimiento);

                newHuesped->setNombreClinica(nombreClinica);
                newHuesped->setNombreLugarOrigen(nombreLugarOrigen);

                huespedes[identificacion] = newHuesped; //Se agrega al mapa NO ordenado.
                break;
            case -1:
                cout << "Cancelado" << endl;
                break;
            default:
                cout << "Comando no valido" << endl;
        }
    }while(sel != -1);

}