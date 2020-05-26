#include "iostream"
#include "string"

using namespace std;

int main(void)
{
    cout << endl;

    string palabra;

    cout << "Este programa verifica si la letra inicial y final de una palabra es igual";

    cout << endl << endl;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << endl;

    int caractpalabra = palabra.length();

    if (palabra[0] == palabra[caractpalabra - 1]){
        cout << "La palabra ingresada inicia y termina con la misma letra y la letra es: " << palabra[0];
    }else{
        cout << "La palabra ingresada no incia y termina con la misma letra.";
    }

    cout << endl << endl;
    return 0;
}