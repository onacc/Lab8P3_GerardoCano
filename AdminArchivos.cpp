#include "AdminArchivos.h"
#include <fstream> 
#include <cstdlib>
#include <iostream> 
#include <iomanip>
#include <bitset>
#include <string>
#include <sstream>

void AdminArchivos::leerViajes() {
	ifstream archivoViajes("viajes.txt", ios::in);
	if (!archivoViajes) {
		cerr << "No se pudo abrir el archivo" << endl;
		exit(EXIT_FAILURE);
	}
	archivoViajes.close();
    string linea;
    while (getline(archivoViajes, linea)) {
        istringstream iss(linea);
        string ciudad,dist_str,carga_str;
            if (getline(iss, ciudad, ',') && getline(iss, dist_str, ',') && getline(iss, carga_str)) {
                float dist = stof(dist_str);
                float carga = stof(carga_str);
                viajes.emplace_back(ciudad, dist, carga);
        }
        else {
           cerr << "Error " << linea << endl;
        }
    }
}
void AdminArchivos::guardarResultados() {
    ofstream archivo("resultados.txt", ios::out);
    if (!archivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(EXIT_FAILURE);
    }
    else {
        for (Viaje* viaje : viajes) {
            archivo << "Viaje: " << viaje->getCiudad() << ", " << viaje->getDistancia() << " km, " << viaje->getCarga() << " toneladas. Vehículo asignado: " <<
                viaje->getVehiculo() << ". Tiempo estimado: " << viaje->getTiempoEstimado() << " horas. Costo estimado: $" << viaje->getCostoEstimado() << "." << endl;
        }
    }
   

}
AdminArchivos::~AdminArchivos() {
    for (Viaje* viaje : viajes) {
        delete viaje;
    }
}