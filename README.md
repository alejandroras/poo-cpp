# Sistema de Gestión de Restaurante

Este proyecto implementa un sistema interactivo de gestión para un restaurante que permite administrar las mesas, los pedidos y el menú de forma dinámica. El objetivo es mejorar la organización del restaurante y ofrecer un servicio personalizado a los clientes. Este sistema maneja las órdenes de cada mesa, permite aplicar promociones y organiza el menú por categorías. Además, cuenta con opciones para clientes regulares y VIP, proporcionando descuentos y privilegios adicionales.

## Características
- Gestión de menú: El sistema organiza el menú en categorías como Entrantes, Platos Fuertes, Bebidas y Postres, y permite marcar "Platillos del Día" o aplicar descuentos exclusivos en ciertos platillos.
- Reservas y Estado de Mesas: Cada mesa tiene un estado (Libre, Ocupada o Reservada), y el sistema permite reservar mesas para una fecha y hora específica.
- Pedidos Personalizados: Los clientes pueden hacer pedidos personalizados (por ejemplo, sin gluten o sin azúcar), y el sistema registra los detalles y preferencias de cada orden.
- Facturación y Propinas: Al finalizar cada pedido, el sistema calcula el total de la cuenta con propinas y aplica descuentos especiales para clientes VIP. Se puede gestionar el pago con diferentes métodos (tarjeta, efectivo, etc.).

## Algoritmo
1. Gestión del menú y platillos:
- Ingreso de datos del menú: El administrador del sistema puede ingresar el nombre, categoría, precio y descripción de cada platillo, incluyendo si es un "Especial del Día".
- Actualización y eliminación: Se permite actualizar o eliminar platillos del menú según disponibilidad o nuevas incorporaciones.

2. Reservas y gestión de mesas:
- Asignación de mesas: Los clientes pueden reservar una mesa con anticipación, asignando el estado "Reservada" junto con el horario.
- Control de estados: Cada mesa cambia de estado a "Ocupada" cuando se asigna un cliente, y a "Libre" cuando el pedido es completado.

3. Gestión de órdenes y pedidos:
- Creación de orden: Al asignarse una mesa, se inicia una orden que registra los platillos seleccionados.
- Personalización de pedidos: Si el cliente solicita modificaciones (como opciones sin gluten), se registran en la orden y se ajusta el precio.
- Calculadora de cuenta: Al finalizar el pedido, el sistema calcula el total incluyendo impuestos, propinas y descuentos según el tipo de cliente.

4. Facturación y estadísticas de ventas:
- Generación de factura: Al cerrar la orden, se genera una factura con todos los detalles de la compra y el método de pago seleccionado.
- Estadísticas de ventas: Al final del día, el sistema muestra estadísticas de las ventas totales, los platillos más vendidos y la cantidad de clientes VIP atendidos.


## Uso de Librerías
