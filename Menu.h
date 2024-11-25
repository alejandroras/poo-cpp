#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include "Platillo.h"

using namespace std;

class Menu
{
protected:
    string nombre;
    int cantidad_platillos;
    string platillos[10];

public:
    Menu(string _nombre);
    void agregar_platillo(string platillo);
    void imprimirmenu();
};

class Menudeldia : public Menu
{
private:
    int maximo_platillos;

public:
    Menudeldia(int _maximoplatillos);

    void imprimirmenu();
};

class Menuinfantil : public Menu
{
private:
    int edad_minima;
    int edad_maxima;

public:
    Menuinfantil(int _edad_minima, int _edad_maxima);
    void imprimirmenu();
};

#endif