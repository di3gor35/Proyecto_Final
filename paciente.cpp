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

string getGenero(const Paciente &paciente) {
    return paciente.genero;
}

void setGenero(Paciente &paciente, string genero) {
    paciente.genero = genero;
}