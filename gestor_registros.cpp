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
		cout << "CAPACIDAD MAXIMA: Se alcanzo los 100 pacientes en el registro" << endl; 
	}
}

void listarPacientes(RegistroPacientes registro){
	for (int i = 0; i < registro.numPacientes; i++){
		cout << "Paciente " << i+1 << endl;
		cout << "Nombre: " << registro.pacientes[i].nombre << endl;
        cout << "Edad: " << registro.pacientes[i].edad << endl;
        cout << "Genero: " << registro.pacientes[i].genero << endl;
        cout << "DNI: " << registro.pacientes[i].numeroDNI << endl;
        cout << "Tipo de Sangre: " << registro.pacientes[i].tipoSangre << endl;
        cout << "Historial Médico: ";
		for (int j = 0; j < registro.pacientes[i].numEntradasHistorial; j++){
			cout << registro.pacientes[i].historialMedico[j] << " ";
		}
		cout << endl;
	}
}

void buscarPaciente(RegistroPacientes registro, string numeroDNI){
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			cout << "Paciente encontrado" << endl;
			cout << "Nombre: " << registro.pacientes[i].nombre << endl;
            cout << "Edad: " << registro.pacientes[i].edad << endl;
            cout << "Genero: " << registro.pacientes[i].genero << endl;
            cout << "DNI: " << registro.pacientes[i].numeroDNI << endl;
            cout << "Tipo de Sangre: " << registro.pacientes[i].tipoSangre << endl;
            cout << "Historial Médico: ";
			for (int j = 0; j < registro.pacientes[i].numEntradasHistorial; j++){
				cout << registro.pacientes[i].historialMedico[j] << " ";
			}
			cout << endl;
		}
	}
	cout << "Paciente no encontrado" << endl;
}

void actualizarPaciente(RegistroPacientes &registro, string numeroDNI){
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			cout << "Paciente encontrado" << endl;
			cout << "Introduzca los nuevos datos:" << endl;
			cout << "Nombre: ", getline(cin, registro.pacientes[i].nombre)<< endl;
            cout << "Edad: ", cin >> registro.pacientes[i].edad << endl;
            cout << "Genero: ", cin >> registro.pacientes[i].genero << endl;
            cout << "Tipo de Sangre: ", cin >> registro.pacientes[i].tipoSangre << endl;
            cout << "Historial Médico: ";
			for (int j = 0; j < registro.pacientes[i].numEntradasHistorial; j++){
				cout << j+1 << ": ", cin >> registro.pacientes[i].historialMedico[j] << endl;
			}
		}
	}
	cout << "Paciente no encontrado" << endl;
}

void eliminarPaciente(RegistroPacientes &registro, string numeroDNI) {
    for (int i = 0; i < registro.numPacientes; i++) {
        if (registro.pacientes[i].numeroDNI == numeroDNI) {
            for (int j = i; j < registro.numPacientes - 1; j++) {
                registro.pacientes[j] = registro.pacientes[j + 1];
            }
            cout << "Paciente eliminado correctamente" << endl;
            registro.numPacientes--;
            return;
        }
    }
    cout << "Paciente no encontrado" << endl;
}

