#include <iostream>
#include "paciente.h"

void mostrarPaciente(Paciente paciente){
	std::cout << "El paciente se llama " << paciente.nombre << " y su edad es " << paciente.edad;
}