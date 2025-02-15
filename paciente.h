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
void mostrarHistorialMedico(const Paciente &paciente);
void mostrarInformacion(const Paciente &paciente);

#endif