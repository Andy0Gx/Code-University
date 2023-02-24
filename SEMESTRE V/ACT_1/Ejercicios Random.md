# Ejercicios De Arrays

## ~~Ejercicio 1~~

Crear un array de 10 elementos y rellénalo con números aleatorios entre 1 y 100. A continuación muestra el contenido del array y el valor máximo, mínimo y medio.

``` cpp

#include <iostream>                                 //Librerias
using namespace std;

int main() {                                
	int Numeros_Aleatorios [100];                   //Array de 100 elementos
	int Mayor = 0, Menor = 100, Medio = 0;          //Variables para el mayor, menor y medio

	for (int i = 1; i <= 100; i++){	                //Bucle para rellenar el array
		Numeros_Aleatorios [i] = i;                 //Rellenamos el array con los numeros del 1 al 100
	}         
	
	for (int i = 1; i <= 100; i++){	                //Bucle para mostrar el array
		if (Menor > Numeros_Aleatorios [i]){        //Si el numero es menor que el menor
			Menor = Numeros_Aleatorios[i];          //El numero es el menor
		}
		if (Mayor < Numeros_Aleatorios[i]){         //Si el numero es mayor que el mayor
			Mayor = Numeros_Aleatorios[i];          //El numero es el mayor
		}	Medio += Numeros_Aleatorios[i];	        //Sumamos los numeros para sacar la media
	}
	
	cout<<"El numero Mayor es: "<< Mayor<<endl;     //Mostramos el numero mayor
	cout<<"El numero Medio es: "<< Medio/100<<endl; //Mostramos el numero medio
	cout<<"El numero Menor es: "<< Menor<<endl;     //Mostramos el numero menor
	return 0;                                       //Fin del programa
}

```

----
## ~~Ejercicio 2~~

Crear un programa que pida una cantidad de numeros y luego que muestre cual es la distancia que tiene cada numero con respecto al mayor.

``` cpp

#include<iostream>													//Librerias
using namespace std;

int main() {
	int Cantidad, Distancia, Mayor = 0;								//Variables para la cantidad, distancia y el mayor
	cout<<"Introduzca La Cantidad De Numeros: "; cin>>Cantidad;		//Pedimos la cantidad de numeros
	int Numeros[Cantidad];											//Array de la cantidad de numeros

	for	(int i = 0; i < Cantidad; i++){								//Bucle para rellenar el array
		cout<<"Introduzca El Numero "<<i+1<<": "; cin>>Numeros[i];	//Pedimos los numeros
		
		if (Mayor < Numeros[i]){         							//Si el numero es mayor que el mayor
			Mayor = Numeros[i];          							//El numero es el mayor
		}
	} cout<<endl;	
	for (int i = 0; i < Cantidad; i++){								//Bucle para mostrar la distancia  
		Distancia = Mayor - Numeros[i];								//Distancia = Mayor - Numero
		cout<<"La distancia entre "<< Numeros[i] << " y " << Mayor << " es: "<< Distancia<<endl;	//Mostramos la distancia	 
	}
	return 0;														//Fin del programa
}

```

----
## ~~Ejercicio 3~~

Crear un programa que rellene un array de 10 elementos con numeros enteros, pedir un numero al usuario y comprobar si esta en el array, si esta mostrar la posicion en la que se encuentra y si no esta mostrar un mensaje diciendo que no se encuentra.

``` cpp

#include<iostream>										//Librerias
using namespace std;

int main() {
	int Array [10], Numero, Posicion = 0; 				//Variables para el array, el numero y la posicion
	bool Validator = false;								//Variable para comprobar si el numero esta en el array
	
	for (int i = 0 ; i < 10; i++){ 						//Bucle para rellenar el array
		Array[i] = rand() % 100;						//Rellenamos el array con numeros aleatorios
	}
	cout<<"Introduzca un numero: "; cin>>Numero;		//Pedimos el numero
		for (int i = 0; i < 10; i++){					//Bucle para comprobar si el numero esta en el array
			if (Numero==Array[i]){						//Si el numero es igual al numero del array
				Posicion = i; 							//La posicion es la i
				Validator = true;						//El numero esta en el array
				break;									//Salimos del bucle
			}
		}
		
	if (Validator == true){ 							//Si el numero esta en el array
		cout<<"El numero "<<Numero<< " se encuentra en la posicion "<< Posicion << " del Array."<<endl;	//Mostramos la posicion
	} else {											//Si el numero no esta en el array
		cout<<"El numero introducido no se encuentra en el Array."<<endl;	//Mostramos el mensaje
	}
	
	return 0; 											//Fin del programa
}

```

----
## ~~Ejercicio 4~~

Crear un programa en C++ que llene un array con todos los números divisibles entre 3 del 0 al 99. Luego mostrar los elementos por pantalla.

