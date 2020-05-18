#include "iostream"

using namespace std;

int main(void)
{
    cout << endl;

    int n1, n2;

    cout << "Este es un programa que verifica si un numero es divisible entre otro" << endl << endl;

    cout << "Por favor ingrese el numero a dividir: ";
    cin >> n1;

    cout << endl;

    cout << "Ingrese el numero con el que quiere verificar si es divisible: ";
    cin >> n2;

    cout << endl;

    if (n1 % n2 == 0){
        cout << n1 << " es divisible entre " << n2;
    }else{
        cout << n1 << " no es divisible entre " << n2;
    }

    cout << endl << endl;

    return 0;
}