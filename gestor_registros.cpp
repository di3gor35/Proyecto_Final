#include <iostream>
#include "gestor_registros.h"

using namespace std;

void iniciarRegistro(RegistroPacientes &registro){
	registro.numPacientes = 0; // Inicia el registro con 0 pacientes
}

void agregarPaciente(RegistroPacientes &registro, Paciente paciente){
	if (registro.numPacientes < MAX_PACIENTES){
		registro.pacientes[registro.numPacientes] = paciente;
		registro.numPacientes++;
	} else {
		cout << "CAPACIDAD MÁXIMA: Se alcanzó los 100 pacientes en el registro" << endl; 
	}
}

void listarPacientes(RegistroPacientes registro){
	for (int i = 0; i < registro.numPacientes; i++){
		cout << "- Paciente " << i+1 << " -" << endl;
		cout << "Nombre: " << registro.pacientes[i].nombre << endl;
        cout << "Edad: " << registro.pacientes[i].edad << endl;
        cout << "Género: " << registro.pacientes[i].genero << endl;
        cout << "DNI: " << registro.pacientes[i].numeroDNI << endl;
        cout << "Tipo de Sangre: " << registro.pacientes[i].tipoSangre << endl;
        cout << endl;
	}
}

void buscarPaciente(RegistroPacientes registro){
	string numeroDNI;
	cout << "Ingrese el número DNI del paciente: ", cin >> numeroDNI;
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			cout << "Paciente encontrado" << endl;
			cout << "Nombre: " << registro.pacientes[i].nombre << endl;
            cout << "Edad: " << registro.pacientes[i].edad << endl;
            cout << "Género: " << registro.pacientes[i].genero << endl;
            cout << "DNI: " << registro.pacientes[i].numeroDNI << endl;
            cout << "Tipo de Sangre: " << registro.pacientes[i].tipoSangre << endl;
            return;
		}
	}
	cout << "Paciente no encontrado" << endl;
}

void actualizarPaciente(RegistroPacientes &registro){
	string numeroDNI;
	cout << "Ingrese el número DNI del paciente: ", cin >> numeroDNI;
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			cout << "Paciente encontrado" << endl;
			cout << "Introduzca los nuevos datos:" << endl;
			cout << "Nombre: ", cin.ignore();
			getline(cin, registro.pacientes[i].nombre);
            cout << "Edad: ", cin >> registro.pacientes[i].edad;
            cout << "Género: ", cin >> registro.pacientes[i].genero;
            cout << "Tipo de Sangre: ", cin >> registro.pacientes[i].tipoSangre;
            cout << endl << "Se actualizaron los datos correctamente" << endl;
			return;
		}
	}
	cout << "Paciente no encontrado" << endl;
}

void eliminarPaciente(RegistroPacientes &registro) {
	string numeroDNI;
	cout << "Ingrese el número DNI del paciente: ", cin >> numeroDNI;
    for (int i = 0; i < registro.numPacientes; i++) {
        if (registro.pacientes[i].numeroDNI == numeroDNI) {
            for (int j = i; j < registro.numPacientes - 1; j++) {
                registro.pacientes[j] = registro.pacientes[j + 1];
            }
            cout << "Paciente eliminado correctamente" << endl;
            registro.numPacientes--;
            return;
        }
    }
    cout << "Paciente no encontrado" << endl;
}

void listarPacientesPorNombre(RegistroPacientes registro){
	for (int i = 0; i < registro.numPacientes - 1; i++) {
        for (int j = 0; j < registro.numPacientes - i - 1; j++) {
            if (registro.pacientes[j].nombre > registro.pacientes[j + 1].nombre) {
                Paciente temp = registro.pacientes[j];
                registro.pacientes[j] = registro.pacientes[j + 1];
                registro.pacientes[j + 1] = temp;
            }
        }
    }
    listarPacientes(registro);
}

void listarPacientesPorEdad(RegistroPacientes registro){
	for (int i = 0; i < registro.numPacientes - 1; i++) {
        for (int j = 0; j < registro.numPacientes - i - 1; j++) {
            if (registro.pacientes[j].edad > registro.pacientes[j + 1].edad) {
                Paciente temp = registro.pacientes[j];
                registro.pacientes[j] = registro.pacientes[j + 1];
                registro.pacientes[j + 1] = temp;
            }
        }
    }
    listarPacientes(registro);
}

void mostrarEdadPromedioPacientes(RegistroPacientes registro){
	float suma = 0; // Guarga la suma de las edades
	for (int i = 0; i < registro.numPacientes; i++){
		suma += registro.pacientes[i].edad;
	}
	cout << "El promedio de las edades de los pacientes es: " << suma / registro.numPacientes << endl;
}

