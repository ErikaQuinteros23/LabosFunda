#include "iostream"

using namespace std;

int main (void)
{
    int horas, minutos, segundos;

    cout << endl;

    cout << "Este es un programa aumenta un segundo de la hora insertada" << endl;

    cout << endl << "Inserte horas:";
    cin >> horas;
    cout << endl;
    cout << "inserte los minutos: ";
    cin >> minutos;
    cout << endl;
    cout << "inserte los segundos: ";
    cin >> segundos;
    cout << endl;
    
    if (horas >= 24 || minutos >= 60 || segundos >= 60 || horas <= 0 || minutos <= 0 || segundos <= 0){
      cout << "La hora que ingreso no es correcta, hagalo de nuevo.";
    }else{

        //aumentando un segundo
        segundos ++;
        if (segundos >= 60){
            segundos = 0;
            minutos ++;
        }
        if (minutos >= 60){
            minutos = 0;
            horas ++;
        }
        if (horas >=24){
            horas = 0;
        }

        //agregado de ceros

        cout << "La hora aumentando un segundo es ";

        if (horas <= 10){
            cout << 0 << horas << ":";
        }else{
            cout << horas << ":";
        }

        if (minutos <=10){
            cout << 0 << minutos << ":";
        }else{
            cout << minutos << ":";
        }

        if (segundos <= 10){
            cout << 0 << segundos;
        }else{
            cout << segundos;
        }

    }

    cout << endl << endl;
}