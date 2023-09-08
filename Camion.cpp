#include "Camion.h"
Camion::Camion() {

}
Camion::Camion(string tipo):Vehiculo(90,0.15,30) {
	this->tipo = tipo;
}