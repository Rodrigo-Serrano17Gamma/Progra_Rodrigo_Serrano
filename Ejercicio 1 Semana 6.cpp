//Ejercicio#1 Semana 6
//17/07/2023

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    string cadenaSinEspacios;

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (isalnum(c)) {
            cadenaSinEspacios += tolower(c);
        }
    }

    string cadenaReversa = cadenaSinEspacios;
    reverse(cadenaReversa.begin(), cadenaReversa.end());

    if (cadenaSinEspacios == cadenaReversa) {
        cout << "La cadena es un palíndromo." << endl;
        return 0;
    }

    cout << "La cadena no es un palíndromo." << endl;
    return 0;
}

