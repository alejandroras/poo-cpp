#include "Platillo.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Platillo::Platillo()
{
    nombre = "El nombre del platillo es desconocido";
    categoria = Categoria();
    precio = 0;
    esplatillodeldia = false;
    descripcion = "No hay descripción del platillo";
}

// Constructor con parámetros
Platillo::Platillo(string _nombre, Categoria _categoria, float _precio, string _descripcion)
{
    nombre = _nombre;
    categoria = _categoria;
    precio = _precio;
    descripcion = _descripcion;
}

const string nombrescategorias[] = {"Entrada", "Plato Fuerte", "Bebida", "Postre"};

// Método para imprimir el platillo
void Platillo::imprimirplatillo() const
{
    cout << "Nombre: " << nombre << endl;
    cout << "Categoría: " << nombrescategorias[categoria] << endl;
    cout << "Precio: $" << precio << endl;
    cout << "¿Es platillo del día? " << esplatillodeldia << endl;
    cout << "Descripción del platillo: " << descripcion << endl;
}