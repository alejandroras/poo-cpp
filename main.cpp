#include <iostream>
#include "Platillo.h"
#include "Mesa.h"
#include "Cliente.h"
#include <string>

using namespace std;

int main()
{
    Platillo platillo1;
    platillo1.imprimirplatillo();

    cout << "----------------" << endl;

    Platillo platillo2("Tacos", PLATO_FUERTE, 50);
    platillo2.imprimirplatillo();

    cout << "----------------" << endl;

    Mesa mesa1;
    mesa1.imprimirmesa();

    cout << "----------------" << endl;

    Mesa mesa2(10, 4);
    mesa2.imprimirmesa();

    cout << "-----------------" << endl;

    return 0;
}
