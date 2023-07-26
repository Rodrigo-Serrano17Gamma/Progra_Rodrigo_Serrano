//Ejercicio con el método burbuja de arrays 
//Fecha 25/07/2023
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	// Declaración de array y variables
	int n[10];
	int aux;
	
	// Solicitar al usuario ingresar 10 edades al azar
	cout << "Ingrese 10 edades al azar:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "Edad " << i + 1 << ": ";
		cin >> n[i];
	}
	
	// Mostrar todas las edades ingresadas
	cout << "Edades ingresadas: ";
	for (int i = 0; i < 10; i++) {
		cout << n[i] << " ";
	}
	
	// Método de burbuja para ordenar las edades
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - 1 - i; j++) {
			if (n[j] > n[j + 1]) {
				aux = n[j];
				n[j] = n[j + 1];
				n[j + 1] = aux;
			}
		}	
	}
	
	// Mostrar el mensaje con el orden correcto
	cout << "\nEl orden correcto es: ";
	for (int k = 0; k < 10; k++) {
		cout << n[k] << " ";
	}
	
	getch();
	return 0;
}

