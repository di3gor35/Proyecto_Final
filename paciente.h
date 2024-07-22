#ifndef PACIENTE_H
#define PACIENTE_H

struct Paciente {
	std::string nombre;
	int edad;
};

void mostrarPaciente(Paciente paciente);

#endif