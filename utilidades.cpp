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
	
	switch (op){
		case 1:
			menugestpac ();
			
	}
};

void menugestpac (){
	int op;
	cout<<"----- GESTIÓN DE PACIENTES -----"<<endl;
	cout<<"1) Agregar nuevo paciente"<<endl;
	cout<<"2) Eliminar paciente"<<endl;
	cout<<"3) Actualizar información de paciente"<<endl;
	cout<<"4) Buscar paciente por DNI"<<endl;
	cout<<"5) Volver al menú principal"<<endl;
	cout<<"Elija su opción: ";
	cin>>op;
	
	switch (op){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			menuprinc ();	
	}
};

int main (){
	SetConsoleOutputCP(CP_UTF8);
	menuprinc ();
		
	return 0;
}