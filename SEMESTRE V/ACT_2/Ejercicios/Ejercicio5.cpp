/*

Dada una matriz de 2x15 que almacena las calificaciones de 15 estudiantes en dos  asignaturas.
Elaborar  un programa que reciba las calificaciones obtenidas por los alumnos en una determinada asignatura 
y devuelva la calificación media con punteros

*/

#include <conio.h>  // Librerias
#include <stdio.h>  
#include <stdlib.h> 

int main(){       // Funcion principal
    int *p, notas[2][15], suma=0;       // Declaracion de variables       
    p = (int *)malloc(sizeof(suma/30));     // Reservacion de memoria
    
    for(int i=0; i<2; i++){     // Ciclo para ingresar las notas
        for(int j=0; j<15; j++){    // Ciclo para ingresar las notas
            printf("Ingrese la nota del estudiante %d en la asignatura %d: ", j+1, i+1);    // mostramos el mensaje
            scanf("%d", &notas[i][j]);    // ingresamos la nota
            suma += notas[i][j];    // sumamos las notas
        }
    }
    *p = suma/30;   // calculamos el promedio
    
    printf("El promedio de las notas es: %d", *p);  // mostramos el promedio
    getch();        // detenemos la pantalla
}