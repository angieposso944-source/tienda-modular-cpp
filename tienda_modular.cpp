#include <iostream>
using namespace std;

double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}

double calcularDescuento(double subtotal) {
    if (subtotal > 100000) {
        return subtotal * 0.10;
    }
    return 0;
}

double calcularTotal(double subtotal, double descuento) {
    return subtotal - descuento;
}

int main() {
    double precio;
    int cantidad;

    cout << "Precio unitario: ";
    cin >> precio;
    cout << "Cantidad de unidades: ";
    cin >> cantidad;

    if (precio < 0 || cantidad < 0) {
        cout << "Datos invalidos: el precio y la cantidad no pueden ser negativos." << endl;
        return 1;
    }

    double subtotal = calcularSubtotal(precio, cantidad);
    double descuento = calcularDescuento(subtotal);
    double total = calcularTotal(subtotal, descuento);

    cout << "Subtotal:  $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total:     $" << total << endl;

    return 0;
}
