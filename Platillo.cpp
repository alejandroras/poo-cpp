#include "Platillo.h"
#include <iostream>

using namespace std;

// Constructor por defecto
Platillo::Platillo()
{
    nombre = "Sin nombre";
    categoria = entrada;
    precio = 0.0;
    esplatillodeldia = false;
    descripcion = "Sin descripción";
}

// Constructor con parámetros
Platillo::Platillo(string _nombre, Categoria _categoria, float _precio, string _descripcion)
{
    nombre = _nombre;
    categoria = _categoria;
    precio = _precio;
    descripcion = _descripcion;
    esplatillodeldia = false;
}

// Getters
string Platillo::getnombre() const
{
    return nombre;
}

Categoria Platillo::getcategoria() const
{
    return categoria;
}

float Platillo::getprecio() const
{
    return precio;
}

bool Platillo::getesplatillodeldia() const
{
    return esplatillodeldia;
}

string Platillo::getdescripcion() const
{
    return descripcion;
}

// Métodos adicionales
void Platillo::marcarplatillodeldia()
{
    esplatillodeldia = true;
}

void Platillo::imprimirplatillo() const
{
    const string categorias[] = {"Entrada", "Plato Fuerte", "Bebida", "Postre"};
    cout << "Nombre: " << nombre << endl;
    cout << "Categoría: " << categorias[categoria] << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Descripción: " << descripcion << endl;
    cout << (esplatillodeldia ? "Es platillo del día" : "No es platillo del día") << endl;
}
