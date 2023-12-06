#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUMNOS 23
#define PROGRESOS 3

int main(int argc, char const *argv[])
{
    float notas[ALUMNOS][PROGRESOS];
    float promedioA[ALUMNOS];
    float gpromedio[PROGRESOS];

    srand(time(NULL));
    
    //Generar notas aleatorias del 1 al 10

    for (int i = 0; i < ALUMNOS; i++)
    {
        for (int j = 0; j < PROGRESOS; j++)
        {
            notas[i][j] = rand() % 10 + 1;
        }
        
    }
    

    return 0;
}
