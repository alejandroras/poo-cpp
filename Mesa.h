#ifndef MESA_H
#define MESA_H

#include <iostream>
using namespace std;

enum Estadomesa
{
    libre,
    ocupada
};

class Mesa
{
private:
    int numero;
    Estadomesa estado;
    int capacidad;

public:
    Mesa();
    Mesa(int _numero, int _capacidad);
    void get_capacidad_mesa();
    void ocuparmesa();
    void liberarmesa();
    Estadomesa get_estado_mesa() const;

    void imprimirmesa() const;
};

#endif