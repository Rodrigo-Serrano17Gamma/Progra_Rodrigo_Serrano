//Ejercicio 1 de los vectores 18_07_2023
/*Escribe un programa que solicite el tam�o para un vector de n�meros, y le permita ingresar dato por dato
a cada posici�n, debe imprimir en pantalla el vector original y el vector en orden unverso. Del �ltimo al primer elemento*/
#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	//Declaraci�n de variable
	int t;
	//Solicitud de ingreso de tama�o de arreglo
	cout<<"Ingresa el tama�o del arreglo: "<<endl;
	cin>>t;
	
	//Declaraci�n del arreglo
	int numeros[t];
	for(int i=0; i<t; i++){
	cout<<"Ingresa los n�meros :"<<endl;
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
