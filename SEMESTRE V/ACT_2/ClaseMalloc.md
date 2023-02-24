# Memoria Dinamica (Malloc -  Calloc - Free) 

## Malloc C

* Reserva un bloque dde memoria dinamica.
* Permite buscar un espacion de almacenamiento libre del tamaño deseado y separarlo de modo que la direccion de 1er byte pueda ser asignada a un puntero.

### Prototipo

```cpp

void *malloc (a) //a = tamaño

```

### Ejemplo de uso

```cpp

int *p;
p = (int*)malloc(sizeof(int)) //malloc asigna a p la direccion de memoria de tamaño de un entero.

```

### Ejemplo 1
*** Cambiar a C ***

```cpp

#include <stdio.h>
#include <stdlib.h> //Para utilizar Malloc
using namespace std;

int main(void){ //Funcion principal
    int *p; //Puntero a entero
    p = (int*) malloc(sizeof(int)); //malloc asigna a p la direccion de memoria de tamaño de un entero.
    *p = 35; //Asignamos el valor 35 a la direccion de memoria de p.

    cout<<p; //Imprimimos la direccion de memoria de p.

    free (p); //Para liberar el espacio de memoria

    return 0;
}

```

### Ejemplo 2
*** Cambiar a C ***

```cpp
#include <isotream>
#include <stdio.h>
#include <stdlib.h> //Para utilizar Malloc
using namespace std;

int main(void){
    int n, *p;
    cout<<"Ingrese el tamaño del arreglo: "; cin>>n;
    p = (int*) malloc(n*sizeof(int)); //malloc asigna a p la direccion de memoria de tamaño de un entero.

    *p = 50; //Asignamos el valor 50 a la direccion de memoria de p.
    cout<<p; //Imprimimos la direccion de memoria de p.

    *(p+2) = 10; //Asignamos el valor 10 a la direccion de memoria de p+2.
    cout<<*(p+2); //Imprimimos la direccion de memoria de p+2.

    free (p); //Para liberar el espacio de memoria

    return 0;
}

```


## C++ New -> free

```cpp

#include<iostream>
#include<malloc.h>
using namespace std;

int main (){
    int *p1, *p2;
    p1 = new int;
    *p1 = 50;

    p2 = new int [5]; 
    *p2 = 15;

    cout<< *p1<<endl;
    cout<< *p2<<endl;

    delete p1; //Para liberar la memoria, en lugar de Free se utiliza Delete
    delete []p2;

    return 0;
}

```