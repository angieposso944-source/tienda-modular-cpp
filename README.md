# Tienda Modular C++

Taller: Tienda modular con funciones en C++
Materia: Lógica de Programación (SD1002), I. U. Pascual Bravo
Nombre: Daniela Posso Oquendo 

## Descripción

Este programa sirve para calcular el valor de una compra en una tienda. Pide el precio de un producto y la cantidad de unidades, y muestra el subtotal, el descuento y el total a pagar.

Si el subtotal es mayor a $100.000 se aplica un descuento del 10%. Si el precio o la cantidad son negativos, el programa avisa que los datos no son válidos.

El programa usa tres funciones:

- calcularSubtotal: multiplica el precio por la cantidad.
- calcularDescuento: devuelve el 10% del subtotal si pasa de $100.000, si no devuelve 0.
- calcularTotal: resta el descuento al subtotal.

## Cómo compilar y ejecutar

Para compilar:

g++ tienda_modular.cpp -o tienda_modular

Para ejecutar:

./tienda_modular

En Windows se ejecuta con tienda_modular.exe`
