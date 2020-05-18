#include "iostream"

using namespace std;

int main(void)
{
    cout << endl;

    int n;
    string respuesta;

    cout << "Este es un programa que verifica si un numero es par o impar"<< endl << endl;

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << endl;

    respuesta = (n % 2 == 0) ? " es un numero par." : " es un numero impar.";

    cout << n << respuesta;

    cout << endl << endl;

    return 0;

}