``` cpp

#include <iostream>									//Librerias
using namespace std;

int main (){	
	int array[33];									//Array de 33 elementos
	cout << "Los numeros del 0 al 99 divisibles entre 3 son: \n";	//Mensaje
	for (int i = 0; i <= 99; i++){					//Bucle para rellenar el array
		if (i%3 == 0){								//Si el numero es divisible entre 3
			array[i] = i;							//El numero es el array
			cout<<array[i]<<endl;					//Mostramos el numero
		}
	}
	return 0;										//Fin del programa
}

```

----
## ~~Ejercicio 5~~

Crear un programa que pida al usuario 10 numeros y los guarde en un array, luego mostrar los numeros introducidos por pantalla en orden inverso y el orden en el que se introdujeron.

``` cpp

#include <iostream>									//Librerias
using namespace std;

int main(){
	int array [10];									//Array de 10 elementos
	
	cout<<"Introduzca los datos del Array...\n";	//Mensaje
	
	for (int i = 0; i < 10; i++){					//Bucle para rellenar el array
		cin>>array[i];								//Pedimos los numeros
	}
	cout<<"\nEl Array introducido es: ";			//Mensaje
	for (int i = 0; i < 10; i++){					//Bucle para mostrar el array
		cout<<array[i]<<"  ";						//Mostramos el array
	}
	cout<<"\nEl Array introducido a la inversa es: ";	//Mensaje
	for (int i = 9; i >= 0; i--){					//Bucle para mostrar el array a la inversa
		cout<<array[i]<<"  ";						//Mostramos el array a la inversa
	}
	return 0;
}

```

----
## ~~Ejercicio 6~~

Crear un programa que muestre que dia de la semana es hoy.

``` cpp

#include <iostream> 							//Librerias
#include <stdlib.h>
using namespace std;

int main(){	
	string DiasSemana[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};	//Array con los dias de la semana
	int Dia; 							//Variable para el dia
	cout<<"Introduzca el numero del dia de la semana (1 - 7): "; cin >> Dia;	//Pedimos el dia
	cout<<"El dia de la semana es: "<<DiasSemana[Dia - 1]<<endl;	//Mostramos el dia de la semana
	return 0;	//Fin del programa
}

```

----
## ~~Ejercicio 7~~

Crear un programa en C++ que llene un array de 10 enteros con números aleatorios del 0 al 99, luego de eso los muestre en pantalla y diga cuál es el elemento mayor y cuántas veces se repite.

``` cpp

#include <iostream> 								//Librerias
using namespace std;

int main (){
	int array[10], Mayor = 0, Repeticiones = 0;	//Array de 10 elementos, variable para el mayor y para las repeticiones
	
	for (int i = 0; i < 10; i++){				//Bucle para rellenar el array
		array[i]= rand() % 99;				//Rellenamos el array con numeros aleatorios
		if (Mayor < array[i]){			//Si el numero es mayor que el mayor
			Mayor = array[i];		//El numero es el mayor
		}
	}
	
	for ( int i = 0; i < 10; i++){		//Bucle para mostrar el array
		if (Mayor == array[i]){	//Si el numero es igual al mayor
			Repeticiones++;	//Sumamos una repeticion
		}
	}
	
	cout<<"El Array es: ";	//Mensaje
		for (int i = 0; i < 10; i++){	//Bucle para mostrar el array
			cout << array[i]<< " ";	//Mostramos el array
		}
		
	cout << "\n\nEl numero mayor es: "<<Mayor<< " y se repite un total de " << Repeticiones<< " veces.";	//Mostramos el mayor y las repeticiones
	return 0;	//Fin del programa
}

```

----
## ~~Ejercicio 8~~

Crear un programa que muestre que mes es hoy.

``` cpp

#include <iostream> 							//Librerias
using namespace std;

int main(){
	string Meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};	//Array con los meses del año
	int Mes;						//Variable para el mes
	cout<<"Introduzca el numero del mes (1 - 12): "; cin >> Mes;	//Pedimos el mes
	cout<<"Estas en el mes de "<<Meses[Mes - 1]<<endl;	//Mostramos el mes
	return 0;	//Fin del programa
}	

```
----
## ~~Ejercicio 9~~

Crear un programa que pida al usuario 2 matrices y luego muestre un menu con las siguientes opciones: 
* Sumar las matrices
* Restar las matrices
* Multiplicar las matrices
* Cambiar las matrices
* Salir

