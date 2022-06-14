/*
vamos a programar dos pilas
que sirvan para poder unir ambos elementos 
el programa debe contener 
ingresar el tama�o de la pila
un menu
push, pop y mostrar los elementos de las pilas
*/
#include<iostream>
#include<conio.h>

using namespace std;

//vamos a definir una pila dentro de otra
struct nodo{
	int nro;
	struct nodo *siguiente;
};

//definir una estructura de la pila
typedef nodo *pila;

//metodos del programa
void imprimir1(pila);
void imprimir2(pila);
void eliminarPila(pila &);
void push(pila&, int);
void unir(pila, pila);
int pop(pila &);

main(){
	//detectar la spilas
	pila p1=NULL;
	pila p2=NULL;
	pila p3=NULL;
	
	int opc, n, valor, i;
	
	do{
		cout<<"1.- Apilar. \n";
		cout<<"2.- Ver la pila. \n";
		cout<<"3.- Unir pila. \n";
		cout<<"4.- Salir. \n";
		
		cin >>opc;
		switch(opc){
			case 1:
				cout<<"Ingresa el limite de la pila: \n";
				cout<<"Valores pila 1: \n";
				for(i=0; i<n; i++){
					cout<<"Valor: "<<endl;
					cin>>valor;
					push(p1, valor);
					
				}
				cout<<"Valores pila 2: \n";
				for(i=0; i<n; i++){
					cout<<"Valor: "<<endl;
					cin>>valor;
					push(p1, valor);
					
				}
			break;
			case 2: 
				cout<<"Contenido de la pila 1: \n";
				imprimir1(p1);
				cout<<"Contenido de la pila 2: \n";
				imprimir1(p2);
			break;
			case 3: 
			    cout<<"Pilas unidas ";
			    unir(p1, p2);
			    break;
			
		}
				
	}while(opc!=4);
}

void push(pila &p, int n){
	pila q=new (struct nodo);
	q->nro=n;
	q->siguiente=p;
	p=q;
}

void unirPilas(pila p1, pila p2){
	pila q=p1;
	while(q->siguiente!=NULL){
		q=q->siguiente;
		q->siguiente=p2;
	}
}

void imprimir(pila p1)
{ while(p1!=NULL)
 {cout<<p1->nro<<endl;
  p1=p1->siguiente;
 }
cout<<endl;
}

void imprimir1(pila p1)
{ while(p1!=NULL)
 {cout<<p1->nro<<endl;
  p1=p1->siguiente;
 }
cout<<endl;
}

void imprimir2(pila p2)
{ while(p2!=NULL)
 {cout<<p2->nro<<endl;
  p2=p2->siguiente;
 }
cout<<endl;
}




