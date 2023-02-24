# 1._Comente que hace cada línea del siguiente programa

```cpp
#include <stdio.h> 
int main()  
{ 
 int a,b, c, *p1, *p2; 
 
 p1 = &a; 
*p1 = 1; 
p2 = &b; 
*p2 = 2; 
p1 = p2; 
*p1 = 0; // Paso 6. b = 0
p2 = &c; 
*p2 = 3
 printf("%d %d %d\n", a, b, c);
 }
```

# 2._Elabore un programa que contenga las siguientes instrucciones e imprima los valores de  los punteros
```cpp
p=(int *)malloc(sizeof(int)); 
 *p=5; 
 q=(int *)malloc(sizeof(int)); 
 *q=8;free(p); 
 p=q; free(q); 
 q=(int *)malloc(sizeof(int)); 
 *q=6
```

# 3._Crear un arreglo dinámico a, copie los elementos impares en uno b, y los pares en uno c.
   
# 4._ Crear un arreglo de cadena de caracteres con una palabra fija, luego el contenido del arreglo.

# 5._ Dada una matriz de 2x15 que almacena las calificaciones de 15 estudiantes en dos  asignaturas. Elaborar  un programa que reciba las calificaciones obtenidas por los alumnos en una determinada asignatura y devuelva la calificación media
