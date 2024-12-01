#include <iostream>
#include "Platillo.h"
#include "Mesa.h"
#include "Cliente.h"
#include <string>
#include "Menu.h"

using namespace std;

int main()
{
    // Mostrar información de platillos
    Platillo platillo1;
    platillo1.imprimirplatillo();

    cout << "----------------" << endl;

    Platillo platillo2("Tacos", plato_fuerte, 50, "Tortilla con carne");
    platillo2.imprimirplatillo();

    cout << "----------------" << endl;

    // Mostrar información de mesas
    Mesa mesa1;
    mesa1.imprimirmesa();

    cout << "----------------" << endl;

    Mesa mesa2(10);
    mesa2.imprimirmesa();

    cout << "-----------------" << endl;

    // Mostrar información de clientes
    Cliente cliente1;
    cliente1.imprimircliente();

    cout << "-----------------" << endl;

    Cliente cliente2("Juan", "5248267857");
    cliente2.imprimircliente();

    cout << "-----------------" << endl;

    // Crear un Menú del Día
    Menudeldia menulunes(3); // Máximo 3 platillos en el menú
    menulunes.agregar_platillo("Camarones enchipotlados");
    menulunes.agregar_platillo("Enchiladas suizas");
    menulunes.agregar_platillo("Club sandwich");

    cout << "\n ---- Menú del día ----" << endl;
    cout << "           Lunes         " << endl;
    menulunes.imprimirmenu();

    cout << " ----------------------- " << endl;

    // Crear otra mesa y agregar pedidos
    Mesa mesa3(1);

    Platillo platillo3("Quesadillas", plato_fuerte, 50, "Quesadillas con queso");
    Platillo platillo4("Coca-cola", bebida, 20, "Refresco de cola");

    mesa3.agregarpedido(platillo3);
    mesa3.agregarpedido(platillo4);

    cout << "\nInformación de la mesa:" << endl;
    mesa3.imprimirmesa();

    cout << "\nPedidos realizados en la mesa:" << endl;
    mesa3.mostrarpedidos();

    // Cambiar el estado de la mesa a "ocupada"
    cout << "\nCambiando estado de la mesa a 'ocupada':" << endl;
    mesa3.ocuparmesa();
    mesa3.imprimirmesa();

    // Cambiar el estado de la mesa a "libre"
    cout << "\nCambiando estado de la mesa a 'libre':" << endl;
    mesa3.liberarmesa();
    mesa3.imprimirmesa();

    return 0; // Aquí termina el programa
}