``` cpp

#include <iostream>								//Librerias
#include <stdlib.h>
using namespace std;

int main (){	
	int PrimerArray [2][2], SegundoArray [2][2], Multiplicacion [2][2] = {0}, Opcion; 		//Matrices y variable para la opcion
	char Continuar = 'y'; 							//Variable para continuar o no
	
	do { 							//Bucle para repetir el programa
		cout<<"-----Matriz 1-----"<<endl; 		//Mensaje
		for (int a = 0; a < 2; a++){ 			//Bucle para rellenar la matriz 1
			for (int e = 0; e < 2; e++){ 		//Bucle para rellenar la matriz 1
				cout<< "Introduzca Los Datos Del Primer Array (" <<a<<" , "<<e<<"): "; cin>> PrimerArray [a][e];    		//Pedimos los datos
			} 
		} cout<<endl;
		
		cout<<"-----Matriz 2-----"<<endl; 		//Mensaje
		for (int a = 0; a < 2; a++){ 			//Bucle para rellenar la matriz 2
			for (int e = 0; e < 2; e++){ 		//Bucle para rellenar la matriz 2
				cout<< "Introduzca Los Datos Del Segundo Array (" <<a<<" , "<<e<<"): "; cin>> SegundoArray [a][e]; 		//Pedimos los datos   
			} 
		} cout<<endl;
	
		do { 							//Bucle para repetir el menu
			system("cls"); 				//Limpiamos la pantalla
			cout<< "\n\n-----Menu-----\n\n"; 		//Mensaje
			cout<< "1._ Suma.\n2._ Resta.\n3._ Multiplicacion.\n4._ Cambiar Matriz"; 		//Menu
			cout<< "\n\nSelecciona Una Opcion: "; cin >> Opcion; 		//Pedimos la opcion
			
			switch(Opcion){			//Switch para las opciones
				case 1: cout <<endl<<"-----Suma-----"<<endl;	
					for (int a = 0; a < 2; a++){	//Bucle para sumar las matrices
						for (int e = 0; e < 2; e++){	//Bucle para sumar las matrices
							cout<< PrimerArray[a][e] + SegundoArray[a][e] << " "; 		//Mostramos la suma
						} 
						cout<<endl;
					} cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;	
					
				case 2:	cout <<endl<<"-----Resta-----"<<endl;	
					for (int a = 0; a < 2; a++){	//Bucle para restar las matrices
							for (int e = 0; e < 2; e++){	//Bucle para restar las matrices
								cout<< PrimerArray[a][e] - SegundoArray[a][e] << " "; 		//Mostramos la resta
							} 
							cout<<endl;
						} cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;
						
				case 3:cout <<endl<<"-----Multiplicacion-----"<<endl;
					for (int a = 0; a < 2; a++){	//Bucle para multiplicar las matrices
        				for (int e = 0; e < 2; e++){	//Bucle para multiplicar las matrices
            				for (int i = 0; i < 2; i++){	//Bucle para multiplicar las matrices
                				Multiplicacion[a][e] = Multiplicacion[a][e] + PrimerArray[a][i] * SegundoArray[i][e];	//Multiplicamos las matrices
            				}
            				cout<<Multiplicacion[a][e] << " ";	//Mostramos la multiplicacion
        				}
        				cout<<endl;
    				}cout<<"\nDesea Continuar?(y/n)... "; cin >> Continuar; break;
									
				case 4: 
				Continuar = 'n';	//Si cambiamos las matrices, salimos del bucle
				break;
				
				default: cout<<"Si va Puessssss...."; break;	//Si no es ninguna de las opciones, mostramos un mensaje
			}
		} while(Continuar == 'y' or Continuar == 'Y');	//Si la variable continuar es y o Y, repetimos el menu
	} while (Opcion == 4);		//Si la opcion es 4, repetimos el programa
	return 0;
}

```

----

## ~~Ejercicio 10~~

/*hecho por kevin marquez a las 2:17 de la madrugada antes del examen pa practicar xd
Programa que con un array imprima los dias de la semana usando la consola, osea, q lo pongas uno a uno a mano en el orden
q se te pega la prra gana ps
*/

#include <iostream>                                 //Librerias
using namespace std;
int main() {                                

int dias[7] = {1,2,3,4,5,6,7};
cout<< "introduzca un dia de la semana"<<endl;

for (int i; i < 8; i++) {
	cin >> dias[i];
	switch (dias[i]) {
	
	case 1: 
	cout<< "es lunes"<<endl;
	break;
		case 2: 
	cout<< "es martes"<<endl;
	break;
		case 3: 
	cout<< "es miercoles"<<endl;
	break;
		case 4: 
	cout<< "es jueves"<<endl;
	break;
		case 5: 
	cout<< "es viernes"<<endl;
	break;
		case 6: 
	cout<< "es sabado"<<endl;
	break;
		case 7: 
	cout<< "es domingo"<<endl;
	break;
	default: 
	cout<< "no es un dia de la semana" << endl;
	break;
	
	}
}
 
		return 0;                                       //Fin del programa
}

```

----
