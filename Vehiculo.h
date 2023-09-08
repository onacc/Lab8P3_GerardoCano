#pragma once
class Vehiculo{
	float velocidad, consumo, capacidad;
public:
	Vehiculo();
	Vehiculo(float, float, float);
	float getCapacidad();
	float getVelocidad();
	float getConsumo();
	void setCapacidad(float);
	void setConsumo(float);
	void setVelocidad(float);
	void to_string();
};

