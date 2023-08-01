//Ejercicio 1 Semana 8
//Fecha 31/07/2023
//Declaramos bibliotecas
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    string nombre[2];
    double nota[2][3];
    double Nsuma = 0, promedio[2] = {0};

    for (int i = 0; i < 2; i++) {
        cout << "\nIngresa el nombre del estudiante No." << i + 1 << ": ";
        cin >> nombre[i];
        Nsuma = 0;
        for (int j = 0; j < 3; j++) {
            cout << "\nIngrese la nota No." << j + 1 << ": ";
            cin >> nota[i][j];
            Nsuma = Nsuma + nota[i][j];
        }
        promedio[i] = Nsuma / 3;

        cout << "\nEl promedio de " << nombre[i] << " es: " << promedio[i];
        if (promedio[i] >= 60) {
            cout << "\nFelicidades, el alumno ha aprobado";
        } else {
            cout << "\nEl estudiante ha reprobado";
        }

        cout << endl; // Agregar una línea en blanco para separar los resultados de cada estudiante
    }

    // Mostrar la tabla con los datos de ambos estudiantes
    cout << "\nResultados\n";
    cout << "Nombre\tNota1\tNota2\tNota3\tSituacion\n";
    for (int k = 0; k < 2; k++) {
        cout << nombre[k] << "\t" << nota[k][0] << "\t" << nota[k][1] << "\t" << nota[k][2] << "\t";
        if (promedio[k] >= 60) {
            cout << "Aprobado";
        } else {
            cout << "Reprobado";
        }
        cout << "\n";
    }

    getch();
    return 0;
}

