#include <iostream>
using namespace std;
#include "Admin.h"

int main() {
    auto *admin = new Admin();

    int opc;
    do {
        cout << "===========================================" << endl;
        cout << "              ALOJAMIENTO GRATUITO         " << endl;
        cout << "===========================================\n" << endl;

        cout << "[1] Editar informacion del Hogar de un Propietario." << endl;
        cout << "[2] Crear una reserva." << endl;
        cout << "[3] Eliminar una reserva." << endl;
        cout << "[4] Agregar evaluacion." << endl;
        cout << "[-1] Salir." << endl;
        cout << "Opcion a elegir: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            admin->actualizarInfoHogar();
            break;
        case 2:
            admin->crearReservas();
            break;
        case 3:
            admin->liberarReservas();
            break;
        case 4:
            admin->agregarEvaluaciones();
            break;
        default:
            break;
        }
    }while(opc != -1);
    return 0;
}