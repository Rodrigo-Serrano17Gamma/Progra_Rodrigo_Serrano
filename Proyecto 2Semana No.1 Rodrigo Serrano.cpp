//Proyecto número 2 Semana 1 Bimestre 3		fecha: 13/06/2023
//Por Rodrigo Serrano | Cuarto Gamma

//declaración 
#include <iostream>
using namespace std;

//inicio del programa
int main() {
	//Declaración de filas y columnas
	int fila=4;
	int columna=4;
	//Declaración matriz
	int matriz [fila][columna];

	//Inicio de matriz 1
	//Rellenando Fila 1
	cout<<"Esta es la matriz 1"<<endl;
	for(int i=0;i<fila;i++){
		//Rellenando Fila 2
		for (int x=0;x<columna;x++){
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz[i][x];
	}
	}
	
	//Mostrar las matriz en orden ahora
	for(int i=0;i<fila;i++){
		for (int x=0;x<columna;x++){
		cout<<matriz [i][x]<<", ";
				
	}
	cout<<endl;
	}
	
	//Inicio de mostrar resultados
	cout<<"Resultados :"<<endl;	
	    // Suma de cada fila
    for (int i = 0; i < fila; i++) {
        int sumaFila = 0;
        for (int x = 0; x < columna; x++) {
            sumaFila += matriz[i][x];
        }
        cout << "Fila " << i + 1 << " = " << sumaFila << endl;
    }

    // Suma de cada columna
    for (int x = 0; x < columna; x++) {
        int sumaColumna = 0;
        for (int i = 0; i < fila; i++) {
            sumaColumna += matriz[i][x];
        }
        cout << "Columna " << x + 1 << " = " << sumaColumna << endl;
    }
	
	
	return 0;
}
