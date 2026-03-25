#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip = 1313;
	int intento=0;
	cout<<"Teclea tu NIP ""\n";
	cin>>intento;
	if(intento==nip)
	printf("**Correcto**\nAcceso Concedido");
	else 
	printf("**Incorrecto**\nAcceso Denegado");
	return 0;
}