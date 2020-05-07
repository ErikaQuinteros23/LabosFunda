#include "iostream"
#include "math.h"
using namespace std;

int main(void)
{
    float radio, area, perimetro;

    cout << endl;

    cout << "Este es un programa que calcula el area y perimetro de un circulo" << endl << endl;

    cout << "Por favor, ingrese el valor del radio del circulo: ";
    cin >> radio;

    area = 3.14*pow(radio, 2);
    perimetro = 2*3.14*radio;

    cout << endl;

    cout << "El area del circulo es: " << area;
    cout << endl <<endl;
    cout << "El perimetro del circulo es: " << perimetro;

    cout << endl << endl;

    return 0;
}