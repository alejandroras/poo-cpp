#ifndef MESA_H
#define MESA_H

#include <iostream>
#include <vector>
#include "Platillo.h"
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
    vector<Platillo> pedidos;

public:
    Mesa();
    Mesa(int _numero);

    void agregarpedido(const Platillo &platillo);
    void mostrarpedidos() const;
    void ocuparmesa();
    void liberarmesa();
    Estadomesa get_estado_mesa() const;

    void imprimirmesa() const;
};

#endif