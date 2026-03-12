#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float gasolina,distancia,gasolinaR,gasolinaG;
	cout<<"Cuantos litros de gasolina tienes al inicio del trayecto ? ";
	cin>>gasolina;
	cout<<"Cuanta distancia recorriste ? ";
	cin>>distancia;
	gasolinaG=distancia/gasolina;
	cout<<"La gasolina gastada fue de "<<gasolinaG<<" kilometro por litro";
		return 0;
}