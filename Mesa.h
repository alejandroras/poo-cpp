#ifndef MESA_H
#define MESA_H

#include <iostream>
using namespace std;

/*
enum estadomesa
{
    LIBRE,
    OCUPADA,
    RESERVADA
};
*/

class Mesa
{
private:
    int numero;
    // estadomesa estado;
    int capacidad;

public:
    Mesa();
    Mesa(int _numero, int _capacidad);
    // void get_capacidad_mesa();
    void imprimirmesa() const;
};

#endif