#ifndef PACIENTE_H
#define PACIENTE_H
using namespace std;

struct Paciente {
	string nombre;
	int edad;
	string genero;
	string numeroDNI;
	string tipoSangre;
	string historialMedico[10];
	int numEntradasHistorial;
};

void crearPaciente(Paciente &paciente, string nombre, int edad, string genero, string numeroDNI, string tipoSangre);
string obtenerNombre(const Paciente &paciente);
void establecerNombre(Paciente &paciente, string nombre);
int obtenerEdad(const Paciente &paciente);
void establecerEdad(Paciente &paciente, int edad);
string obtenerGenero(const Paciente &paciente);
void establecerGenero(Paciente &paciente, string genero);

#endif