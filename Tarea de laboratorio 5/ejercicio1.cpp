#include "iostream"

using namespace std;

int mcd (int, int);

int main (void)
{
    int mayor, menor;

    cout << endl;

    cout << "Este es un programa que calcula el mcd de dos numeros enteros" << endl << endl;
    
    cout << "Ingrese el numero mayor: ";
    cin >> mayor;
    cout << endl;
    cout << "Ingrese el numero menor:";
    cin >> menor;
    cout << endl;
    cout << "El mcd de " << mayor << " y " << menor << " es: " << mcd (mayor, menor);

    cout << endl << endl;

    return 0;
}

int mcd (int mayor, int menor)
{
    int residuo;
    
    do 
    {
        residuo = mayor % menor;
        if (residuo != 0){
            mayor = menor;
            menor = residuo;
        }
    }
    while (residuo != 0);

    return menor;

}
