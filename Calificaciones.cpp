#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc,ri,rb,rt,cf,ct,pt;
	cout<<"Cuantas respuestas correctas conseguiste ? ";//Cada una correcta vale 5 puntos
	cin>>rc;
	cout<<"Cuantas respuestas incorrectas coseguiste ? ";//Cada una incorrecta resta un punto
	cin>>ri;
	cout<<"Respuestas en blanco: ";//Cada una en blanco vale cero puntos
	cin>>rb;
	rt=rc+ri+rb;
	cf=(rc*5)-ri;
	pt=(cf*100)/(rt*5);
	cout<<"Tu calificacion final es de "<<pt;
	return 0;
}