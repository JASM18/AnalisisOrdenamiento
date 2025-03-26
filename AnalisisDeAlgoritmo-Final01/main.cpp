#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

#include "Plantilla.hpp"
#include "Algoritmos.hpp"

using namespace std;

int main() {
    cout << "\t\t\t\t\tALGORITMO DE ORDENAMIENTO: ANALISIS DE TIEMPO" << endl;;
    srand(time(NULL));

    ofstream archivo[8]; //Genera el archivo

    int s[1000];

    int tamano = MIN_TAMANO;

    std::string arreglo_nombres[8] = {
        "1_Insercion_por_orden.csv",
        "2_Burbuja.csv",
        "3_Burbuja_optimizado.csv",
        "4_Seleccion.csv",
        "5_Mezcla.csv",
        "6_Rapido.csv",
        "7_Monticulos.csv",
        "8_Shell.csv"
    };

    // Arreglo general
    for (int j = 0; j < MAX_TAMANO; j++) {
        s[j] = aleatorio(1, 1000);
    }

    plantilla(archivo, arreglo_nombres, InsercionOrden, tamano, s);

    return 0;
}
