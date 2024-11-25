#include "Mesa.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Mesa::Mesa()
{
    numero = 000;
    estado = Estadomesa(0); // Las mesas están libres por defecto.
    capacidad = 0;
}

// Constructor por parámetros
Mesa::Mesa(int _numero, int _capacidad)
{
    numero = _numero;
    capacidad = _capacidad;
    estado = Estadomesa(0); // Las mesas están libres por defecto.
}

// Método para obtener el estado de la mesa
Estadomesa Mesa::get_estado_mesa() const
{
    return estado;
}

// Cambiar el estado de la mesa a ocupada
void Mesa::ocuparmesa()
{
    estado = ocupada;
}

// Cambiar el estado de la mesa a libre
void Mesa::liberarmesa()
{
    estado = libre;
}

// Método para imprimir la mesa
const string estadosmesa[] = {"Libre", "Ocupada"};

void Mesa::imprimirmesa() const
{
    cout << "Número de mesa: " << numero << endl;
    cout << "Capacidad de la mesa: " << capacidad << endl;
    cout << "Estado de la mesa: " << estadosmesa[estado] << endl;
}
