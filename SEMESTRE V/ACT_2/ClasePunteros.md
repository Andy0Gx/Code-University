# Apuntadores

* Un apuntador es una variable que contienene la direccion de memoria de otra variable.
* Permiten acceder con rapidez a la informacion almacenada en memoria.
* Se declaran con el operador `*` seguido del nombre de la variable.
* Con el `*` se accede al valor de la variable apuntada, mientras que sin el `*` se accede al valor de la variable apuntador.


## Declaracion

```cpp

int *p; // p es un apuntador a un entero

```

## Asignacion 

```cpp

int x = 5;
int *p = &x; // p apunta a x

```


# Ejemplo 1

```cpp

#include <iostream>
using namespace std;
int main(){
    int a = 2, b = 3, *p; // p es un apuntador a un entero

    p = &a; // p apunta a a

    cout<<*p<<endl; // 2
    b = *p;
    cout<<b<<endl; // 2
    b = *p + 1;
    cout<<b<<endl; // 3
    *p = 0;
    cout<<a<<endl; // 0

    return 0;
}

```

# Ejemplo 2

```cpp

#include <iostream>
using namespace std;

int main(){
    char *p, a = 'x'; // p es un apuntador a un caracter
    p = &a; // p apunta a a
    cout<<*p<<endl; // x
    cout<<p<<endl; // 0x7ffeeb2b9a0c

    return 0;
}

```

# Ejemplo 3

```cpp

#include <iostream>
using namespace std;

int main(){
    int a [5] = {1,2,3,4,5}; // arreglo de 5 enteros
    int *p = a; // p apunta al primer elemento de a
    
    cout<<*p<<endl; // 1
    cout<<*(p+1)<<endl; // 2
    cout<<*(p+2)<<endl; // 3

    return 0;
}

```
