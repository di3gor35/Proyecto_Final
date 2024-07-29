#include <iostream>
#include <windows.h>
#include <string>
#include "utilidades.h"
using namespace std;

void menuprinc (){
	int op;
	do {
		cout<<"----- MENÚ PRINCIPAL -----"<<endl;
		cout<<"1) Gestión de Pactientes"<<endl;
		cout<<"2) Visualización de Datos"<<endl;
		cout<<"3) Análisis de Datos"<<endl,
		cout<<"4) Funcionalidades Específicas"<<endl;
		cout<<"5) Cerrar el programa"<<endl;
		cout<<"Elija su opción: ";
		cin>>op;
		cout<<endl<<endl;
	
		switch (op){
			case 1:
				menugestpac ();
				break;
			case 2:
				menuvisdat ();
				break;
			case 3:
				menuandat ();
				break;
			case 4:
				menufunesp ();
				break;
			case 5:
				cout<<"Cerrando el programa";
				break;
			default:
				cout<<"Intente otra vez: ";
		}
	} while (op!=5);
};
	

void menugestpac (){
	int op;
	do {
		cout<<"----- GESTIÓN DE PACIENTES -----"<<endl;
		cout<<"1) Agregar nuevo paciente"<<endl;
		cout<<"2) Eliminar paciente"<<endl;
		cout<<"3) Actualizar información de paciente"<<endl;
		cout<<"4) Buscar paciente por DNI"<<endl;
		cout<<"5) Volver al menú principal"<<endl;
		cout<<"Elija su opción: ";
		cin>>op;
		cout<<endl<<endl;
		
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
				break;
		}
	} while (op!=5);
};

void menuvisdat (){
	int op;
	do {
		cout<<"----- VISUALIZACIÓN DE DATOS -----"<<endl;
		cout<<"1) Listar todos los pacientes"<<endl;
		cout<<"2) Mostrar pacientes ordenados por nombre"<<endl;
		cout<<"3) Mostrar pacientes ordenados por edad"<<endl;
		cout<<"4) Volver al menú principal"<<endl;
		cout<<"Elija su opción: ";
		cin>>op;
		cout<<endl<<endl;
		
		switch (op){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	} while (op!=4);
};

void menuandat (){
	int op;
	do {
		cout<<"----- ANÁLISIS DE DATOS -----"<<endl;
		cout<<"1) Calcular edad promedio de pacientes"<<endl;
		cout<<"2) Mostrar paciente más joven y más anciano"<<endl;
		cout<<"3) Contar pacientes por género"<<endl;
		cout<<"4) Contar pacientes por tipo de sangre"<<endl;
		cout<<"5) Volver al menú pricipal"<<endl;
		cout<<"Elija su opción: ";
		cin>>op;
		cout<<endl<<endl;
		
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
				break;
		}
	} while (op!=5);
};
	
void menufunesp (){
	int op;
	do {
		cout<<"----- FUNCIONALIDADES ESPECÍFICAS -----"<<endl;
		cout<<"1) Filtrar pacientes por tipo de sangre"<<endl;
		cout<<"2) Mostrar historial médico de un paciente"<<endl;
		cout<<"3) Generar reporte de pacientes con condiciones específicas"<<endl;
		cout<<"4) Volver al menú pricipal"<<endl;
		cout<<"Elija su opción: ";
		cin>>op;
		cout<<endl<<endl;
		
		switch (op){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
	} while (op!=4);
};

int main (){
	menuprinc ();
	
	return 0;
}