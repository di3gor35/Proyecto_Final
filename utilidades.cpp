#include <iostream>
#include "paciente.h"
#include "utilidades.h"
#include "gestor_registros.h"

using namespace std;

void menuprinc (RegistroPacientes &registro){
	char op;
	do {
		cout<<"----- MENÚ PRINCIPAL -----"<<endl;
		cout<<"1) Gestión de Pacientes"<<endl;
		cout<<"2) Visualización de Datos"<<endl;
		cout<<"3) Análisis de Datos"<<endl,
		cout<<"4) Funcionalidades Específicas"<<endl;
		cout<<"5) Cerrar el programa"<<endl;
		cout<<"Elija su opción (1-5): ";
		cin>>op;
		cout<<endl;
		
		switch (op){
			case '1':
				cout<<"Entrando al menú "<<op<<"..."<<endl;
				menugestpac (registro);
				break;
			case '2':
				cout<<"Entrando al menú "<<op<<"..."<<endl;
				menuvisdat (registro);
				break;
			case '3':
				cout<<"Entrando al menú "<<op<<"..."<<endl;
				menuandat (registro);
				break;
			case '4':
				cout<<"Entrando al menú "<<op<<"..."<<endl;
				menufunesp (registro);
				break;
			case '5':
				cout<<"Muchas gracias por usar el programa."<<endl;
				break;
			default:
				cout<<"Opción inválida, pruebe otra vez..."<<endl;
				cout<<endl;
				break;
		}

	} while (op!='5');
};
	

void menugestpac (RegistroPacientes &registro){
	char op;
	do {
		cout<<endl;
		cout<<"----- 1.GESTIÓN DE PACIENTES -----"<<endl;
		cout<<"1) Agregar nuevo paciente"<<endl;
		cout<<"2) Eliminar paciente"<<endl;
		cout<<"3) Actualizar información de paciente"<<endl;
		cout<<"4) Buscar paciente por DNI"<<endl;
		cout<<"5) Volver al menú principal"<<endl;
		cout<<"Elija su opción (1-5): ";
		cin>>op;
		cout<<endl;
		
		switch (op){
			case '1':
				crearPaciente2(registro);
				break;
			case '2':
				eliminarPaciente(registro);
				break;
			case '3':
				actualizarPaciente(registro);
				break;
			case '4':
				buscarPaciente(registro);
				break;
			case '5':
				cout<<"Volviendo al menú principal..."<<endl<<endl;
				break;
			default:
				cout<<"Opción inválida, pruebe otra vez..."<<endl;
				break;
		}
	} while (op!='5');
};

void menuvisdat (RegistroPacientes &registro){
	char op;
	do {
		cout<<endl;
		cout<<"----- 2.VISUALIZACIÓN DE DATOS -----"<<endl;
		cout<<"1) Listar todos los pacientes"<<endl;
		cout<<"2) Mostrar pacientes ordenados por nombre"<<endl;
		cout<<"3) Mostrar pacientes ordenados por edad"<<endl;
		cout<<"4) Volver al menú principal"<<endl;
		cout<<"Elija su opción (1-4): ";
		cin>>op;
		cout<<endl;
		
		switch (op){
			case '1':
				listarPacientes(registro);
				break;
			case '2':
				listarPacientesPorNombre(registro);
				break;
			case '3':
				listarPacientesPorEdad(registro);
				break;
			case '4':
				cout<<"Volviendo al menú principal..."<<endl<<endl;
				break;
			default:
				cout<<"Opción inválida, pruebe otra vez..."<<endl;
				break;
		}
	} while (op!='4');
};

void menuandat (RegistroPacientes &registro){
	char op;
	do {
		cout<<endl;
		cout<<"----- 3.ANÁLISIS DE DATOS -----"<<endl;
		cout<<"1) Calcular edad promedio de pacientes"<<endl;
		cout<<"2) Mostrar paciente más joven y más anciano"<<endl;
		cout<<"3) Contar pacientes por género"<<endl;
		cout<<"4) Contar pacientes por grupo sanguíneo"<<endl;
		cout<<"5) Volver al menú pricipal"<<endl;
		cout<<"Elija su opción (1-5): ";
		cin>>op;
		cout<<endl;
		
		switch (op){
			case '1':
				mostrarEdadPromedioPacientes(registro);
				break;
			case '2':
				mostrarPacienteMasJovenMasLongevo(registro);
				break;
			case '3':
				contarPacientesPorGeneros(registro);
				break;
			case '4':
				contarPacientesPorGrupoSanguineo(registro);
				break;
			case '5':
				cout<<"Volviendo al menú principal..."<<endl<<endl;
				break;
			default:
				cout<<"Opción inválida, pruebe otra vez..."<<endl;
				break;
		}
		
	} while (op!='5');
};
	
void menufunesp (RegistroPacientes &registro){
	char op;
	do {
		cout<<endl;
		cout<<"----- 4.FUNCIONALIDADES ESPECÍFICAS -----"<<endl;
		cout<<"1) Filtrar pacientes por tipo de sangre"<<endl;
		cout<<"2) Agregar historial médico"<<endl;
		cout<<"3) Mostrar historial médico de un paciente"<<endl;
		cout<<"4) Volver al menú pricipal"<<endl;
		cout<<"Elija su opción (1-4): ";
		cin>>op;
		cout<<endl;
		
		switch (op){
			case '1':
				mostrarPacientesPorGrupoSanguineo(registro);
				break;
			case '2':
				agregarHistorial(registro);
				break;
			case '3':
				mostrarHistorial(registro);
				break;
			case '4':
				cout<<"Volviendo al menú principal..."<<endl<<endl;
				break;
			default:
				cout<<"Opción inválida, pruebe otra vez..."<<endl;
				break;
		}
	} while (op!='4');
};

void iniciarDatosPredefinidos (RegistroPacientes &registro){
	Paciente paciente1, paciente2, paciente3, paciente4, paciente5;
	crearPaciente (paciente1, "Juan Gabriel Velasquez Alvarado", 18, "Masculino", "75894432", "O+");
	crearPaciente (paciente2, "Nikol Esmeralda Mallma Anahua", 17, "Femenino", "78712491", "O+");
	crearPaciente (paciente3, "Susana Díaz Díaz", 60, "Femenino", "44827149", "O-");
	crearPaciente (paciente4, "Gabriel Estefy Peñaolza Gutierrez", 50, "Masculino", "76721486", "AB+");
	crearPaciente (paciente5, "Niel Brham Zavala Meza", 36, "Masculino", "44570956", "B+");
	
	agregarPaciente (registro, paciente1);
	agregarPaciente (registro, paciente2);
	agregarPaciente (registro, paciente3);
	agregarPaciente (registro, paciente4);
	agregarPaciente (registro, paciente5);
}
