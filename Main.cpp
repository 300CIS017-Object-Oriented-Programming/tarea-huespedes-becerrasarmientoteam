#include "Libreria.h"
#include "Admin.h"

int main() {
    auto admin = new Admin();

    int opc;
    do {
        cout << "===========================================" << endl;
        cout << "              ALOJAMIENTO GRATUITO         " << endl;
        cout << "===========================================\n" << endl;

        cout << "[1] Crear reserva." << endl;
        cout << "[2] Eliminar una reserva." << endl;
        cout << "[3] Crear una evaluacion." << endl;
        cout << "[-1] Salir." << endl;
        cout << "Opcion a elegir: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            admin->crearReservas();
            break;
        case 2:
            admin->liberarReservas();
            break;
        case 3:
            admin->agregarEvaluaciones();
            break;
        default:
            break;
        }
    }while(opc != -1);
    return 0;
}