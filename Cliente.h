#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente
{
private:
    string nombre;
    string telefono;

public:
    Cliente();
    Cliente(string _nombre, string _telefono);
    string getnombrecliente();
    string gettelefonocliente();

    void setnombrecliente(string _nombre);
    void settelefonocliente(string _telefono);
    void imprimircliente() const;
};

#endif
