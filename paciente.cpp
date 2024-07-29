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
