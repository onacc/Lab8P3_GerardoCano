#include "Viaje.h"
Viaje::Viaje() {
}
Viaje::Viaje(string ciudad, float distancia, float carga) {
	this->ciudad = ciudad;
	this->distancia = distancia;
	this->carga = carga;
}
void Viaje:: asignarVehiculo(Vehiculo* vehi) {
	this->vehiculo = vehi;
}
void Viaje::calcularTiempoCosto() {
	tiempoEstimado = 0;
	costoEstimado = 0;
	tiempoEstimado = distancia / vehiculo->getVelocidad();
	costoEstimado = vehiculo->getConsumo() * distancia * 20;
}
string Viaje::getCiudad() {
    return ciudad;
}

float Viaje::getDistancia() {
    return distancia;
}

float Viaje::getCarga()  {
    return carga;
}

float Viaje::getTiempoEstimado() {
    return tiempoEstimado;
}

float Viaje::getCostoEstimado() {
    return costoEstimado;
}
Vehiculo* Viaje::getVehiculo() {
	return vehiculo;
}
Viaje::~Viaje() {
	delete vehiculo;
}
