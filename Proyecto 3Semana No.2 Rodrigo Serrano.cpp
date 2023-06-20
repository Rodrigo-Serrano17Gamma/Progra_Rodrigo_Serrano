//Ejercicio 3 semana 1
//por: Rodrigo Serrano | Cuarto Gamma      Fecha 20/06/2023

//creción de las bibliotecas
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    // Declaración de variables
    char frase[36]; // Espacio para 35 caracteres y un carácter nulo terminador
    int contadorVocales[5] = {0}; // Casos de Switch: 0-a, 1-e, 2-i, 3-o, 4-u

    // Solicitud de la frase al usuario
    cout << "Ingrese una frase con 35 espacios: ";
    cin.getline(frase, 36, '\n');

    // Contar la cantidad de vocales utilizadas
    int longitud = strlen(frase);
    for (int i = 0; i < longitud; i++) {
        switch (tolower(frase[i])) {
            case 'a':
                contadorVocales[0]++;
                break;
            case 'e':
                contadorVocales[1]++;
                break;
            case 'i':
                contadorVocales[2]++;
                break;
            case 'o':
                contadorVocales[3]++;
                break;
            case 'u':
                contadorVocales[4]++;
                break;
        }
    }

    // Mostrar la cantidad de vocales utilizadas
    cout << "Cantidad de vocales utilizadas:" << endl;
    cout << "Vocal a: " << contadorVocales[0] << endl;
    cout << "Vocal e: " << contadorVocales[1] << endl;
    cout << "Vocal i: " << contadorVocales[2] << endl;
    cout << "Vocal o: " << contadorVocales[3] << endl;
    cout << "Vocal u: " << contadorVocales[4] << endl;

    return 0;
}
