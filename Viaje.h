#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;
class Viaje{
	string ciudad;
	float distancia, carga,tiempoEstimado,costoEstimado;
	Vehiculo* vehiculo;
public:
	Viaje();
	Viaje(string, float, float);
	void asignarVehiculo(Vehiculo*);
	void calcularTiempoCosto();
    string getCiudad();
    float getDistancia();
	float getCarga();    
    float getTiempoEstimado();
	float getCostoEstimado();
	Vehiculo* getVehiculo();
	~Viaje();
};

