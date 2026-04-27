#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n,m;
	float r;	
	cout<<"Dame un numero \n";
	cin>>n;
	cout<<"Dame otro numero \n";
	cin>>m;
	if (m==0)
		cout<<"No se puede";
	else
		cout<<n/m;
	return 0;
}