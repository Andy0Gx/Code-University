
// 1._ Programa que almacene en 2 arreglos, las ventas mensuales de dos empleados Y diga quien tiene el mejor promedio

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int Empleado1[12], Empleado2[12];
	float Promedio1, Promedio2;
	
	cout<<"\n -----Empleado1------\n\n";
	for (int i = 0; i < 12; i++){
		cout<< "Empleado 1._ Introduzca las ventas del mes "<<i + 1<< ": "; cin >> Empleado1[i];
		
		Promedio1 += Empleado1[i];
	}	system("cls");
	cout<<"\n -----Empleado2------\n\n";
	
	for (int i = 0; i < 12; i++){
		cout<< "Empleado 2._ Introduzca las ventas del mes "<<i + 1<< ": "; cin >> Empleado2[i];
		Promedio2 += Empleado2[i];
	}	system("cls");
	
	Promedio1 /= 12;
	Promedio2 /= 12;
	
	cout<<"\n El promedio del empleado 1 es: "<<Promedio1;
	cout<<"\n El promedio del empleado 2 es: "<<Promedio2;
	
	if (Promedio1 > Promedio2){
		cout << "\nEl mejor promedio es: "<< Promedio1 << " Perteneciente al empleado 1."<<endl;
	} else {
		cout << "\nEl mejor promedio es: "<< Promedio2 << " Perteneciente al empleado 2."<<endl;
	}
		
	return 0;
}