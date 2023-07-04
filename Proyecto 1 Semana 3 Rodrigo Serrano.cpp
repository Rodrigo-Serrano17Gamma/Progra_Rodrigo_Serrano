//Por: Rodrigo Serrano | Cuarto Gamma     Fecha:19/06/2023
//Programa de Repaso

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int opcion = 0;
    char Nombre[100];
    int NumNotas = 0;
    int nota;
    int sumaNotas = 0;
    int promedio = 0;

    while (opcion != 5) {
        cout << "____________MENU______________" << endl;
        cout << "1. Opci�n No. 1 Ingresa el Nombre del Alumno/a" << endl;
        cout << "2. Opci�n No. 2 Ingresa el n�mero de Notas que ingresaras" << endl;
        cout << "3. Opci�n No. 3 Visualizaci�n de Notas individualmente" << endl;
        cout << "4. Opci�n No. 4 Promedio general de las Notas individuales" << endl;
        cout << "5. Opci�n No. 5 Salir" << endl;
        cout << "________________________________" << endl;
        cout << "Selecciona una opci�n, por favor: ";
        cin >> opcion;
        cout << "________________________________" << endl;

        switch (opcion) {
            case 1:
                cout << "Has seleccionado la opci�n No. 1 Ingresa el Nombre del Alumno/a" << endl;
                cin.ignore();
                cin.getline(Nombre, 100);
                break;

            case 2:
                cout << "Has seleccionado la opci�n No. 2 Ingresa el n�mero de Notas que ingresaras" << endl;
                cout << "�Cuantas notas ingresaras?" << endl;
                cin >> NumNotas;
                cout << "Ingresaras: " << NumNotas << " Notas" << endl;
                break;

            case 3:
                cout << "Has seleccionado la opci�n No. 3" << endl;
                for (int i = 1; i <= NumNotas; i++) {
                    cout << "Nota " << i << ": ";
                    cin >> nota;
                    sumaNotas += nota;
                }
                break;

            case 4:
                cout << "Has seleccionado la opci�n No. 4" << endl;
                if (NumNotas > 0) {
                    promedio = sumaNotas / NumNotas;
                    int decimal = (sumaNotas % NumNotas) * 100 / NumNotas;
                    cout << "El promedio general es: " << promedio << "." << decimal << endl;
                } else {
                    cout << "No se han ingresado notas todav�a." << endl;
                }
                break;

            case 5:
                cout << "Has seleccionado la Opci�n No. 5 de Salida" << endl;
                break;

            default:
                cout << "Opci�n no v�lida. Por favor, seleccione una opci�n del men�." << endl;
                break;
        }
    }

    return 0;
}
