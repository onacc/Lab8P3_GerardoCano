#include "Vehiculo.h"
Vehiculo::Vehiculo() {

}
Vehiculo::Vehiculo(float vel, float cons, float cap) {
	this->velocidad = vel;
	this->consumo = cons;
	this->capacidad = cap;
}
float Vehiculo::getCapacidad() {
	return capacidad;
}
float Vehiculo::getVelocidad() {
	return velocidad;
}
float Vehiculo::getConsumo() {
	return consumo;
}
void Vehiculo::setCapacidad(float cap) {
	this->capacidad = cap;
}
void Vehiculo::setConsumo(float cons) {
	this->consumo = cons;
}
void Vehiculo::setVelocidad(float vel) {
	this->velocidad = vel;
}
