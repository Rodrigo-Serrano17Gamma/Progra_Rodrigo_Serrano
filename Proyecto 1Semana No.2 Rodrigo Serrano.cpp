//Por: Rodrigo Serrano | Cuarto Gamma     Fecha:19/06/2023
//cadenas utilizando arreglos
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	//Declaración de variables
	char nombres[5][20];
    int distancias[5];  // Arreglo para almacenar las distancias
    
    // Solicitud de nombres
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": " << endl;
        cin.getline(nombres[i], 20, '\n');
        distancias[i] = strlen(nombres[i]);
    }
    
    // Mostrar los nombres y las distancias
    for (int i = 0; i < 5; i++) {
        cout << nombres[i] << " La cantidad de espacios que ocupa es: " << distancias[i] << endl;
    }
    	

	
	return 0;
}
