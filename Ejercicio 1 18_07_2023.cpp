//Ejercicio 1 de los vectores 18_07_2023
/*Escribe un programa que solicite el tamño para un vector de números, y le permita ingresar dato por dato
a cada posición, debe imprimir en pantalla el vector original y el vector en orden unverso. Del último al primer elemento*/
#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	//Declaración de variable
	int t;
	//Solicitud de ingreso de tamaño de arreglo
	cout<<"Ingresa el tamaño del arreglo: "<<endl;
	cin>>t;
	
	//Declaración del arreglo
	int numeros[t];
	for(int i=0; i<t; i++){
	cout<<"Ingresa los números :"<<endl;
	cin>>numeros[i];	
	}
	
	cout<<"\nVector original es: "<<endl;
	//Para imprimir los valores
	for(int j=0; j<t; j++){
		cout<<numeros[j]<<endl;
	}
	
	cout<<"\nVector original es: "<<endl;
	//Para imprimir los valores
	for(int k=t-1; k>=0; k--){
		cout<<numeros[k]<<endl;
	}

	getch();
	return 0;
}
