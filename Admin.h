#ifndef ADMIN_H
#define ADMIN_H

#include "Libreria.h"
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Evaluacion.h"
#include <unordered_map>

class Admin {
    private:
        int contIdReser, contIdEva;
        unordered_map<double, Persona*> usuarios;
        unordered_map<double, Propietario*> propietarios;
        unordered_map<double, Huesped*> huespedes;
        unordered_map<double, Reserva*> reservas;
        unordered_map<double, Evaluacion*> evaluaciones;
    public:
        //TODO: Realizar el constructor de la clase.
        Admin(); //Constructor.

        virtual ~Admin(); //Destructor.

        //Metodos para verificar la existencias de elementos en los mapas NO ordenados.
        bool existePersona(double ID);
        bool existePropietario(double ID);
        bool existeHuesped(double ID);
        bool existeReserva(double ID);
        bool existeEvaluacion(double ID);

        void crearReservas();
        void liberarReservas();
        void agregarEvaluaciones();
};

#endif