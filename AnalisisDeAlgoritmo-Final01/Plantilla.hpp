#ifndef PLANTILLA_HPP
#define PLANTILLA_HPP

const int NUM_PRUEBAS = 1000;
const int MIN_TAMANO = 10;
const int MAX_TAMANO = 1000;
const int INCREMENTO = 10;

void plantilla(std::ofstream* archivo, std::string* texto, void (*funcionExtra)(int*, int), int tamano, int* s);

#endif
