# Algoritmos de Ordenamiento - Análisis de Tiempos de Ejecución

### Descripción General

Este proyecto tiene como objetivo analizar y comparar los tiempos de ejecución de siete distintos algoritmos de ordenamiento. Los resultados se almacenan en archivos CSV para su posterior análisis y visualización.

## Requisitos del Sistema

Para compilar y ejecutar el proyecto, se recomienda:

- **Sistema Operativo:** Windows 10/11 (para compatibilidad con windows.h)

- **Compilador:** Se recomienda Microsoft Visual Studio 2022 ó Codeblocks

-  **Entorno de Desarrollo:** Code::Blocks y Visual Studio 2022

- **Dependencias:**

    - Librería estándar de C++ (iostream, chrono, fstream, map, vector)

    - windows.h (para pausa en la ejecución y otros comandos del sistema)

## Instrucciones de Compilación y Ejecución

1. Clonar el repositorio o descargar el código fuente.

2. Abrir el proyecto en el entorno de desarrollo.

3. Compilar el código asegurando que se incluyen todos los archivos de cabecera.

4. Ejecutar el programa desde la terminal o la interfaz del IDE.

## Algoritmos de Ordenamiento Implementados

### 1. **Ordenamiento por Inserción (Insertion Sort)**

El algoritmo por orden es un método de ordenamiento que recibe como entrada la sucesión $s=(s_0, s_1, ..., s_n)$ y ordena sus elementos en orden no decreciente

- Complejidad en el **peor caso**: $O(n²)$

- Complejidad en el **mejor caso**: $O(n)$

Es un algoritmo estable, es decir, mantiene el orden relativo de elementos iguales.

### 2. **Ordenamiento por Burbuja (Bubble Sort)**

El algoritmo de ordenamiento burbuja (Bubble Sort) es un método simple que recorre repetidamente una lista, compara elementos adyacentes y los intercambia si están en el orden incorrecto. El algoritmo recibe como entrada una sucesión $s=(s_0, s_1, ..., s_n)$ y ordena sus elementos en orden no decreciente.

- Complejidad en el **peor caso**: $O(n²)$ (cuando la lista está en orden inverso)

- Complejidad en un **caso promedio**: $O(n²)$

- Complejidad en el **mejor caso**: $O(n)$ (cuando la lista ya esta ordenada y se implementa con detección de ordenamiento)

Es un algoritmo estable, es decir, mantiene el orden relativo de elementos iguales aun que no es recomendable para grandes cantidades de números.

### 3. **Ordenamiento Burbuja Optimizado**

Variante del algoritmo Burbuja con optimización para reducir iteraciones innecesarias

### 4. **Ordenamiento por Selección (Selection Sort)**

El algoritmo de ordenamiento por selección (Selection Sort) es un método que divide la lista de entrada en dos partes: una sublista ya ordenada y una sublista por ordenar. El algoritmo busca repetidamente el elemento mínimo de la parte no ordenada y lo coloca al final de la parte ordenada. Recibe como entrada una sucesión $s=(s_0, s_1, ..., s_n)$ y ordena sus elementos en orden no decreciente.

- Complejidad en el **peor caso**: $O(n²)$

- Complejidad en un **caso promedio**: $O(n²)$

- Complejidad en el **mejor caso**: $O(n)$ (Esto pasa, ya que siempre se realiza el mismo número de comparaciones)

No es un algoritmo estable en su implementación clásica, ya que puede cambiar el orden relativo de elementos iguales, ineficiente para listas grandes, pero funciona bien para listas pequeñas.

### 5. **Ordenamiento por Mezcla (Merge Sort)**

El algoritmo de ordenamiento por mezcla (merge Sort) es un algoritmo eficiente basado en la técnica de "dividir y conquistar". Divide la lista en mitades recursivamente hasta obtener sublistas de tamaño 1, que son trivialmente ordenadas. Luego combina (mezcla) estas sublistas para producir nuevas sublistas ordenadas hasta que solo queda una lista completa ordenada.

- Complejidad en el **peor caso**: $O(n log n)$

- Complejidad en un **caso promedio**: $O(n log n)$

- Complejidad en el **mejor caso**: $O(n log n)$

Es un algoritmo estable, es decir, mantiene el orden relativo de elementos iguales.

### 6. **Ordenamiento Rápido (QuickSort)**

El algoritmo de ordenamiento rápido (Quick Sort) es un algoritmo eficiente que emplea la estrategia de "dividir y conquistar". Selecciona un elemento como pivote y particiona el arreglo alrededor del pivote, colocando todos los elementos menores al pivote a su izquierda y todos los mayores a su derecha. Luego, recursivamente ordena los dos sub arreglos resultantes.

