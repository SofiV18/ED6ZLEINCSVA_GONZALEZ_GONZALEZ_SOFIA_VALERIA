/*
vamos a crear una pila como elemento basico para poder demostrar
que las primeras entradas son las ultimas salidas
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//definir pila
struct Nodo{
int valor;
Nodo *siguiente;
};

//metodos
void insertarPila(Nodo *&, int);
void mostrarPila(Nodo *&);
void eliminarPila(Nodo *&, int);

int main(){
	/*el primero en entrar es el ultimo en salir, el ultimo en entrar
	es el primero que sale*/
	
	int cantidad, i=0, v, op=1;
	//primera definicion de la pila
	Nodo *pila=NULL;
	
	while(opc!=4){
	cout<<"Selecciona la opcion deseada: ";
	cout<<"1.- Insertar valor:\n";
	cout<<"1.- Mostrar valores:\n";
	cout<<"1.- Eliminar valor\n";
	cout<<"1.- Salir:\n";
	cin>>op;
	
	switch(op){
		case 1:
			cout<<"Ingresa la cantidad de datos a introducir en la pila: \n";
			cin>>cantidad;
			while(i<cantidad){
				cout<<"	Ingresa el valor: \n";
				cin>>v;
				insertarPila(pila);
				i++;
			}
			break;
			
			case 2:
				mostrarPila(pila);
				break;
				case 3:
					//saber si esta vacia
					if(pila==NULL){
						cout<<"No se puede eliminar, pila vacia: \n";
						
					}else{
						cout<<"Eliminar dato \n";
						while(pila!=NULL){
							eliminarPila(pila);
							if(pila!=NULL){
								cout<<" | "<<endl;
							}
						}
					}
					break;
				default:
					cout<<"La opcion deseada no existe, favor de mimir\n";
	}
  }
  return 0;
}

void insertarPila(Nodo *&pila, int v){
	//creamos el nodo
	Nodo *insPila=new Nodo();
	insPila->valor=v;
	insPila->siguiente=pila;
	pila=insPila;
}

void mostrarPila(Nodo*&pila){
	//necesitamos un nodo que almacene los vaslores
	Nodo *aux;
	if(pila==NULL){
		cout<<"La pila esta vacia, no hay nada que mostrar";
		
	}else{
		aux=pila;
		while(aux!=NULL){
			cout<<"Valor: "<<aux->valor<<endl;
			aux=aux->siguiente;
			
		}
	}
}

void eliminarPila(Nodo *&pila, int &v){
	Nodo *aux=pila;
	v=aux->valor;
	pila=aux->siguiente;
	delete aux;
}

