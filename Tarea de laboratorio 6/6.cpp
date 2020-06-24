#include "iostream"

using namespace std;

int main (void)
{
    int n, x;

    cout << endl;
    cout << "Identificador de numeros en un arreglo" << endl << endl;

    do{
    cout << "Ingrese el tamano del arreglo (solo numeros positivos): ";
    cin >> n;
    cout << endl;
    }while(n<=0);

    int vector[n];

    int i;
    for (i=0; i<n; i++){
        cout << "Ingrese un dato: ";
        cin >> vector[i];
    }

    cout << endl;

    cout << "Ingrese el numero a identificar en el arreglo ingresado: ";
    cin >> x;

    int comprobador = 0;

    for (i=0; i<n; i++){
        if (x==vector[i]){
            comprobador++;
        }
    }

    cout << endl;

    if (comprobador==1){
        cout << "El numero " << x << " se repite " << comprobador << " vez en el arreglo.";
    }else{
        cout << "El numero " << x << " se repite " << comprobador << " veces en el arreglo.";
    }

    cout << endl << endl;

    return 0;
}