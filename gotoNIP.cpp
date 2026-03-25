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
	int intento=0;
	gotoxy(50,13);
	cout<<"Teclea tu NIP ""\n";
	cin>>intento;
	if(intento==nip)
	{
	gotoxy (50,15);
	printf("**Correcto**\nAcceso Concedido");
	}
	else 
	{
	gotoxy (50,15);
	printf("**Incorrecto**\nAcceso Denegado");
	}	
	return 0;
}