//3._Crear un arreglo dinámico a, copie los elementos impares en uno b, y los pares en uno c (con apuntadores).

#include <stdlib.h>    // Librerias
#include <stdio.h>
#include<conio.h>

int main (){    // Funcion principal
    int *a, *b, *c, n, i, j, k, l, m;   // Declaracion de variables
    printf("Ingrese el numero de elementos del arreglo: ");   // Mostramos el mensaje
    scanf("%d", &n);    // Ingresamos el numero de elementos
    a = (int *)malloc(n*sizeof(int));   // Reservamos memoria para el arreglo a
    b = (int *)malloc(n*sizeof(int));   // Reservamos memoria para el arreglo b
    c = (int *)malloc(n*sizeof(int));   // Reservamos memoria para el arreglo c
    
    for(i=0; i<n; i++){    // Ciclo para ingresar los elementos del arreglo a
        printf("Ingrese el elemento %d: ", i+1);   // Mostramos el mensaje
        scanf("%d", &a[i]);   // Ingresamos el elemento
    }
    for(j=0, k=0, l=0; j<n; j++){   // Ciclo para separar los elementos del arreglo a
        if(a[j]%2==0){  // Condicion para saber si el elemento es par
            c[k]=a[j];  // Asignamos el elemento al arreglo c
            k++;    // Incrementamos el contador
        }
        else{   // Condicion para saber si el elemento es impar
            b[l]=a[j];  // Asignamos el elemento al arreglo b
            l++;    // Incrementamos el contador
        }
    }
    
    printf("\n\nArreglo a (Principal): ");      // Mostramos el mensaje
    for(m=0; m<n; m++){    // Ciclo para mostrar el arreglo a
        printf("%d ", a[m]);    // Mostramos el elemento
    }   
    printf("\nArreglo b (Impares): ");      // Mostramos el mensaje
    for(m=0; m<l; m++){   // Ciclo para mostrar el arreglo b
        printf("%d ", b[m]);    // Mostramos el elemento
    }
    printf("\nArreglo c (Pares): ");    // Mostramos el mensaje
    for(m=0; m<k; m++){  // Ciclo para mostrar el arreglo c
        printf("%d ", c[m]);    // Mostramos el elemento
    }

    getch();    // Detenemos la pantalla
}