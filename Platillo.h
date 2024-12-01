#ifndef PLATILLO_H
#define PLATILLO_H

#include <iostream>
using namespace std;

// Enumeración para las categorías de platillos
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
    // Constructores
    Platillo();
    Platillo(string _nombre, Categoria _categoria, float _precio, string _descripcion);

    // Getters
    string getnombre() const;
    Categoria getcategoria() const;
    float getprecio() const;
    bool getesplatillodeldia() const;
    string getdescripcion() const;

    // Métodos adicionales
    void marcarplatillodeldia();
    void validarplatillo() const;  // Nuevo método para validar atributos
    void imprimirplatillo() const; // Imprime la información del platillo
};

#endif
