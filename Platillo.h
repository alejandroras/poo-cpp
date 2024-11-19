#ifndef PLATILLO_H
#define PLATILLO_H

#include <iostream>
using namespace std;

enum Categoria
{
    entrada,
    plato_fuerte,
    bebida,
    postre
};

class Platillo
{
private:
    string nombre;
    Categoria categoria;
    float precio;
    bool esplatillodeldia;
    string descripcion;

public:
    Platillo();
    Platillo(string _nombre, Categoria _categoria, float _precio, string _descripcion);

    string getnombre();
    Categoria getcategoria();
    float getprecio();
    bool getesplatillodeldia();
    string getdescripcion();

    void marcarplatillodeldia();
    void imprimirplatillo() const;
};

#endif