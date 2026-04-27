#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int x,y=1;
    cout<<"Lectura de 5 números enteros usando do while\n";
    do{
        cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
        cin>>x;
        if(x==0)
            continue;
        cout<<"Por aquí pasa solo cuando el número es diferente de 0\n";
        y++;
    }while(y<6);
    system("PAUSE");
    /*en ciclos do while o while con contador un continue afecta el número de vueltas
    originales, si están definidas 5 vueltas, se ejecutarán 5 vueltas válidas, aunque
    se hayan ejecutado 10 no válidas, dando un total de 15 repeticiones, en un ciclo for
    estándar esto no ocurre, si son 5 vueltas se darán sólo 5 vueltas, sean o no válidas*/
    system("CLS");
    cout<<"Lectura de 5 números enteros usando un for estándar\n";
    for(y=1;y<6;y++){
        cout<<"Dame un número que no sea 0 (intento #"<<y<<")\n";
        cin>>x;
        if(x==0)
            continue;
        cout<<"Por aquí pasa solo cuando el número es diferente de 0\n";
        //y++; para que se comporte como el do o el while
    }
    return 0;
}