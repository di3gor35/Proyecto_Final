#include <iostream>
#include "paciente.h"
using namespace std;

void crearPaciente(Paciente &paciente, string nombre, int edad, string genero, string numeroDNI, string tipoSangre){
	paciente.nombre = nombre;
	paciente.edad = edad;
	paciente.genero = genero;
	paciente.numeroDNI = numeroDNI;
	paciente.tipoSangre = tipoSangre;
	paciente.numEntradasHistorial = 0;
}

void mostrarHistorialMedico(const Paciente &paciente) {
    cout << "Historial médico:" << endl;
    for (int i = 0; i < paciente.numEntradasHistorial; i++) {
        cout << paciente.historialMedico[i] << endl;
    }
}

void mostrarInformacion(const Paciente &paciente) {
    cout << "Nombre: " << paciente.nombre << endl;
    cout << "Edad: " << paciente.edad << endl;
    cout << "Genero: " << paciente.genero << endl;
    cout << "DNI: " << paciente.numeroDNI << endl;
    cout << "Tipo de Sangre: " << paciente.tipoSangre << endl;
    //mostrarHistorialMedico(paciente);
}