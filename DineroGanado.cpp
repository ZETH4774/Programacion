#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float P1,P2,P3,Dinero;
	cout<<"Cuanto dinero consiguieron ? ";
	cin>>Dinero;
	P1=Dinero*.40;
	P2=Dinero*.35;
	P3=Dinero*.25;
	cout<<"El primer amigo gano "<<P1<<" el segundo gano "<<P2<<" y el tercero gano "<<P3;
	return 0;
}