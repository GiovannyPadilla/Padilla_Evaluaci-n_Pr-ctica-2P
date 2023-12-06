#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUMNOS 23
#define PROGRESOS 3

int main()
{
    float notas[ALUMNOS][PROGRESOS];
    float promedioA[ALUMNOS];
    float gpromedio[PROGRESOS];

    srand(time(NULL));

    // Generar notas aleatorias del 1 al 10
    for (int i = 0; i < ALUMNOS; i++)
    {
        for (int j = 0; j < PROGRESOS; j++)
        {
            notas[i][j] = rand() % 10 + 1;
        }
    }

    // Calcular promedio de cada alumno
    for (int i = 0; i < ALUMNOS; i++)
    {
        float suma = 0;
        for (int j = 0; j < PROGRESOS; j++)
        {
            suma += notas[i][j];
        }
        promedioA[i] = suma/PROGRESOS;
    }

    // Calcular promedio del grupo por cada progreso
    for (int j = 0; j < PROGRESOS; j++)
    {
        float suma = 0;
        for (int i = 0; i < ALUMNOS; i++)
        {
            suma += notas[i][j];
        }
        gpromedio[j] = suma/ALUMNOS;
    }

    // Encontrar al alumno con mejor promedio
    int Malumno = 0;
    for (int i = 1; i < ALUMNOS; i++)
    {
        if (promedioA[i] > promedioA[Malumno])
        {
            Malumno = i;
        }
    }

    // Imprimir los resultados
    printf("\nResultados\n");

    for (int i = 0; i < ALUMNOS; i++)
    {
        printf("Promedio del Alumno %d: %.2f\n", i + 1, promedioA[i]);
    }

    for (int j = 0; j < PROGRESOS; j++)
    {
        printf("Promedio del grupo en el progreso %d: %.2f\n", j + 1, gpromedio[j]);
    }

    printf("Mejor alumno: %d, Promedio: %.2f\n", Malumno + 1, promedioA[Malumno]);

    return 0;
}
