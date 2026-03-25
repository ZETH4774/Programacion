#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int c1,c2,c3,prom;
	char nombre [20];
	cout<<"Nombre: ";
	cin>>nombre;
	cout<<"Dame tu primera calificacion ";
	cin>>c1;
	cout<<"Dame tu segunda calificacion ";
	cin>>c2;
	cout<<"Dame tu tercera calificacion ";
	cin>>c3;
	prom=(c1+c2+c3)/3;
	if (prom>0 && prom<=100)
	cout<<nombre<<", Tu promedio es de "<<prom;
		if (prom>=90 && prom<=100)
			cout<<" A";
		else
			if (prom>=80 && prom<=89)
				cout<<" B";
			else
				if (prom>=70 && prom<=79)
					cout<<" C";
				else
					if (prom>=60 && prom<=69)
						cout<<" D";
					else
						if (prom>=0 && prom<=59)
							cout<<" F";
						else
							if (prom>100)
								cout<<"Valores invalidos, Por Favor Entrega valores entre 0 y 100";
	return 0;
}