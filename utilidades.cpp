#include <iostream>
#include <windows.h>
#include <string>
#include "utilidades.h"
using namespace std;

void gestpac (){       
	int opc;
	do {
		cout<<"----- GESTIÓN DE PACIENTES -----"<<endl;
		cout<<"1) Agregar nuevo paciente"<<endl;
		cout<<"2) Eliminar paciente"<<endl;
		cout<<"3) Actualizar información de paciente"<<endl;
		cout<<"4) Buscar paciente por número de identificación"<<endl;
		cout<<"5) Volver al menú principal"<<endl;
		cout<<"Seleccione una opción: ";
		cin>>opc;
		
		switch (opc){
			case 1:
				agregar();
				break;
			case 2:
				eliminar();
				break;
			case 3:
				actualizar();
				break;
			case 4:
				buscar();
				break;
			case 5:
				menuprin();
				break;
			default:
				cout<<"Opción no válida. Pruebe otra vez: ";
		}
	} while (opc!=manuprinc);
}

struct Paciente{
	string nombre;
	int edad;
	float promedio;
};

void agregar (){
	
}

int main (){
	SetConsoleOutputCP(CP_UTF8);
	gestpac ();
	
	return 0;
}