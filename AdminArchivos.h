#pragma once
#include <string>
#include <vector>
#include "Viaje.h"
using namespace std;
class AdminArchivos{
	string archivoViajes;
	string archivoResultados;
	vector<Viaje*> viajes;
public:
	void leerViajes();
	void guardarResultados();
};

