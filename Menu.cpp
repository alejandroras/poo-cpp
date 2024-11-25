#include <iostream>

#include "Menu.h"

Menu::Menu(string _nombre)

{
    nombre = _nombre;
    cantidad_platillos = 0;
}

void Menu::agregar_platillo(string platillo)
{
    if (cantidad_platillos < 10)
    {
        platillos[cantidad_platillos] = platillo;
        cantidad_platillos++;
    }
    else
    {
        cout << "No se pueden agregar más platillos al " << nombre << endl;
    }
}

void Menu::imprimirmenu()
{
    cout << "Menú: " << nombre << endl;
    for (int i = 0; i < cantidad_platillos; i++)
    {
        cout << "- " << platillos[i] << endl;
    }
}

Menudeldia::Menudeldia(int _maximoplatillos) : Menu("Menú del Día")
{
    maximo_platillos = _maximoplatillos;
}

void Menudeldia::imprimirmenu()
{
    cout << "Menú del Día (máximo " << maximo_platillos << " platillos):" << endl;
    for (int i = 0; i < cantidad_platillos && i < maximo_platillos; i++)
    {
        cout << "- " << platillos[i] << endl;
    }
}

Menuinfantil::Menuinfantil(int _edad_minima, int _edad_maxima) : Menu("Menú Infantil")
{
    edad_minima = _edad_minima;
    edad_maxima = _edad_maxima;
}

void Menuinfantil::imprimirmenu()
{
    cout << "Menú Infantil (edades: " << edad_minima << "- " << edad_maxima << " años):" << endl;
    for (int i = 0; i < cantidad_platillos; i++)
    {
        cout << "- " << platillos[i] << endl;
    }
}