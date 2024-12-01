#include "Mesa.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Mesa::Mesa()
{
    numero = 0;
    estado = libre; // Las mesas están libres por defecto.
}

// Constructor por parámetros
Mesa::Mesa(int _numero)
{
    numero = _numero;
    estado = libre; // Las mesas están libres por defecto.
}

// Método para obtener el estado de la mesa
Estadomesa Mesa::getestadomesa() const
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

// Método para agregar un pedido
void Mesa::agregarpedido(const Platillo &platillo)
{
    pedidos.push_back(platillo);
}

// Método para mostrar los pedidos
void Mesa::mostrarpedidos() const
{
    if (pedidos.empty())
    {
        cout << "La mesa número " << numero << " no tiene pedidos." << endl;
    }
    else
    {
        cout << "Pedidos en la mesa número " << numero << ":" << endl;
        for (const auto &platillo : pedidos)
        {
            platillo.imprimirplatillo();
        }
    }
}

// Método para imprimir la mesa
void Mesa::imprimirmesa() const
{
    const string estadosmesa[] = {"Libre", "Ocupada"};
    cout << "Número de mesa: " << numero << endl;
    cout << "Estado de la mesa: " << estadosmesa[estado] << endl;
}
