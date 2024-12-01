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
    vector<Platillo> pedidos; // Lista de pedidos (composición)

public:
    // Constructores
    Mesa();
    Mesa(int _numero);

    // Métodos para manejar pedidos
    void agregarpedido(const Platillo &platillo);
    void eliminarpedido(int index);   // Eliminar un pedido por índice
    void vaciarpedidos();             // Vaciar todos los pedidos
    float calcularcostototal() const; // Calcular el costo total de los pedidos
    void mostrarpedidos() const;      // Mostrar todos los pedidos

    // Métodos relacionados con la mesa
    Estadomesa getestadomesa() const;
    void ocuparmesa();
    void liberarmesa();
    void imprimirmesa() const;
};

#endif