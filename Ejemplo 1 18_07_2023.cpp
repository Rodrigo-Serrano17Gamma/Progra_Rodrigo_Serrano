//Ejemplo 1 (vectores) 18/07/2023
/* Escribe un progrma que defina un vector de número y calcule la suma de sus elementos*/
//Librerias
#include <iostream>
#include<conio.h>

using namespace std;



int main() {
	//Declaración de array
	int numeros [5];
	int suma=0; //Guardar la suma total de los elementos
	//se utiliza el for para ingresar los elementos en el vector
	for(int i=0; i<5;i++){
		cout<<"Ingrese un número: ";
		cin>>numeros[i];
	}
	cout<<"\nVector original es: "<<endl;
	//Para imprimir los valores
	for(int j=0; j<5; j++){
		cout<<numeros[j]<<endl;
	}
	
	//Suma de los elementos ingresados
	for(int k=0; k<5;k++){
		suma +=numeros[k];
	}
	cout<<"La suma total es: "<<suma;
	getch();
	return 0;
}
