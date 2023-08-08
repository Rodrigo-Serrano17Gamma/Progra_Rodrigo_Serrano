//Protecto final Bim 3
#include <iostream>
#include <conio.h>
// Librerías declaradas

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
	cout<<"Ingrese un número para realizar una acción"<<endl;	
	cout<<"1. Permutaciones"<<endl;
	cout<<"2. Combinaciones"<<endl;	
	cout<<"3. Salir"<<endl;
	cin>>a;
	
	switch(a){
	case 1: 
	while(b!=4){
	cout<<"Ingrese un número para realizar una acción"<<endl;	
	cout<<"1. Permutaciones sin repetición."<<endl;
	cout<<"2. Permutaciones con repetición y subconjuntos divididos."<<endl;	
	cout<<"3. Permutaciones circulares."<<endl;
	cout<<"4. Salir."<<endl;
	cin>>b;
	int vec[f];
	switch(b){
		case 1:
			cout<<"\nTu primer caso es: Permutación sin reptición";
			cout<<"\n Cuantos datos deseas permutar?";
			cin>>d;
			e=1;
			for(int i=d;i>=1;i--){
				e=e*i;
			}
			cout<<"\n Tu Permutación sin repetición es: "<<e<<endl;
		break;
		case 2:
			cout<<"\n Tu primer caso es: Permutación con repetición";
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
		
		cout<<"\nTu permutación con repetición es: "<<q/p<<endl;	
			
		break;
		
		case 3:
			cout<<"\nTu primer caso es: Permutación circular";
			cout<<"\n Cuantos datos deseas permutar?";
			cin>>d;
			
			e=1;
			for(int i=d-1;i>=1;i--){
				e=e*i;
			}
			cout<<"\n Tu Permutación sin repetición es: "<<e<<endl;
		break;
		default:cout<<"Regresaste al menu principal"<<endl;
		break;
	}
	}
	break;
	case 2:	
	while(c!=2){
	cout<<"Ingrese un número para realizar una acción"<<endl;	
	cout<<"1. Combinaciones sin repetición."<<endl;
	cout<<"2. Combinaciones con repetición."<<endl;	
	cout<<"3. Salir."<<endl;
	cin>>c;
	
	switch(c){
		case 1:
			cout<<"\nTu primer caso es combinación sin repetición";
			cout<<"\nCuantos datos deseas combinar";
			cin>>d;
			cout<<"\nDe qué tamaño es tu muestra?";
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
			cout<<"Tu combinación resultante es: "<<g/r<<endl;
		break;
		case 2:
			cout<<"\nTu primer caso es Combinación conn repetición";
			cout<<"\n Cuantos datos deseas combinar?";
			cin>>d;
			cout<<"\nDe que tamaño es tu muestra";
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
			
			cout<<"La combinación resultante es: "<<g/q<<endl;
			
		break;
		default: cout<<"Regresarás al menú anterior"<<endl;
		break;
		
	}
	
	}
	break;		
}
}
}
