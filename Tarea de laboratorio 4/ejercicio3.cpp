#include "iostream"

using namespace std;

int main(void)
{
   cout << endl;

   int n;

   cout << "Este es un programa que verifica si un numero es positivo o negativo" << endl << endl;

   cout << "Ingrese un numero: ";
   cin >> n;

   cout << endl;

   if (n>0){
       cout << n << " es un numero positivo.";
   }else if (n<0){
       cout << n << " es un numero negativo.";
   }else{
       cout << n << " es un numero neutro.";
   }

   cout << endl << endl;

   return 0;
}