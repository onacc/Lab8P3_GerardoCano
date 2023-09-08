#include "Furgon.h"
Furgon::Furgon() {
}
Furgon::Furgon(int ejes) :Vehiculo(10, 0.08, 5) {
	this->ejes = ejes;
}
