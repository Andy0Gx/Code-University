//Crear un arreglo de cadena de caracteres con una palabra fija, luego el contenido del arreglo.

#include <stdlib.h>     // Librerias
#include <stdio.h>
#include<conio.h>

int main(){     // Funcion principal
    char *a, palabra[100];    // Declaracion de variables
    printf("Ingrese una palabra: ");    // Mostramos el mensaje
    gets(palabra);    // Ingresamos la palabra
    a = (char *)malloc(sizeof(palabra));    // Reservamos memoria
    a = palabra;    // Asignamos la palabra al arreglo
    printf("La palabra es: ");  // Mostramos el mensaje
    
    for(int i=0; i<sizeof(palabra); i++){   // Ciclo para mostrar la palabra
        if (a[i]=='\0'){    // Condicion para salir del ciclo
            break;    // Salimos del ciclo
        }
        printf(" %c ", a[i]);   // Mostramos la palabra
    }

    getch();    // Detenemos la pantalla
}