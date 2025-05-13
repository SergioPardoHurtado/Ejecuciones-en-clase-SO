/**************************************************************
#            Pontificia Universidad Javeriana
#   Materia: Sistemas Operativos
#   Autor: Sergio Pardo
#   Descripcion: Programacion Paralela - Introduccion OpenMP
#   Programa crea hilos de ejecucion para cada nucleo, imprime cadena de caracteres por cada llamado
**************************************************************/

#include <omp.h>  // Librería para trabajar con la API de OpenMP (programación paralela)
#include <stdio.h> // Librería estándar para entrada y salida (printf, etc.)
#include <stdlib.h> // Librería estándar para funciones generales (aunque en este código no se usa explícitamente)

int main(int argc, char *argv[]) {
    // Imprime el número máximo de hilos que pueden usarse (generalmente igual al número de núcleos disponibles)
    printf("OpenMP ejecutado con %d hilos \n", omp_get_max_threads());

    // Sección paralela: crea múltiples hilos que ejecutan el mismo bloque de código
    #pragma omp parallel
    {
        // Cada hilo imprime su identificador único (comenzando desde 0)
        printf("Hello world desde el thread %d\n", omp_get_thread_num());
    }

    // Retorna 0 para indicar que el programa terminó correctamente
    return 0;
}

