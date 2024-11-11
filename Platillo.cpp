#include "Platillo.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Platillo::Platillo()
{
    nombre = "Nombre Desconocido";
    categoria = Categoria();
    precio = 0;
    esplatillodeldia = false;
    descuento = 0.0;
}

// Constructor con parámetros
Platillo::Platillo(string _nombre, Categoria _categoria, float _precio)
{
    nombre = _nombre;
    categoria = _categoria;
    precio = _precio;
}

// Método para imprimir el platillo
void Platillo::imprimirplatillo() const
{
    cout << "Nombre: " << nombre << endl;
    cout << "Categoría: " << categoria << endl;
    cout << "Precio: " << precio << endl;
    cout << "¿Es platillo del día' " << endl;
    cout << "Descuento: " << descuento << endl;
}