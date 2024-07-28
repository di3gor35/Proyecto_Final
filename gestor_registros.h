#ifndef GESTOR_REGISTROS_H
#define GESTOR_REGISTROS_H

#include "paciente.h"

const int MAX_PACIENTES = 100;

struct RegistroPacientes {
    Paciente pacientes[MAX_PACIENTES];
    int numPacientes;
};

void iniciarRegistro(RegistroPacientes &registro); // Inicia el registro con 0 pacientes
void agregarPaciente(RegistroPacientes &registro, Paciente paciente); // Agrega un paciente al registro
void listarPacientes(RegistroPacientes registro); // Lista todos los pacientes del registro
void buscarPaciente(RegistroPacientes registro, string numeroDNI); // Busca y devuelve un dato de estructura Paciente o devuelve una estructura vacia
void actualizarPaciente(RegistroPacientes &registro, string numeroDNI); // Busca y actualiza los datos de un paciente por su numero de DNI en el registro
void eliminarPaciente(RegistroPacientes &registro, string numeroDNI); // Busca y elimina un dato de estructura Paciente en el registro



#endif