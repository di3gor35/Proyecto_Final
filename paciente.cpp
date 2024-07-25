#include <iostream>
#include "paciente.h"
using namespace std;

void mostrarPaciente(Paciente paciente){
	cout << "El paciente se llama " << paciente.nombre << " y su edad es " << paciente.edad;
}