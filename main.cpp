#include <iostream>
#include <windows.h>
#include "paciente.h"
#include "gestor_registros.h"
#include "utilidades.h"

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	RegistroPacientes registro;
	iniciarRegistro(registro);
	iniciarDatosPredefinidos (registro);
	cout << "Bienvenidos al: Programa de Simulación de un Sistema de Información de Registro de Pacientes" << endl << endl;
	menuprinc(registro);
	
	return 0;
}