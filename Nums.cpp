#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int num;
	cout<<"Dame un numero ";
	cin>>num;
	if (num>0)
		cout<<"El numero es positivo";
		else
			if (num<0)
				cout<<"El numero es negativo";
				else
					cout<<"El numero es cero";
	return 0;
}