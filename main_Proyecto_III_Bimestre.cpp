//Protecto final Bim 3
#include <iostream>
#include <conio.h>
// Librer�as declaradas

using namespace std;
//Opciones
int a;
int b;
int c;
//Valores a permutar y combinar
int d,e,f,g,h,p,q,r,s;
int main() {
		
	while(a!=3){
	cout<<"----- MENU -----"<<endl;
	cout<<"Ingrese un n�mero para realizar una acci�n"<<endl;	
	cout<<"1. Permutaciones"<<endl;
	cout<<"2. Combinaciones"<<endl;	
	cout<<"3. Salir"<<endl;
	cin>>a;
	
	switch(a){
	case 1: 
	while(b!=4){
	cout<<"Ingrese un n�mero para realizar una acci�n"<<endl;	
	cout<<"1. Permutaciones sin repetici�n."<<endl;
	cout<<"2. Permutaciones con repetici�n y subconjuntos divididos."<<endl;	
	cout<<"3. Permutaciones circulares."<<endl;
	cout<<"4. Salir."<<endl;
	cin>>b;
	int vec[f];
	switch(b){
		case 1:
			cout<<"\nTu primer caso es: Permutaci�n sin reptici�n";
			cout<<"\n Cuantos datos deseas permutar?";
			cin>>d;
			e=1;
			for(int i=d;i>=1;i--){
				e=e*i;
			}
			cout<<"\n Tu Permutaci�n sin repetici�n es: "<<e<<endl;
		break;
		case 2:
			cout<<"\n Tu primer caso es: Permutaci�n con repetici�n";
			cout<<"\n Cuantos datos deseas permutar?";
			cin>>d;
			//Calcular numerador
			q=1;
			for(int i=d;i>=1;i--){
				q=q*i;
			}
			//Calcular denominador
			cout<<"\n Cuantos se repetiran?";
			cin>>e;
			f=e-1;
			for(int i=0;i<=f;i++){
				cout<<"\nCuantas veces se repite el dato numero "<<i+1<<" en repetirse: ";
				cin>>vec[i];
			}
			p=1;
			for(int i=0;i<=f;i++){
				g=1;
				h=vec[i];
				for(int j=h;j>=1;j--){
					g=g*j;
				}
				p=p*g;
				
			}
		
		cout<<"\nTu permutaci�n con repetici�n es: "<<q/p<<endl;	
			
		break;
		
		case 3:
			cout<<"\nTu primer caso es: Permutaci�n circular";
			cout<<"\n Cuantos datos deseas permutar?";
			cin>>d;
			
			e=1;
			for(int i=d-1;i>=1;i--){
				e=e*i;
			}
			cout<<"\n Tu Permutaci�n sin repetici�n es: "<<e<<endl;
		break;
		default:cout<<"Regresaste al menu principal"<<endl;
		break;
	}
	}
	break;
	case 2:	
	while(c!=2){
	cout<<"Ingrese un n�mero para realizar una acci�n"<<endl;	
	cout<<"1. Combinaciones sin repetici�n."<<endl;
	cout<<"2. Combinaciones con repetici�n."<<endl;	
	cout<<"3. Salir."<<endl;
	cin>>c;
	
	switch(c){
		case 1:
			cout<<"\nTu primer caso es combinaci�n sin repetici�n";
			cout<<"\nCuantos datos deseas combinar";
			cin>>d;
			cout<<"\nDe qu� tama�o es tu muestra?";
			cin>>e;
			f=d-e;
			g=1;
			for(int i=d;i>=1;i--){
				g=g*i;
			}
			h=1;
			for(int i=e;i>=1;i--){
				h=h*i;
			}
			p=1;
			for(int i=f;i>=1;i--){
				p=p*i;
			}
			r=p*h;
			cout<<"Tu combinaci�n resultante es: "<<g/r<<endl;
		break;
		case 2:
			cout<<"\nTu primer caso es Combinaci�n conn repetici�n";
			cout<<"\n Cuantos datos deseas combinar?";
			cin>>d;
			cout<<"\nDe que tama�o es tu muestra";
			cin>>e;
			f=d+e-1;
			g=1;
			for(int i=f;i>=1;i--){
				g=g*i;
				
			}
			
			h=1;
			for(int i=e;i>=1;i--){
				h=h*i;
				
			}
			
			p=1;
			s=d-1;
			for(int i=s;i>=1;i--){
				p=p*i;
				
			}
			
			q=h*p;
			//Esto nos dio el denominador
			
			cout<<"La combinaci�n resultante es: "<<g/q<<endl;
			
		break;
		default: cout<<"Regresar�s al men� anterior"<<endl;
		break;
		
	}
	
	}
	break;		
}
}
}