- Complejidad en el **peor caso**: $O(n²)$ (Cuando el arreglo ya está ordenado o en orden inverso)

- Complejidad en un **caso promedio**: $O(n log n)$

- Complejidad en el **mejor caso**: $O(n log n)$ (Cuando el pivote divide el arreglo en partes aproximadamente iguales)

No es un algoritmo estable en su implementación clásica, ya que puede cambiar el orden relativo de elementos iguales, aunque es muy eficiente en la practica gracias a su rapidez.

### 7. **Ordenamiento por Montículos (Heap Sort)**

El algoritmo de ordenamiento por montículos (Heap Sort) utiliza una estructura de datos llamada montículo (heap) para ordenar los elementos, Un montículo es un árbol binario casi completo que satisface la propiedad de montículo: en un montículo máximo, para cualquier nodo, el valor del nodo es mayor o igual que los valores de sus hijos.
El algoritmo consta de dos fases principales:

1 - **Construcción del montículo:** reorganizar el arreglo para formar un montículo máximo.

2 - **Extracción repetida del máximo:** extraer rápidamente el elemento máximo del montículo y reubicarlo al final del arreglo. 

- **Construcción del montículo**: $O(n)$

- Fase de **extracción**: O (n log n)

- **Complejidad total**: $O(n log n)$ en todos los casos (mejor, promedio y peor)

No es un algoritmo estable, ya que puede cambiar el orden relativo de elementos iguales. Aunque una gran ventaja que tiene es que sin importar la distribución, su rendimiento siempre será del mismo orden.

### 8. **Ordenamiento de Shell (Shell Sort)**

El algoritmo de ordenamiento Shell (Shell Sort) es una extensión del algoritmo de ordenamiento por inserción que supera algunas de sus limitaciones al permitir el intercambio de elementos distantes. El algoritmo mejora el rendimiento del ordenamiento por inserción al ordenar elementos separados por una cierta distancia (o gap), reduciendo progresivamente esta distancia hasta el gap sea 1, momento en el cual el algoritmo se comporta como el ordenamiento por inserción estándar.

La idea principal es permitir que los elementos "salten" varias posiciones, haciendo que la lista se vuelva "parcialmente ordenada", lo que hace que el ordenamiento por inserción final sea más eficiente.

- Complejidad en el **peor caso**:
    - Con la secuencia original de **Shell**: $O(n²)$
    - Con la secuencia **Hibbard**: $O(n^(3/2))$
    - Con la secuencia de **Sedgewick**: $O(n^(4/3))$

- Complejidad en un **caso promedio**: Generalmente está entre $O(n log² n)$ y $O(n^(5/4))$ dependiendo de la secuencia.

- Complejidad en el **mejor caso**: $O(n log n)$ cuando el arreglo ya está ordenado

No es un algoritmo estable en su implementación clásica, ya que puede cambiar el orden relativo de elementos iguales, aunque es significativamente más eficiente que el ordenamiento por inserción para conjuntos de datos grandes.

## Gráfica Comparativa de los Tiempos de Ejecución
A continuación se presentarán las gráficas realizadas según el promedio para cada caso, en donde el eje de las Y representa el tiempo en segundos y en donde el eje X representa el tamaño del conjunto multiplicado por 10, es decir, el índice 7 representa un conjunto de números aleatorios de tamaño 70.

