#include <iostream>
#include <windows.h>
#include <string>
#include "utilidades.h"
using namespace std;

void menuprinc (){
	int op;
	cout<<"----- MENÚ PRINCIPAL -----"<<endl;
	cout<<"1) Gestión de Pactientes"<<endl;
	cout<<"2) Visualización de Datos"<<endl;
	cout<<"3) Análisis de Datos"<<endl,
	cout<<"4) Funcionalidades Específicas"<<endl;
	cout<<"5) Cerrar el programa"<<endl;
	cout<<"Elija su opción: ";
	cin>>op;
};

int main (){
	SetConsoleOutputCP(CP_UTF8);
	menuprinc ();
		
	return 0;
}