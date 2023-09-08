#pragma once
#include "Vehiculo.h"
#include <string>
using namespace std;
class Camion: public Vehiculo{
	string tipo;
public:
	Camion();
	Camion(string);
};

