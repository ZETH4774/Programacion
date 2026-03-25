#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int partidosG,partidosE,partidosP,partidosJ,puntosO,puntosT;
	float pctj;
	char equipo [20];
	cout<<"Cual es el nombre del equipo ? (Nombre sin espacios) ";
	cin>>equipo;
	cout<<"El nombre del equipo es "<<equipo<<"\n";
	cout<<"Cuantos partidos ganaron ? \n";
	cin>>partidosG;
	cout<<"Cuantos partidos empataron ? \n";
	cin>>partidosE;
	cout<<"Cuantos partidos perdieron ? \n";
	cin>>partidosP;
	partidosJ=partidosG+partidosE+partidosP;
	puntosT=(partidosJ*3);
	puntosO=partidosG*3+partidosE;
	pctj=puntosO*100/puntosT;
	cout<<"Partidos Jugados:"<<partidosJ<<"\n";
	cout<<"Puntos obtenidos: "<<puntosO<<"\n";
	cout<<"Con un total de "<<puntosT<<" puntos disputados el porcentaje obtenido por el equipo "<<equipo<<"\n"" es "<<pctj<<"%.";
	return 0;                   
}
// Nombre Completo: Ivan Alejandro Arambula Rios
// Numero de control: 25041732