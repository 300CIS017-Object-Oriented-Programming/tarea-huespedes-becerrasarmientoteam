#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
using namespace std;
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Evaluacion.h"
#include <unordered_map>

class Admin {
    private:
        int contIdReser, contIdEva;
        unordered_map<double, Propietario*> propietarios;
        unordered_map<double, Huesped*> huespedes;
        unordered_map<double, Reserva*> reservas;
        unordered_map<double, Evaluacion*> evaluaciones;
    public:
        //TODO: Realizar el constructor de la clase.
        Admin(); //Constructor.

        virtual ~Admin(); //Destructor.

        //Metodos para agregar a los mapas
        void agregarPersona();

        //Metodos para verificar la existencias de elementos en los mapas NO ordenados.
        bool existePropietario(double ID);
        bool existeHuesped(double ID);
        bool existeReserva(double ID);
        bool existeEvaluacion(double ID);

        Hogar* generarInformacionHogar(double idProp); //TODO El metodo se esta usando solamente cuando se quiere crear un nuevo propietario. Ahora que se pueda usar también para modificar solamente la info de uno ya existente.
        void crearReservas();
        void liberarReservas();
        void agregarEvaluaciones();
        void actualizarInfoHogar();
};

#endif