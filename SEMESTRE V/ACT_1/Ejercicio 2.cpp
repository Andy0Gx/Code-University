// 2._ Programa que permite mostrar la diagonal principal y secundaria de una matriz de 3x3 ingresada por el usuario

#include<iostream>

using namespace std;

int main(){
	
	int matriz[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Introduzca un numero en la posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}

	cout<<"\nDiagonal principal: ";

	for(int i = 0; i < 3;i++){
		for(int j = 0; j < 3;j++){
			if(i == j){
				cout << matriz[i][j] << " ";
			}
		}
	}

	cout<<"\nDiagonal secundaria: ";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if((i+j)==2){
				cout<<matriz[i][j]<<" ";
			}
		}
	}
	
	return 0;
}