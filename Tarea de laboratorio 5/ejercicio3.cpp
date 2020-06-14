#include "iostream"

using namespace std;

bool bisiesto (int);

int main (void)
{
    int ano;

    cout << endl;
    cout << "Este es un programa que determina si un ano es bisiesto o no" << endl << endl;
    cout << "Ingrese el ano: ";
    cin >> ano;
    cout << endl;

    if (ano <=0){
        cout << "No existen los anos negativos.";
    }
    else if (bisiesto (ano) == 1){
        cout << "El ano " << ano <<  " es bisiesto.";
    }else{
        cout << "El ano " << ano <<  " no es bisiesto.";
    }
    cout << endl << endl;
    
    return 0;

}

bool bisiesto (int ano)
{
    int comprobacion = ano % 400;
    int comprobacion2 = ano % 4;
    int comprobacion3 = ano % 100;
    bool x;

    if (comprobacion == 0){
        x = true;
    }else if(comprobacion2 == 0 && comprobacion3 != 0){
        x = true;
    }else{
        x = false;
    }
    return x;
}