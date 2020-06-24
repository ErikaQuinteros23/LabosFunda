#include "iostream"

using namespace std;

void LeerArreglo (int, int[]);
void SumaArreglo (int[], int[], int, int[]);
void ArregloResultante (int[], int);

int main (void)
{
    int n;

    cout << endl;
    cout << "Suma de dos arreglos de la misma longitud";

    cout << endl << endl;

    do{
    cout << "Ingrese el tamano de los arreglos (solo numeros positivos): ";
    cin >> n;
    cout << endl;
    }while(n<=0);
    
    int vector1[n];
    int vector2[n];
    int vectorSuma[n];

    cout << "Ingrese los elementos del primer arreglo: " << endl;
    LeerArreglo (n, vector1);

    cout << endl;

    cout << "Ingrese los elementos del segundo arreglo: " << endl;
    LeerArreglo (n, vector2);

    cout << endl;

    SumaArreglo (vector1, vector2, n, vectorSuma);

    ArregloResultante (vectorSuma, n);

    cout << endl << endl;

    return 0;
}

void LeerArreglo (int n, int vector[])
{
    int i;
    for (i=0; i<n; i++){
        cout << "Ingrese un dato: ";
        cin >> vector[i];
    }

}

void SumaArreglo (int vector1[], int vector2[], int n, int vectorSuma[])
{
    int i;
    for (i=0; i<n; i++){
        vectorSuma[i] = vector1[i] + vector2[i];
    }
}

void ArregloResultante (int vectorSuma[], int n)
{
    int i;
    cout << "La suma de los elementos de las mismas posiciones de los dos arreglos anteriores es: { ";
    for (i=0; i<n; i++){
        cout << vectorSuma[i];
        if (i<n-1){
            cout << ", ";
        }else{ 
        cout << " ";}
    }
    cout << "}";
}