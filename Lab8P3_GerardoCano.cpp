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
            switch (opcion) {
            case 1:
                float cilindraje;
                cout << "\nIngrese cilindraje\n";
                cin >> cilindraje;
                Motocicleta moto(cilindraje);
                Motocicleta *motoptr = &moto;
                vehiculos.push_back(motoptr);
                break;
            case 2:
                int ejes;
                cout << "\nIngrese cantidad de ejes\n";
                cin >> ejes;
                Furgon fur(ejes);
                Furgon* furptr = &fur;
                vehiculos.push_back(furptr);
                break;
            case 3:
                string tipo;
                cout << "\nIngrese tipo\n";
                cin >> tipo;
                Camion cam(tipo);
                Camion* camptr = &cam;
                vehiculos.push_back(camptr);
                break;
            }
        case 2:
            for (Vehiculo* vehi : vehiculos) {
                cout << vehi;
            }
            break;
        case 3:
            am.leerViajes();
            break;
        case 4:
            break;
        case 5:
            break;
        case 0:
            vehiculos.clear();
            vehiculos.shrink_to_fit();
            break;


        }
    } while (opcion);
}
int main(){

    menu();
}

