#ifndef GESTOR_REGISTROS_H
#define GESTOR_REGISTROS_H

#include "paciente.h"

const int MAX_PACIENTES = 100;

struct RegistroPacientes {
    Paciente pacientes[MAX_PACIENTES];
    int numPacientes;
};

void iniciarRegistro(RegistroPacientes &registro);
void agregarPaciente(RegistroPacientes &registro, Paciente paciente);
void listarPacientes(RegistroPacientes registro);

#endif