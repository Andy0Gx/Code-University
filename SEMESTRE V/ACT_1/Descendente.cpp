//Programa que almacene en dos arreglos las ventas mensuales de dos empleados y ordene las ventas de forma descendente

#include<iostream>
using namespace std;

int main(){

int ventas1[12], ventas2[12], aux;

cout<<"Ingrese las ventas del primer empleado: "<<endl;

for(int i=0; i<12; i++){

cout<<"Ingrese las ventas del mes "<<i+1<<": ";
cin>>ventas1[i];

}

cout<<"Ingrese las ventas del segundo empleado: "<<endl;

for(int i=0; i<12; i++){
    
cout<<"Ingrese las ventas del mes "<<i+1<<": ";
cin>>ventas2[i];

}

for(int i=0; i<12; i++){

for(int j=0; j<12; j++){

if(ventas1[i]>ventas1[j]){
aux=ventas1[i];
ventas1[i]=ventas1[j];
ventas1[j]=aux;

}

}

}

for(int i=0; i<12; i++){

for(int j=0; j<12; j++){

if(ventas2[i]>ventas2[j]){
aux=ventas2[i];
ventas2[i]=ventas2[j];
ventas2[j]=aux;

}

}

}

cout<<"Ventas del primer empleado: "<<endl;

for(int i=0; i<12; i++){

cout<<ventas1[i]<<endl;

}

cout<<"Ventas del segundo empleado: "<<endl;

for(int i=0; i<12; i++){

cout<<ventas2[i]<<endl;

}




    return 0;
}