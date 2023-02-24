// 1._Comente que hace cada línea del siguiente programa

#include <stdio.h>  //Librería de entrada y salida de datos 
#include <conio.h>  //Librería de entrada y salida de datos

int main(){     //Inicio del programa 
 int a,b, c, *p1, *p2; //Declaración de variables enteras y punteros
 
 p1 = &a;   //Asignación de la dirección de memoria de a al puntero p1
*p1 = 1;    //Asignación de 1 a la dirección de memoria de a

p2 = &b;    //Asignación de la dirección de memoria de b al puntero p2
*p2 = 2;    //Asignación de 2 a la dirección de memoria de b

p1 = p2;    //Asignación de la dirección de memoria de b al puntero p1
*p1 = 0;    //Asignación de 0 a la dirección de memoria de b

p2 = &c;    //Asignación de la dirección de memoria de c al puntero p2
*p2 = 3 ;   //Asignación de 3 a la dirección de memoria de c

 printf("%d %d %d\n", a, b, c); //Impresión de los valores de a, b y c
 getch();  //Espera a que se presione una tecla
 }