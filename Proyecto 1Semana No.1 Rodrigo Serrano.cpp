/*Matriz en c++ es un vector con dos datos y dimensiones	
creación de una matriz de 3*3
int    A        [3][3]
tipo  Nombre    Espacios
*/

//Declaración de bibliotecas
#include <iostream>
using namespace std;

int main() {
	//Declara Matriz
	int fila=3;
	int columna=3; //Esto es cuando queremos que el usuario decida el valor de la matriz
	//Declara de Matriz en sí No.1
	int matriz[fila][columna];
	//Declara de Matriz No.2
	int matriz2[fila][columna];
	//Declaración de Suma de matriz (Matriz No.3)
	 int matrizSuma[fila][columna];
	
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
	
	//Inicio de matriz 2
	//Rellenando Fila 1
		cout<<"Esta es la matriz 2"<<endl;
	for(int i=0;i<fila;i++){
		//Rellenando Fila 2
		for (int x=0;x<columna;x++){
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz2[i][x];
	}
	}
	
	//Mostrar las matriz en orden ahora
	for(int i=0;i<fila;i++){
		for (int x=0;x<columna;x++){
		cout<<matriz2[i][x]<<", ";
				
	}
	cout<<endl;
	}
	
	//Matriz 3
	    cout << "La matriz suma es:" << endl;
    // Calcular la matriz suma y mostrarla
    for(int i = 0; i < fila; i++) {
        for(int j = 0; j < columna; j++) {
            matrizSuma[i][j] = matriz[i][j] + matriz2[i][j];
            cout << matrizSuma[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
		
}
