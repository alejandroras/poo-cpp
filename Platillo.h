#ifndef PLATILLO_H
#define PLATILLO_H

#include <iostream>
using namespace std;

enum Categoria
{
    ENTRADA,
    PLATO_FUERTE,
    BEBIDA,
    POSTRE
};

class Platillo
{
private:
    string nombre;
    Categoria categoria;
    float precio;
    bool esplatillodeldia;
    float descuento;

public:
    Platillo();
    Platillo(string _nombre, Categoria _categoria, float _precio);
    string getnombre();
    Categoria getcategoria();
    float getprecio();
    bool getesplatillodeldia();
    float getdescuento();

    void marcarplatillodeldia();
    void aplicardescuento(float descuento);
    void imprimirplatillo() const;
};

#endif