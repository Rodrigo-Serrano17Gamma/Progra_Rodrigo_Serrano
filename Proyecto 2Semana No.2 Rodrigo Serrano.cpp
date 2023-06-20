//Ejercicio 2 semana 1
//por: Rodrigo Serrano | Cuarto Gamma      Fecha 20/06/2023

//creción de las bibliotecas
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;


int main() {
	// Declaración de variables
    char frase[100];
    int longitud;

    // Solicitud de la frase al usuario
    cout << "Ingrese una frase: ";
    cin.getline(frase, 100, '\n');
    longitud = strlen(frase);

    // Mostrar la frase en orden inverso
    cout << "La frase en orden inverso es: ";
    for (int i = longitud - 1; i >= 0; i--) {
        cout << frase[i];
    }
    cout << endl;
	return 0;
}
