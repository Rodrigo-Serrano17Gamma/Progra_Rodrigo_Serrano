//Ejemplo siguiendo con los vectores o arrays    25/07/2023
//Desarrolle un programa que lea un vector de enteros y determine el mayor elemento del vector
#include <iostream>
#include <conio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Declaración de vector
	int vector[5]={5,1,10,6,8};
	int mayor=0;
	//Declaración de for recorriendo
	for(int i=0; i<5;i++){
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	cout<<"El elemento mayor es: "<<mayor;
	getch();
	return 0;
}
