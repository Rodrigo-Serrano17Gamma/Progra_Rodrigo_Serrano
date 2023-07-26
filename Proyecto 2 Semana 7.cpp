//Método burbuja
//Fecha 25/07/2023 ejemplo 
#include <iostream>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Declaración de array
	int n[5]={1,5,3,4,2};
	int aux;
	
	//Método de búrbuja
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(n[j]>n[j+1]){
				//5 2 3 
				aux=n[j];//5
				n[j]=n[j+1];//2
				n[j+1]=aux;//5
				//2 5 3 
			}
		}	
	}
	
	for(int k=1;k<=5;k++){
		cout<<n[k];
	}
	
	getch();
	return 0;
}
