#ifndef ALGORITMOS_HPP
#define ALGORITMOS_HPP

/** \brief Intercambia dos valores dados
 *
 * \param a Puntero al primer valor
 * \param b Puntero al segundo valor
 * \return Nada
 *
 */
void Intercambiar(int* a, int* b);

/** \brief Ordena un arreglo utilizando el algoritmo de Insercion por Orden
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void InsercionOrden(int* arr, int tamano);

/** \brief Ordena un arreglo utilizando el algoritmo de Burbuja
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void OrdBurbuja(int* arr, int tamano);

/** \brief Ordena un arreglo utilizando el algoritmo de Burbuja optimizado
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void OrdBOptimizado(int* arr, int tamano);

/** \brief Ordena un arreglo utilizando el algoritmo de Seleccion
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void OrdSeleccion(int* arr, int tamano);

/** \brief Fusiona dos subarreglos ordenados en un solo arreglo ordenado (Merge Sort)
 *
 * \param arr Arreglo de enteros que contiene los subarreglos a fusionar
 * \param inicio �ndice inicial del primer subarreglo
 * \param medio �ndice final del primer subarreglo
 * \param fin �ndice final del segundo subarreglo
 * \return Nada
 *
 */
void Merge(int arr[], int inicio, int medio, int fin);

/** \brief Implementa el algoritmo de ordenamiento por mezcla (Merge Sort)
 *
 * \param arr Arreglo de enteros a ordenar
 * \param inicio �ndice inicial del subarreglo
 * \param fin �ndice final del subarreglo
 * \return Nada
 *
 */
void MergeSort(int arr[], int inicio, int fin);

/** \brief Ordena un arreglo utilizando el algoritmo Merge Sort
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void OrdMezcla(int* arr, int tamano);

/** \brief Funci�n auxiliar para QuickSort que particiona el arreglo
 *
 * \param arr Arreglo de enteros a particionar
 * \param inicio �ndice inicial del subarreglo
 * \param fin �ndice final del subarreglo
 * \return �ndice del pivote despu�s de la partici�n
 *
 */
int Partition(int arr[], int inicio, int fin);

/** \brief Implementa el algoritmo de ordenamiento r�pido (QuickSort)
 *
 * \param arr Arreglo de enteros a ordenar
 * \param inicio �ndice inicial del subarreglo
 * \param fin �ndice final del subarreglo
 * \return Nada
 *
 */
void QuickSort(int arr[], int inicio, int fin);

/** \brief Ordena un arreglo utilizando el algoritmo QuickSort
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void OrdRapido(int* arr, int tamano);

/** \brief Corrige un sub�rbol en un Heap M�ximo
 *
 * \param arr Arreglo que representa el heap
 * \param tamano Tama�o del heap
 * \param i �ndice del nodo a corregir
 * \return Nada
 *
 */
void MaxHeapify(int arr[], int tamano, int i);

/** \brief Construye un Heap M�ximo a partir de un arreglo desordenado
 *
 * \param arr Arreglo de enteros
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void BuildMaxHeap(int arr[], int tamano);

/** \brief Ordena un arreglo utilizando el algoritmo Heap Sort
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void HeapSort(int arr[], int tamano);

/** \brief Ordena un arreglo utilizando el algoritmo Shell Sort
 *
 * \param arr Arreglo de enteros a ordenar
 * \param tamano Cardinalidad del arreglo
 * \return Nada
 *
 */
void Shell(int* arr, int tamano);

/** \brief Genera un n�mero aleatorio dentro de un rango dado
 *
 * \param inicio L�mite inferior del rango
 * \param fin L�mite superior del rango
 * \return N�mero aleatorio dentro del rango [inicio, fin]
 *
 */
int aleatorio(int inicio, int fin);

#endif
