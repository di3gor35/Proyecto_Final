#include <iostream>
#include "gestor_registros.h"

using namespace std;

void iniciarRegistro(RegistroPacientes &registro){
	registro.numPacientes = 0;
}

void agregarPaciente(RegistroPacientes &registro, Paciente paciente){
	if (registro.numPacientes < MAX_PACIENTES){
		registro.pacientes[registro.numPacientes] = paciente;
		registro.numPacientes++;
	} else {
		cout << "Se alcanzo el limite del registro para el guardado del paciente" << endl; 
	}
}

void listarPacientes(RegistroPacientes registro){
	for (int i = 0; i < registro.numPacientes; i++){
		cout << "Nombre: " << registro.pacientes[i].nombre << ", edad: " << registro.pacientes[i].edad << endl;
	}
}