#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct nodo{
	string dato;
	int prioridad;
	struct nodo * siguiente;
};

struct cola{
	nodo *delante;
	nodo *atras;
};

struct nodo *crearNodo(string x, int pri){
	struct nodo *nuevoNodo = new (struct nodo);
	nuevoNodo->dato=x;
	nuevoNodo->prioridad=pri;
	return nuevoNodo;
}

void encolar(struct cola &q, string valor, int priori){
	struct nodo *aux = crearNodo(valor, priori);
	aux->siguiente=NULL;
	
	if(q.delante == NULL){
		q.delante=aux;
	}else{
		(q.atras)->siguiente = aux;
	}
	q.atras = aux;
}

void mostrarCola(struct cola q){
	struct nodo *aux;
	
	aux = q.delante;
	
	cout<<"\n Turno asignado: \n";
	
	while(aux!=NULL){
		cout<<" "<<aux->dato<<" Su turno es la prioridad: "<<aux->prioridad<<endl;
		aux = aux->siguiente;
	} 
}

void ordenarPrioridad(struct cola &q){
	
	struct nodo *aux1, *aux2;
	int p_aux;
	string c_aux;
	
	aux1 = q.delante;
	
	while(aux1->siguiente != NULL){
		aux2 = aux1->siguiente;
		while(aux2!=NULL){
			if(aux1->prioridad > aux2->prioridad){
				p_aux = aux1->prioridad;
				c_aux = aux1->dato;
				
				aux1->prioridad = aux2->prioridad;
				aux1->dato = aux2->dato;
				
				aux2->prioridad = p_aux;
				aux2->dato = c_aux;
			}
			aux2=aux2->siguiente;
		}
		aux1 = aux1->siguiente;
	}
}

void insertar(struct cola &q, string c, int pri){
	
	encolar(q, c, pri);
	
	ordenarPrioridad(q);

}

void menu(){
	cout<<"\n Seleccione la opcion a realizar\n";
	cout<<"1.- Introduce nombre y tipo de cuenta \n";
	cout<<"2.- Realizar deposito \n";
	cout<<"3.- Mostrar tarjetahabientes, asignar turno \n";
	cout<<"5.- Salir \n";
		
}

int main(){
	struct cola q;
	
	q.delante = NULL;
	q.atras = NULL;
	
	string c; 
	float d; 
	int priori; 
	int op; 
	int x; 
	
	do{
		menu();
		cin>>op;
		switch(op){
			case 1:
				cout<<"Introduzca su nombre, por favor\n";
				cin>>c;
				cout<<"\n Introduzca tipo de cuenta que posee: \n";
				cout<<"1.- VIP\n";
				cout<<"2.- Empresarial\n";
				cout<<"3.- Normal\n";
				cout<<"4.- S/C b \n";
				cin>>priori;
				
				insertar(q, c, priori);
				
				cout<<"\n El tarjetahabiente "<<c<<" ha sido ingresado correctamente \n";
				break;
			case 2:
				cout<<"\n Depositos \n";
				cout<<"\n Introduzca la cantidad que desea depositar: \n";
				cin>>d;
				if(d > 5000){
					cout<<"Introduzca una cantidad menor, por favor";
				}else{
					cout<<"\n Han sido depositados $"<<d<<" de forma exitosa\n";	
				}
				break;
			case 3:
				cout<<"\n Mostrar los tarjetahabientes: \n";
				if(q.delante!=NULL){
					mostrarCola(q);
				}else{
					cout<<"\n La cola esta vacia \n";
				}
				break;
			case 4:
				cout<<"Gracias por la visita"; 
			default:
				system("pause");
				exit(0);			
		}
		system("pause");
		system("cls");
	}while(op!=4);
	return 0;
}
