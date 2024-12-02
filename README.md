# Sistema de Gestión de Restaurante

EEste proyecto implementa un sistema interactivo de gestión para un restaurante que permite administrar las mesas, los pedidos y el menú de forma dinámica. El objetivo es mejorar la organización del restaurante y ofrecer un servicio personalizado a los clientes.

## Características del sistema

1. Gestión de Platillos:
- Creación de platillos con atributos como nombre, categoría (Entrante, Plato Fuerte, Bebida, Postre), precio y descripción.
- Marcado de platillos como "Platillos del Día".
- Métodos para mostrar información de cada platillo.

2. Gestión de mesas:
- Las mesas tienen un estado que puede ser "Libre" o "Ocupada".
- Se pueden asignar pedidos específicos a cada mesa.
- Gestión de pedidos asociados a las mesas.

3. Gestión de clientes:
- Registro de clientes con nombre y número de teléfono.
- Métodos para obtener y mostrar información de los clientes.
4. Gestión de Menús:
- Menús dinámicos que permiten agregar y listar platillos.
- Descuentos y beneficios exclusivos para clientes VIP.
- Subtipos de menú: Menú Infantil y Menú de "Platillos del Día".

## Estructura del proyecto

El sistema está organizado en clases que modelan las entidades principales del restaurante:

- Platillo: 
    - Contiene atributos como nombre, categoría, precio y descripción.
    - Incluye un método para imprimir detalles del platillo.
- Mesa:
    - Representa mesas del restaurante y su estado.
    - Almacena una lista de pedidos asociados a la mesa.
- Cliente: 
    - Almacena datos básicos del cliente, como nombre y teléfono.
- Menu: 
    - Maneja una colección de platillos.
    - Implementa subtipos como el Menú Infantil y el Menú del Día.

El archivo main.cpp conecta todas estas funcionalidades, permitiendo probar y ejecutar el sistema.

## Compilación y Ejecución

1. Asegúrate de tener un compilador C++ compatible instalado, como g++.

2. Usa el siguiente comando para compilar el programa en el directorio del proyecto:
- g++ -o gestion_restaurante main.cpp Platillo.cpp Mesa.cpp Cliente.cpp Menu.cpp

3. Ejecuta el programa generado:
- ./gestion_restaurante

## Requisitos del sistema

- Compilador compatible con C++11 o superior.

- Sistema operativo: Windows, Linux o macOS.

## Uso de librerías 

El proyecto se basa únicamente en bibliotecas estándar de C++ para garantizar la compatibilidad en múltiples plataformas.
