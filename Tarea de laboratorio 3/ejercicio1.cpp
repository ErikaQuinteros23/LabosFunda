#include "iostream"
using namespace std;

int main(void)
{
    int a, b, c;
    float promedio;

    cout << endl;

    cout << "Este es un programa que da el promedio de tres numeros enteros" <<endl <<endl;
    cout << "Ingrese el primer numero, por favor: ";
    cin >> a;
    cout << endl;

    cout << "Ingrese el segundo numero, por favor: ";
    cin >> b;
    cout << endl;

    cout << "Ingrese el tercer numero, por favor: ";
    cin >> c;
    cout << endl;

    promedio = (float) (a + b + c)/3;

    cout << "El promedio de los numeros que ingreso es: " << promedio << endl;

    cout << endl;

    return 0;
}