#include <iostream>
#include "paciente.h"
using namespace std;

void crearPaciente(Paciente &paciente, string nombre, int edad, string genero, string numeroDNI, string tipoSangre){
	paciente.nombre = nombre;
	paciente.edad = edad;
	paciente.genero = genero;
	paciente.numeroDNI = numeroDNI;
	paciente.tipoSangre = tipoSangre;
	paciente.numEntradasHistorial = 0;
}

string obtenerPaciente(Paciente &paciente){
	return paciente.nombre;
}

void establecerNombre(Paciente &paciente, string nombre){
	paciente.nombre = nombre;
}

int obtenerEdad(Paciente &paciente){
	return paciente.edad;
}

void establecerEdad(Paciente &paciente, int edad){
	paciente.edad = edad;
}

string obtenerGenero(Paciente &paciente){
    return paciente.genero;
}

void establecerGenero(Paciente &paciente, string genero){
    paciente.genero = genero;
}

string obtenerNumeroDNI(Paciente &paciente){
    return paciente.numeroDNI;
}

void establecerNumeroDNI(Paciente &paciente, string numeroDNI){
    paciente.numeroDNI = numeroDNI;
}

string obtenerTipoSangre(Paciente &paciente){
    return paciente.tipoSangre;
}

void obtenerTipoSangre(Paciente &paciente, string tipoSangre){
    paciente.tipoSangre = tipoSangre;
}

void agregarEntradaHistorial(Paciente &paciente, string entrada){
    if (paciente.numEntradasHistorial < 10){
        paciente.historialMedico[paciente.numEntradasHistorial++] = entrada;
    } else{
        cout << "El historial médico está lleno." << endl;
    }
}

void mostrarHistorialMedico(const Paciente &paciente) {
    cout << "Historial médico:" << endl;
    for (int i = 0; i < paciente.numEntradasHistorial; i++) {
        cout << paciente.historialMedico[i] << endl;
    }
}

void mostrarInformacion(const Paciente &paciente) {
    cout << "Nombre: " << paciente.nombre << endl;
    cout << "Edad: " << paciente.edad << endl;
    cout << "Genero: " << paciente.genero << endl;
    cout << "Número de Identificación: " << paciente.numeroDNI << endl;
    cout << "Tipo de Sangre: " << paciente.tipoSangre << endl;
    mostrarHistorialMedico(paciente);
}