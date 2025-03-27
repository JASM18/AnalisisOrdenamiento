#include <iomanip>
#include <iostream>
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <map>
#include <vector>
#include <windows.h>

#include "Plantilla.hpp"
#include "Algoritmos.hpp"
using namespace std::chrono;

using std::endl;
using std::map;
using std::vector;
using std::cerr;
using std::cout;

void plantilla(std::ofstream* archivo, std::string* texto, void (*funcionExtra)(int*, int), int tamano, int* si)
{
    int s[1000];

    for (int i = 0; i < 8; i++) {

        while (true) { //Comprueba si el archivo esta abierto
            archivo[i].open(texto[i], std::ios::out); // Intentamos abrir en modo escritura

            if (!archivo[i]) {
                cerr << "Error: Algun archivo esta en uso o no se puede abrir. Cierra el archivo e intenta de nuevo." << endl;
                system("pause");
            }
            else {
                break; // Salimos del bucle si el archivo se abre correctamente
            }
        }

        //Parte de arriba del archivo
        archivo[i] << "Casos" << ",";

        for (int hola = 10; hola <= 1000; hola += 10) {
            archivo[i] << "Tama�o " << hola;
            if (hola < 1000) archivo[i] << ",";
        }
        archivo[i] << endl;
    }

    map<int, vector<long double>> tiempos; // Mapa para almacenar los tiempos de cada tama�o
    cout << "Procesando..." << endl << endl;

    for (int m = 0, L = 0; m < 10; m++) {
        for (int k = 1; k <= 100; k++, L++) { //Bucle baja de fila
            for (int i = 0; i < 8; i++) {
                archivo[i] << "Caso " << L+1;
                archivo[i] << ",";
            }

            for (int d = 0; d < MAX_TAMANO; d++) {
                si[d] = aleatorio(1, 1000);
            }

            for (int p = MIN_TAMANO; p <= MAX_TAMANO; p += INCREMENTO) { //Bucle tama�o por fila
                for (int n = 0; n < 8; n++) {
                    switch (n) {
                    case 0:
                        funcionExtra = &InsercionOrden;
                        break;
                    case 1:
                        funcionExtra = &OrdBurbuja;
                        break;
                    case 2:
                        funcionExtra = &OrdBOptimizado;
                        break;
                    case 3:
                        funcionExtra = &OrdSeleccion;
                        break;
                    case 4:
                        funcionExtra = &OrdMezcla;
                        break;
                    case 5:
                        funcionExtra = &OrdRapido;
                        break;
                    case 6:
                        funcionExtra = &HeapSort;
                        break;
                    case 7:
                        funcionExtra = &Shell;
						break;
                    }

                    for (int i = 0; i < p; i++) {
                        s[i] = si[i];
                    }

                    auto tiempo_inicio = std::chrono::steady_clock::now();
                    funcionExtra(s, p);
                    auto tiempo_final = std::chrono::steady_clock::now();

                    duration<long double> tiempo_total = tiempo_final - tiempo_inicio;

                    archivo[n] << std::fixed << std::setprecision(7) << tiempo_total.count();

                    if (tamano < MAX_TAMANO) archivo[n] << ",";
                    tiempos[tamano].push_back(tiempo_total.count()); // Guardamos en el map

                }
            }

            for (int o = 0; o < 8; o++) archivo[o] << endl;

        }

        cout << "Progreso: " << L << "/" << NUM_PRUEBAS << " pruebas completadas..." << endl;
    }

    for (int o = 0; o < 8; o++) {
        archivo[o] << endl << "Promedio" << ",";

        // Calculamos los promedios
        for (int w = 0; w < 25; w++) {
            archivo[o] << "=SUMA(" << (char)(66 + w) << "2:" << (char)(66 + w) << "1001)/1000";
            archivo[o] << ",";
        }

        for (int w = 0; w < 26; w++) {
            archivo[o] << "=SUMA(" << (char)(65) << (char)(65 + w) << "2:" << (char)(65) << (char)(65 + w) << "1001)/1000";
            archivo[o] << ",";
        }

        for (int w = 0; w < 26; w++) {
            archivo[o] << "=SUMA(" << (char)(66) << (char)(65 + w) << "2:" << (char)(66) << (char)(65 + w) << "1001)/1000";
            archivo[o] << ",";
        }

        for (int w = 0; w < 23; w++) {
            archivo[o] << "=SUMA(" << (char)(67) << (char)(65 + w) << "2:" << (char)(67) << (char)(65 + w) << "1001)/1000";
            archivo[o] << ",";
        }

        archivo[o].close();
    }
}
