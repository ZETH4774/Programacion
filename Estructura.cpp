#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int edad;
	bool tienePermiso;
	cout<<"Dime tu edad ";
	cin>>edad;
	cout<<"¿Tienes permiso especial? (1=Si, 0=No):";
	cin>>tienePermiso;
	if (edad>=18){
		if(tienePermiso){
			cout<<"Puedes entrar con permiso especial.";
		}else{
			cout<<"Puedes entrar";
		}
	}
	else{
		if(tienePermiso){
			cout<<"Puedes entrar con permiso especial a pesar de ser menor de edad.";	
		}else{
			cout<<"No puedes entrar por ser menor de edad y no tener permiso.";	
		}
	}
	return 0;	
}