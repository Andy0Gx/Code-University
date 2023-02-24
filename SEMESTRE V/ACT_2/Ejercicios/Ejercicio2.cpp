// 2._Elabore un programa que contenga las siguientes instrucciones e imprima los valores de  los punteros en lenguaje 
/*
p=(int *)malloc(sizeof(int)); 
 *p=5; 
 q=(int *)malloc(sizeof(int)); 
 *q=8;free(p); 
 p=q; free(q); 
 q=(int *)malloc(sizeof(int)); 
 *q=6
 */

#include <stdlib.h>    // Librerias
#include <stdio.h>
#include<conio.h>

int main(){   // Funcion principal
    int *p, *q;  // Declaracion de variables

    p=(int *)malloc(sizeof(int));   // Reservamos memoria
    *p=5;   // Asignamos el valor 5
    q=(int *)malloc(sizeof(int));   // Reservamos memoria
    *q=8;free(p);   // Asignamos el valor 8 y liberamos la memoria de p
    p=q; free(q);   // Asignamos el valor de q a p y liberamos la memoria de q
    q=(int *)malloc(sizeof(int));   // Reservamos memoria
    *q=6;   // Asignamos el valor 6
    
    printf("Valor al que apunta q = %d\n", *q);  // Mostramos el valor de q
    printf("Valor de la variable de q = %d\n\n", q);    // Mostramos el valor de la variable q

    printf("Valor al que apunta p = %d\n", *p); // Mostramos el valor de p
    printf("Valor de la variable de p = %d\n", p);  // Mostramos el valor de la variable p

    getch();    // Detenemos la pantalla
}

