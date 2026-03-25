#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y	= y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout << "Hola, esta es una prueba de la funcion gotoxy." << endl;
	gotoxy(1,1);
	cout << "Este letrero comienza en la posicion (1,1).";
	gotoxy(30,2);
	cout << "Este letrero comienza en la posicion (30,2).";
	gotoxy(1,17);
	cout << "Este letrero comieza en la posicion (1,17).";
	system("pause");
	system("cls");
	cout << "                                   Impresion en las 4 esquinas";
	gotoxy(0,0);
	cout<<"*";
	gotoxy(119,0);
	cout<<"*";
	gotoxy(0,29);
	cout<<"*";
	gotoxy(119,29);
	cout<<"*";
	return 0;
}