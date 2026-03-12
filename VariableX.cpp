#include <iostream>
#include<windows.h>//SetConsole
using namespace std;
int main(void)
{
	SetConsoleOutputCP(CP_UTF8);//p/imprimir chrs especiales
	SetConsoleCP(CP_UTF8);//p/leer chrs especiales
	int x;//declara varibale entera
	cout<< "Dame un número ";
	cin>>x;
	cout<<"Hola Mundo\n";
	cout<<"La variable x vale "<<x;
	return 0;
}