#include <iostream>
#include "Platillo.h"
#include "Mesa.h"
#include "Cliente.h"
#include <string>
#include "Menu.h"

using namespace std;

int main()
{
    Platillo platillo1;
    platillo1.imprimirplatillo();

    cout << "----------------" << endl;

    Platillo platillo2("Tacos", plato_fuerte, 50, "Tortilla con carne");
    platillo2.imprimirplatillo();

    cout << "----------------" << endl;

    Mesa mesa1;
    mesa1.imprimirmesa();

    cout << "----------------" << endl;

    Mesa mesa2(10, 4);
    mesa2.imprimirmesa();

    cout << "-----------------" << endl;

    Cliente cliente1;
    cliente1.imprimircliente();

    cout << "-----------------" << endl;

    Cliente cliente2("Juan", "5248267857");
    cliente2.imprimircliente();

    return 0;

    Menudeldia menulunes(3);
    menulunes.agregar_platillo("Camarones enchipotlados");
    menulunes.agregar_platillo("Enchiladas suizas");
    menulunes.agregar_platillo("Club sandwich");

    cout << "\n ---- Menú del día ----" << endl;
    cout << "           Lunes         " << endl;
    menulunes.imprimirmenu();

    cout << " ----------------------- " << endl;
}