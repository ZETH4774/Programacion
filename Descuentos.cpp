#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float precio,precioDes,descuento,pctd;
	cout<<"Dime el precio del producto ";
	cin>>precio;
	cout<<"Dime el descuento aplicado ";
	cin>>pctd;
	descuento=precio*pctd/100;
	precioDes=precio-descuento;
	cout<<"El precio con descuetno es de "<<precioDes;
	return 0;
}