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

    string line;

    while (getline(archivoViajes, line)) {
        istringstream iss(line);
        string ciudad;
        float distancia, peso;

        if (iss >> ciudad >> distancia >> peso) {
            viajes.emplace_back(ciudad, distancia, peso);
        }
        else {
           cerr << "Error parsing line: " << line << endl;
        }
    }
}
void AdminArchivos::guardarResultados() {

}