### 1. **Ordenamiento por Inserción (Insertion Sort)**
![Grafica01-Insercion_por_orden](https://github.com/user-attachments/assets/d1f8f12d-6696-4f28-97e3-5dcdc52a6e8f)

### 2. **Ordenamiento por Burbuja (Bubble Sort)**
![Grafica02-Burbuja](https://github.com/user-attachments/assets/8c3b38e8-e7d2-476e-bd2e-70babf57498c)

### 3. **Ordenamiento Burbuja Optimizado**
![Grafica03-Burbuja_optimizado](https://github.com/user-attachments/assets/caaed804-a201-458d-8167-b623dfd07fc0)

### 4. **Ordenamiento por Selección (Selection Sort)**
![Grafica04-Seleccion](https://github.com/user-attachments/assets/21d83aec-3c8e-480b-81a9-a2c5c184bdbd)

### 5. **Ordenamiento por Mezcla (Merge Sort)**
![Grafica05-Mezcla](https://github.com/user-attachments/assets/9c9ac8b6-3df6-4ea1-b135-1603b3ccc6d5)

### 6. **Ordenamiento Rápido (QuickSort)**
![Grafica06-Rapido](https://github.com/user-attachments/assets/c46c90e5-65d6-4a9b-8cb4-e0ee9dcb4f47)

### 7. **Ordenamiento por Montículos (Heap Sort)**
![Grafica07-Monticulos](https://github.com/user-attachments/assets/a65bf338-7e8a-4221-aea9-d456b0ad6604)

### 8. **Ordenamiento de Shell (Shell Sort)**
![Grafica08-Shell](https://github.com/user-attachments/assets/0d97b910-3ad6-4bde-8265-f631ca727fd6)

### 9. **Comparación final**
![Grafica09-ComparacionAlgoritmos](https://github.com/user-attachments/assets/66dd822e-f539-4221-8634-e0c6ff9542f8)

## Análisis de los Resultados Observados

La gráfica comparativa muestra cómo cada algoritmo de ordenamiento responde al aumento en el tamaño del conjunto de datos. Aquí se puede observar con más claridad la complejidad temporal para cada algoritmo:

### Los algoritmos cuadráticos $(O(n²))$:
Esta clase de algoritmos tienen la característica de que crecen de manera exponencial o casi exponencial, usualmente no recomendados para el trabajo con grandes cantidades de números.

**Burbuja (rojo) & Burbuja optimizado (naranja)**: presentan los tiempos de ejecución más altos, confirmando su ineficiencia para grandes volúmenes de datos. Para introducir la idea de un algoritmo de ordenamiento es lo mejor para comenzar a estudiar estos algoritmos, pero su naturaleza recursiva lo hace muy poco recomendable a la hora de la práctica.

**Selección (amarillo)**: mejora ligeramente, pero sigue siendo poco eficiente debido a su complejidad cuadrática, aun que en comparación con burbuja es mucho mejor, pero en comparación con los otros algoritmos deja de ser tan optimo.

**Inserción (negro)** tiene mejor desempeño en comparación con el algoritmo de burbuja y el de selección, aunque sigue siendo $O(n²)$, lo que lo hace inviable para grandes conjuntos.

### Los algoritmos eficientes $(O(n log n))$:
Este tipo de algoritmo tienen una característica muy particular, tienen la apariencia de ser algoritmos lineales y son muy eficientes para el trabajo con grandes tamaños de números.

**Mezlca (verde)**: Este algoritmo es el menos eficaz este tipo de algoritmo, en comparación con las cuadráticas es mucho mejor, pero a la hora de compararlo con el algoritmo de inserción por orden, es mejor usar el algoritmo de inserción para conjuntos de tamaño menor a 1000, pero para conjuntos de tamaño mayor a 1000 es donde conviene usar el dicho algoritmo de mezcla por su naturaleza "casi lineal".

**Monticulos (azul fuerte)**: muestra una mejor eficacia en comparación con los algoritmos antes mencionados, pero con un poco más de sobrecarga debido a su estructura de montículos.

**ShellSort (morado)**: A primera vista se percibe que es el mayor algoritmo para ordenar el conjunto de números, el tiempo de carga es extremadamente pequeño en comparación con el resto de algoritmos. Sin embargo, este algoritmo suele ser un poco inestable con un poco de ruido así como se puede observar en la gráfica, aunque sigue siendo probablemente el segundo mejor algoritmo presentado. 

**Rápido**: Este algoritmo es perfecto para comparar grandes cantidades de números, su gráfica es casi lineal y no genera casi nada de ruido. Sin embargo, para trabajar con pequeñas cantidades de números no llega a ser muy eficiente.

En general, se confirma que los algoritmos de ordenamiento con complejidad $O(n log n)$ son exponencialmente más rápidos y escalables que los de $O(n²)$.

# Conclusiones

Este análisis de algoritmos de ordenamiento nos permitió observar y entender como cada uno de estos algoritmos responde de diferentes maneras a conjuntos de datos y de manera generalizada cuál es mejor opción según el contexto del uso. La gráfica comparativa lo demuestra claramente que los algoritmos con complejidad $O(n log n)$ son mucho más eficientes que los algoritmos de complejidad $O(n²)$, específicamente cuando se trabaja con conjuntos de datos grandes.
Dentro de mi opinión personal, pienso que solo hay 3 contextos ideales en donde cada algoritmo brilla por su propia cuenta
- Para conjuntos pequeños: Pienso que puede ser óptimo usar algoritmos como el de burbuja, y el de selección, aun personalmente usaría mil veces el algoritmo de selección en este caso antes que el de burbuja.
- Para conjuntos medianos: Yo usaría el algoritmo de mezcla y el de inserción por orden, aun que es probable que en la práctica llegue a usar muy pocas veces este tipo de algoritmo.
- Para conjuntos grandes; Usaría el algoritmo Rápido, Montículos y el de Shell, pero en la práctica usaría probablemente en el 100% de las veces el algoritmo por montículos debido a lo rápido que es y a su consistencia temporal.
En resumen, no existe un algoritmo único que sea el mejor en TODAS las situaciones, sino que la elección dependerá del tamaño del conjunto de datos, la estabilidad requerida y las restricciones de memoria.
