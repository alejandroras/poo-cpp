#include "Cliente.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Cliente::Cliente()
{
    nombre = "El nombre del cliente es desconocido";
    telefono = "El teléfono del cliente es desconocido";
}

// Constructor por parámetros
Cliente::Cliente(string _nombre, string _telefono)
{
    nombre = _nombre;
    telefono = _telefono;
}

// Método para imprimir el platillo
void Cliente::imprimircliente() const
{
    cout << "Nombre del cliente: " << nombre << endl;
    cout << "Teléfono del cliente: " << telefono << endl;
}

// Método para escribir el teléfono del cliente

// Método para escribir el nombre del cliente