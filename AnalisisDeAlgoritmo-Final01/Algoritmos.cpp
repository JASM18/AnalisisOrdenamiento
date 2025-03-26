#include <iostream>
#include <cmath>

#include "Algoritmos.hpp"

using std::cout;
using std::endl;

void Intercambiar(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**********ALGORITMO #1**********/
void InsercionOrden(int* arr, int tamano)
{
    for (int i = 1; i < tamano; ++i) {
        int val = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > val) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = val;
    }
}

/**********ALGORITMO #2**********/
void OrdBurbuja(int* arr, int tamano)
{
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

/**********ALGORITMO #3**********/
void OrdBOptimizado(int* arr, int tamano)
{
    bool intercambio = true;
    while (intercambio) {
        intercambio = false;
        for (int j = 0; j < tamano - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                intercambio = true;
            }
        }
    }
}

/**********ALGORITMO #4**********/
void OrdSeleccion(int* arr, int tamano)
{
    for (int i = 0; i < tamano - 1; ++i) {
        int mini_idx = i;
        for (int j = i + 1; j < tamano; ++j) {
            if (arr[j] < arr[mini_idx]) {
                mini_idx = j;
            }
        }
        if (mini_idx != i) {
            int temp = arr[i];
            arr[i] = arr[mini_idx];
            arr[mini_idx] = temp;
        }
    }
}

void Merge(int arr[], int inicio, int medio, int fin)
{
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[inicio + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[medio + 1 + j];
    }

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i += 1;
        }
        else {
            arr[k] = R[j];
            j += 1;
        }
        k += 1;
    }

    while (i < n1) {
        arr[k] = L[i];
        i += 1;
        k += 1;
    }

    while (j < n2) {
        arr[k] = R[j];
        j += 1;
        k += 1;
    }

    delete[] L;
    delete[] R;
}

void MergeSort(int arr[], int inicio, int fin)
{
    if (inicio < fin) {
        int medio = (inicio + fin) / 2;
        MergeSort(arr, inicio, medio);
        MergeSort(arr, medio + 1, fin);
        Merge(arr, inicio, medio, fin);
    }
}

void OrdMezcla(int* arr, int tamano)
{
    MergeSort(arr, 0, tamano - 1);
}

/**********ALGORITMO #6**********/
int Partition(int arr[], int inicio, int fin)
{
    int pivote = arr[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {
        if (arr[j] <= pivote) {
            i += 1;
            Intercambiar(&arr[i], &arr[j]);
        }
    }
    Intercambiar(&arr[i + 1], &arr[fin]);
    return i + 1;
}


void QuickSort(int arr[], int inicio, int fin)
{
    if (inicio < fin) {
        int pivote_idx = Partition(arr, inicio, fin);
        QuickSort(arr, inicio, pivote_idx - 1);
        QuickSort(arr, pivote_idx + 1, fin);
    }
}


void OrdRapido(int* arr, int tamano)
{
    QuickSort(arr, 0, tamano - 1);
}

/**********ALGORITMO #7**********/
void MaxHeapify(int arr[], int tamano, int i)
{
    int izquierdo = 2 * i + 1;
    int derecho = 2 * i + 2;
    int mayor = i;

    if (izquierdo < tamano && arr[izquierdo] > arr[mayor]) {
        mayor = izquierdo;
    }

    if (derecho < tamano && arr[derecho] > arr[mayor])
        mayor = derecho;

    if (mayor != i) {
        Intercambiar(&arr[i], &arr[mayor]);
        MaxHeapify(arr, tamano, mayor);
    }
}

void BuildMaxHeap(int arr[], int tamano)
{
    for (int i = tamano / 2 - 1; i >= 0; i--) {
        MaxHeapify(arr, tamano, i);
    }
}

void HeapSort(int arr[], int tamano)
{
    BuildMaxHeap(arr, tamano);
    for (int i = tamano - 1; i > 0; i--) {
        Intercambiar(&arr[0], &arr[i]);
        MaxHeapify(arr, i, 0);
    }
}

/**********ALGORITMO #8**********/
void Shell(int * arr, int tamano) 
{
    for (int gap = tamano / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < tamano; i++) {
            int val = arr[i];
            int j = i;

            while (j >= gap && arr[j - gap] > val) {

                arr[j] = arr[j - gap];

                j -= gap;
            }

            arr[j] = val;
        }
    }
}

//************************

int aleatorio(int inicio, int fin)
{
    return inicio + rand() % (fin - inicio + 1);
}
