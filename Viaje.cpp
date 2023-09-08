#include "Viaje.h"
Viaje::Viaje() {
}
Viaje::Viaje(string ciudad, float distancia, float carga) {
	this->ciudad = ciudad;
	this->distancia = distancia;
	this->carga = carga;
}