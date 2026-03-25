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
	int nip = 1313;
	int intento;
	cout<<"Teclea tu NIP ";
	cin>>intento;
	if(intento==nip)
	cout<<"**Correcto**\n"<<intento<<" es tu numero de NIP";
	else
	cout<<"Incorrecto. ";
	intento<nip?cout<<"Demasiado bajo":cout<<"Demasiado alto";
	return 0;
}
	