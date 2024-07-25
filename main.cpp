#include <iostream>
#include "paciente.h"
#include "gestor_registros.h"

using namespace std;

int main() {
	
	RegistroPacientes registro;
	iniciarRegistro(registro);
	
	Paciente paciente;
	paciente.nombre = "Jose";
	paciente.edad = 45;
	
	mostrarPaciente(paciente);
	
	
	
	return 0;
}