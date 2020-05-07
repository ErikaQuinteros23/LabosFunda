#include "iostream"
using namespace std;

int main(void)
{
    string producto;
    float precio, total;
    int cantidad;

    cout << endl;

    cout << "Este programa le dice el total de dinero gastado." << endl << endl;

    cout << "Ingrese el nombre del producto, por favor: ";
    getline(cin, producto);

    cout << endl;

    cout << "Ingrese el precio del producto, por favor: ";
    cin >> precio;

    cout << endl;

    cout << "Ingrese la cantidad de productos a comprar, por favor: ";
    cin >> cantidad;

    cout << endl;

    total = cantidad*precio;

    cout << "El total a pagar es: " << total << " dolares.";

    cout << endl << endl;

    return 0;

}