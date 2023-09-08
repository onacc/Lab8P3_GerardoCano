// Lab8P3_GerardoCano.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehiculo.h"
#include "Viaje.h"
#include "Camion.h"
#include "Motocicleta.h"
#include "Furgon.h"
#include "AdminArchivos.h"
#include <vector>
using namespace std;
void menu() {
    AdminArchivos am;
    vector<Vehiculo*> vehiculos;
    int opcion;
    do {
        cout << "\n---MENU---\n1. Agregar Vehiculo\n2. Listar Vehiculos\n3. Leer archivo de viajes\n4. Asignar viajes\n5. Guardar informacion de viajes\n0. Salir\n";
        cin >> opcion;
        switch(opcion) {
        case 1:
            cout << "\n1. Motocicleta\n2. Furgon\n3. Camion";

            break;
        case 3:
            am.leerViajes();
            break;

        }
    } while (opcion);
}
int main(){

    menu();
}

