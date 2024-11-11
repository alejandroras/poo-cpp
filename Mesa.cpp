#include "Mesa.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Mesa::Mesa()
{
    numero = 000;
    // estado = estadomesa();
    capacidad = 0;
}

// Constructor por parámetros
Mesa::Mesa(int _numero, int _capacidad)
{
    numero = _numero;
    capacidad = _capacidad;
}

// Método para imprimir la mesa
void Mesa::imprimirmesa() const
{
    cout << "Número de mesa: " << numero << endl;
    cout << "Capacidad de la mesa: " << capacidad << endl;
}

/* Método para obtener el estado de la mesa
void Mesa::get_capacidad_mesa()
{
    return capacidad;
}
*/
