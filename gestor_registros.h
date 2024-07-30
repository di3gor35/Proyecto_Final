#ifndef GESTOR_REGISTROS_H
#define GESTOR_REGISTROS_H

#include "paciente.h"
// Cantidad maxima de pacientes en el registro
const int MAX_PACIENTES = 100;

// Estructura del registro de pacientes
struct RegistroPacientes {
    Paciente pacientes[MAX_PACIENTES];
    int numPacientes;
};

void iniciarRegistro(RegistroPacientes &registro); // Inicia el registro con 0 pacientes
void agregarPaciente(RegistroPacientes &registro, Paciente paciente); // Agrega un paciente al registro
void listarPacientes(RegistroPacientes registro); // Lista todos los pacientes del registro
void buscarPaciente(RegistroPacientes registro); // Busca y devuelve un dato de estructura Paciente o devuelve una estructura vacia
void actualizarPaciente(RegistroPacientes &registro); // Busca y actualiza los datos de un paciente por su numero de DNI en el registro
void eliminarPaciente(RegistroPacientes &registro); // Busca y elimina un dato de estructura Paciente en el registro
void listarPacientesPorEdad(RegistroPacientes registro); // Listar los pacientes por la edad
void listarPacientesPorNombre(RegistroPacientes registro); // Listar los pacientes alfabeticamente por nombre
void mostrarEdadPromedioPacientes(RegistroPacientes registro); // Muestra la edad promedio de los pacientes del registro
void mostrarPacienteMasJovenMasLongevo(RegistroPacientes registro); // Muestra al paciente mas joven y mas longevo en el registro
void contarPacientesPorGeneros(RegistroPacientes registro); // Cuenta y muestra la cantidad de pacientes en el registro por generos
void contarPacientesPorGrupoSanguineo(RegistroPacientes registro); // Cuenta y muestra la cantidad de pacientes en el registro por grupos sanguineos
void mostrarPacientesPorGrupoSanguineo(RegistroPacientes registro); // Mostrar pacientes con el grupo sanguineo esperado
void mostrarHistorial(RegistroPacientes registro); // Mostrar el historial medico de un paciente
void crearPaciente2(RegistroPacientes &registro); // Pide los datos de un paciente y lo almacena en el registro
void agregarHistorial(RegistroPacientes &registro); // Agregar el historial medico de un paciente al registro
int validarCantidadHistorialMedico(int numEntradasHistorial); // Valida la cantidad recibida para pedir al usuario nuevamente la cantidad de nuevos datos si el limite es superado


#endif