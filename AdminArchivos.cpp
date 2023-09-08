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
        string ciudad,v1_str,v2_str;

            if (getline(iss, ciudad, ',') &&
                getline(iss, v1_str, ',') &&
                getline(iss, v2_str)) {
                float v1 = stof(v1_str);
                float v2 = stof(v2_str);
                viajes.emplace_back(ciudad, v1, v2);

        }
        else {
           cerr << "Error " << line << endl;
        }
    }
}
void AdminArchivos::guardarResultados() {

}