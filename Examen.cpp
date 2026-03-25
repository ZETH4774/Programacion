#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int prueba,pruebaF;
	cout<<"Esto es de prueba para ver si aparece";
	cin>>prueba;
	pruebaF=prueba*5;
	cout<<"La prueba es de "<<pruebaF<<"\n";
	pruebaF=pruebaF*5;
	cout<<"La pruebaReal es de "<<pruebaF<<"\n";
	return 0;
}