void mostrarPacienteMasJovenMasLongevo(RegistroPacientes registro){
	int pj = 0; // Guarga el indice del paciente mas joven, inicia con el paciente 0
	int pl = 0; // Guarga el indice del paciente mas longevo, inicia con el paciente 0
 
	for (int i = 1; i < registro.numPacientes; i++){
		if (registro.pacientes[i].edad > registro.pacientes[pl].edad){
			pl = i;	
		}
		if (registro.pacientes[i].edad < registro.pacientes[pj].edad){
			pj = i;	
		}
	}
	cout << "- Paciente más joven -" << endl;
	cout << "Nombre: " << registro.pacientes[pj].nombre << endl;
	cout << "Edad: " << registro.pacientes[pj].edad << endl;
    cout << "Género: " << registro.pacientes[pj].genero << endl;
    cout << "DNI: " << registro.pacientes[pj].numeroDNI << endl;
    cout << "Tipo de Sangre: " << registro.pacientes[pj].tipoSangre << endl;
	cout << endl;
	cout << "- Paciente más longevo -" << endl;
	cout << "Nombre: " << registro.pacientes[pl].nombre << endl;
	cout << "Edad: " << registro.pacientes[pl].edad << endl;
    cout << "Género: " << registro.pacientes[pl].genero << endl;
    cout << "DNI: " << registro.pacientes[pl].numeroDNI << endl;
    cout << "Tipo de Sangre: " << registro.pacientes[pl].tipoSangre << endl;
}

void contarPacientesPorGeneros(RegistroPacientes registro){
	int chombres = 0, cmujeres = 0; // Contador de pacientes hombres y mujeres inicializados en 0
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].genero == "Masculino"){
			chombres++;
		} else {
			cmujeres++;
		}
	}
	cout << "Cantidad de pacientes por géneros" << endl;
	cout << "Masculino: " << chombres << endl;
	cout << "Femenino: " << cmujeres << endl;
}

void contarPacientesPorGrupoSanguineo(RegistroPacientes registro){
	string grupos[] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};
	int conteo[8] = {0}; // Arreglo que almacena la cantidad de pacientes con cada grupo sanguineo y es inicializada en 0

    for (int i = 0; i < registro.numPacientes; i++){
        for (int j = 0; j < 8; j++){
            if (registro.pacientes[i].tipoSangre == grupos[j]){
                conteo[j]++;
                break;
            }
        }
    }
	cout << "Cantidad de pacientes por grupo sanguíneo" << endl;
    for (int j = 0; j < 8; j++){
        cout << "Grupo " << grupos[j] << ": " << conteo[j] << " pacientes" << endl;
    }
}

void mostrarPacientesPorGrupoSanguineo(RegistroPacientes registro){
	string tipoSangre;
	int cont = 0;
	cout << "Ingrese el grupo sanguíneo: ", cin >> tipoSangre;
    for (int i = 0; i < registro.numPacientes; i++){
        if (registro.pacientes[i].tipoSangre == tipoSangre){
            mostrarInformacion(registro.pacientes[i]);
            cout<<endl;
            cont++;
        }
    }
    if (cont == 0){
    	cout << "No se encontraron pacientes con el grupo sanguíneo " << tipoSangre << endl;
	}
}

void mostrarHistorial(RegistroPacientes registro){
	string numeroDNI;
	cout << "Ingrese el número DNI del paciente: ", cin >> numeroDNI;
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			mostrarHistorialMedico(registro.pacientes[i]);
            return;
		}
	}
	cout << "Paciente no encontrado" << endl;
}

void crearPaciente2(RegistroPacientes &registro){
	string nombre, genero, tipoSangre, numeroDNI;
	int edad;
	cout << "Nombre: ", cin.ignore();
	getline(cin, nombre);
	cout << "Edad: ", cin >> edad;
    cout << "Género: ", cin >> genero;
	cout << "DNI: ", cin >> numeroDNI;
    cout << "Tipo de Sangre: ", cin >> tipoSangre;
    cout << endl << "Nuevo paciente agregado correctamente"<<endl;
	Paciente paciente;
	crearPaciente(paciente, nombre, edad, genero, numeroDNI, tipoSangre);
	agregarPaciente(registro, paciente);
}

int validarCantidadHistorialMedico(int numEntradasHistorial){
	bool valido;
	int nantce;
	do {
		cout << "¿Cuántos antecedentes ingresará?: ", cin >> nantce;
		valido = true;
		if (nantce + numEntradasHistorial > 10){
			cout << "Con esta cantidad se supera el límite de 10 antecedentes establecido" << endl;	
			cout << "Número de antecedentes ya establecidos: " << numEntradasHistorial << endl;
			valido = false;
		}
	} while(valido == false);
	return nantce;
}

void agregarHistorial(RegistroPacientes &registro){
	string numeroDNI;
	int nantce; // Cantidad de antecedentes que se ingresaran
	cout << "Ingrese el número DNI del paciente: ", cin >> numeroDNI;
	for (int i = 0; i < registro.numPacientes; i++){
		if (registro.pacientes[i].numeroDNI == numeroDNI){
			nantce = validarCantidadHistorialMedico(registro.pacientes[i].numEntradasHistorial);
			cin.ignore();
			for(int j = registro.pacientes[i].numEntradasHistorial; j < nantce + registro.pacientes[i].numEntradasHistorial; j++){
				cout << "Antecedente " << j+1 << ": ";
				getline(cin, registro.pacientes[i].historialMedico[j]);
			}
			registro.pacientes[i].numEntradasHistorial += nantce;
            return;
		}
	}
	
}