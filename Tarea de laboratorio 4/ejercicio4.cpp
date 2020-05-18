#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    cout << endl;

    string palabra, ncaracteres, paroimpar;

    cout << "Este programa determina si el numero de carcateres de una palabra es mayor a 10 y si la longitud es par o impar";

    cout << endl << endl;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << endl;

    int caractdepalabra = palabra.length();

    if (caractdepalabra > 10){
        cout << "El numero de caracteres de la palabra ingresada es mayor a 10";
    }else if (caractdepalabra < 10){
        cout << "El numero de caracteres de la palabra ingresada es menor a 10";
    }else{
        cout << "El numero de caracteres de la palabra ingresada es igual a 10";
    }

    paroimpar = (caractdepalabra % 2 == 0) ? "La longitud de caracteres es par" : "La longitud de caracteres es impar";

    cout << ncaracteres << endl;
    cout << paroimpar << endl;

    cout << endl;

    return 0;
}