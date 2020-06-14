#include "iostream"

using namespace std;

void mostrar (int, int, int);

int main (void)
{
    int dia, mes, ano;
    
    cout << endl;
    cout << "Este es un programa que marca un dia siguiente de la fecha insertada" << endl << endl;

    cout << "Ingrese el numero del dia: ";
    cin >> dia;
    cout << endl;
    cout << "Ingrese el numero del mes: ";
    cin >> mes;
    cout << endl;
    cout << "Ingrese el ano: ";
    cin >> ano;
    cout << endl;

    int comprobacion = ano % 400;
    int comprobacion2 = ano % 4;
    int comprobacion3 = ano % 100;

    if (mes >= 13 || mes <= 0){
        cout << "Un ano no tiene ese numero de meses, escriba la fecha otra vez";
        cout << endl << endl;
    }else if (ano < 1){
        cout << "No existen los anos negativos, escriba la fecha otra vez";
        cout << endl << endl;
    }else if (mes == 1){
        if (dia > 31 || dia <= 0){
            cout << "Enero no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
                if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 2){
        if (comprobacion == 0){
            if (dia > 29 || dia <= 0){
                cout << "Febrero no tiene ese numero de dia en ano bisiesto, escriba la fecha otra vez.";
                cout << endl << endl;
                }else{
                    dia ++;
                    if (dia >= 30){
                    dia = 1;
                    mes ++;
                }
                mostrar(dia, mes, ano);
                }
            }else if(comprobacion2 == 0 && comprobacion3 != 0){
                if (dia > 29 || dia <= 0){
                cout << "Febrero no tiene ese numero de dia en ano no bisiesto, escriba la fecha otra vez.";
                cout << endl << endl;
                }else{
                    dia ++;
                    if (dia >= 30){
                    dia = 1;
                    mes ++;
                }
                mostrar(dia, mes, ano);
                }
            }else{
                if (dia > 28 || dia <= 0){
                cout << "Febrero no tiene ese numero de dia en ano no bisiesto, escriba la fecha otra vez.";
                cout << endl << endl;
                }else{
                    dia ++;
                    if (dia >= 29){
                    dia = 1;
                    mes ++;
                }
                mostrar(dia, mes, ano);
                }
            }
    }else if (mes == 3){
        if (dia > 31 || dia <= 0){
            cout << "Marzo no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 4){
        if (dia > 30 || dia <= 0){
            cout << "Abril no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 31){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if(mes ==5){
        if (dia > 31 || dia <= 0){
            cout << "Mayo no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 6){
        if (dia > 30 || dia <= 0){
            cout << "Junio no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 31){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 7){
        if (dia > 31 || dia <= 0){
            cout << "Juilo no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 8){
        if (dia > 31 || dia <= 0){
            cout << "Agosto no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 9){
        if (dia > 30 || dia <= 0){
            cout << "Septiembre no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 31){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 10){
        if (dia > 31 || dia <= 0){
            cout << "Octubre no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 11){
        if (dia > 30 || dia <= 0){
            cout << "Noviembre no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 31){
                dia = 1;
                mes ++;
            }
            mostrar(dia, mes, ano);
        }
    }else if (mes == 12){
        if (dia > 31 || dia <= 0){
            cout << "Diciembre no tiene ese numero de dia, escriba la fecha otra vez.";
            cout << endl << endl;
        }else{
                dia ++;
            if (dia >= 32){
                dia = 1;
                mes ++;
            }if (mes > 12){
                mes = 1;
                ano ++;
            }
            mostrar(dia, mes, ano);
        }
    }

    return 0;
}

void mostrar (int dia, int mes, int ano)
{
    if (dia < 10){
        cout << 0 << dia << "/";
    }else{
        cout << dia << "/";
    }

    if (mes < 10){
        cout << 0 << mes << "/";
    }else{
        cout << mes << "/";
    }
        cout << ano;
    cout << endl << endl;
}