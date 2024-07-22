#include <iostream>
#include "paciente.h"
using namespace std;

int main() {
	Paciente paciente;
	paciente.nombre = "Jose";
	paciente.edad = 45;
	
	mostrarPaciente(paciente);
	return 0;
}