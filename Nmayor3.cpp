#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n1,n2,n3,nmayor;
	cout<<"Dame el valor del numero uno ";
	cin>>n1;
	cout<<"Dame el valor de numero dos ";
	cin>>n2;
	cout<<"Dame el valor de numero tres ";
	cin>>n3;
	if (n1==n2 && n2==n3)
		nmayor=-1;
		if (n1>=n2 && n1>=n3)
			nmayor=n1;
		else
			if (n2>=n1 && n2>=n3)
			nmayor=n2;
			else 
			nmayor=n3;
	if (nmayor==-1)
		cout<<"Los numero son iguales";
	else
	cout<<"El numero mayor entre los 3 es "<<nmayor;
	return 0;
}
		
		
		
	