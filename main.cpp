#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

//Prototipo de funciones
void capturarNumeros();
void capturarArreglo2();
void mostrarArreglo(int ,char arreglo2[]); 
void estructuraPersonaje();
//Struct personaje
struct Personaje{
	char nombre[30];
	char tipo[15];
	int fuerza;
	int salud;
}personajes[5];

//arreglo= {1,1,1,1,1}

const int tam = 5;
int arreglo[tam], n;
char arreglo2[5];
//Funcion principal
int main(){
	int opcion;
	do{
		cout<<"\t.:Menu:.\n";
		cout<<"1. Captura cinco numeros en un arreglo \n";
		cout<<"2. Mostrar Arreglo de caracteres\n";
		cout<<"3. Declara 3 personajes con sus Atributos \n";
		cout<<"4. Salir \n";
		cout<<"\nDigita la opcion: "; 
		cin>>opcion;
		
		switch(opcion){
			case 1: capturarNumeros(); 
					system("pause");
					break;
			case 2: capturarArreglo2();
					cout<<"\nDigita las veces a imprimir el arreglo: ";
					cin>>n;
					mostrarArreglo(n,arreglo2);
					system("pause");
					break;
			case 3: estructuraPersonaje();
					break;
			case 4: break;
			default: cout<<"\nOpcion fuera de rango\n"; 
					system("pause");
					break;
		}
		system("cls");
	}while(opcion != 4);
	getch();
	return 0;
}



//Funcion capturar numeros dentro de un arreglo
void capturarNumeros(){
	int suma=0,promedio=0;
	cout<<"\n\n\tCapturando numeros del arreglo\n";
	for(int i=0;i<tam;i++){
		fflush(stdin);
		cout<<i+1<<". Digita un numero: ";
		cin>>arreglo[i];
	}	
	cout<<"\n\nMostrando Arreglo:\n";
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<" - ";
	}
	cout<<"\n\nSuma del Arreglo:\n";
	for(int i=0;i<tam;i++){
		suma += arreglo[i];
	}
	cout<<"Suma: "<<suma<<endl;
	cout<<"\n\nPromedio del Arreglo:\n";
	cout<<"Promedio: "<<suma/tam<<endl;
	cout<<"\n";
}
//Funcion para capturar caracteres del arreglo2
void capturarArreglo2(){
	cout<<"\n.:Ingresa 5 caracteres:.\n";
	
	for(int i=0;i<5;i++){
		cout<<"Caracter "<<i+1<<": "; cin>>arreglo2[i];
	}
}
//Funcion mostrar arreglo
void mostrarArreglo(int n, char arreglo2[]){
	cout<<"\n.:Mostrando arreglo:.\n";
	for(int j=0;j<n;j++){
		for(int i=0;i<5;i++){
			cout<<arreglo2[i]<<" - ";
		}
		cout<<"\n";	
	}
}
//Funcion para la estrcutura personaje
void estructuraPersonaje(){
	cout<<"\n.:Ingresa los datos de los Personajes:.\n";
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Personaje "<<i+1<<endl;
		cout<<"Nombre: ";
		cin.getline(personajes[i].nombre,30,'\n');
        fflush(stdin);
		cout<<"Tipo: "; 
		cin.getline(personajes[i].tipo,30,'\n');
        fflush(stdin);
		cout<<"Fuerza: "; 
		cin>>personajes[i].fuerza;
		cout<<"Salud: "; 
		cin>>personajes[i].salud;
        cout<<"\n";
	}

	cout<<"\n.:Personaje agregado:.\n";
	    for(int j=0;j<3;j++){
		    cout<<"Personaje "<<j+1<<endl;
		    cout<<personajes[j].nombre<<endl;
		    cout<<personajes[j].tipo<<endl;
		    cout<<personajes[j].fuerza<<endl;
		    cout<<personajes[j].salud<<endl;
		    cout<<"\n";
	    }
	system("pause");
}
