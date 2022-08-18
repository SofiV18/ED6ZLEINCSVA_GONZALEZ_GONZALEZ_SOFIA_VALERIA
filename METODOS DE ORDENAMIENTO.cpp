/*
ejemplo de selección directa
metodo de ordenamiento
*/
#include  <stdio.h>
#include <iostream>

#define MAX 50

using namespace std;

struct ordenamiento{
int elemen ;
};

void regresar();
void metodo_shell();
void resultado(int b[], int n);
void shell(int b[], int n);
void leerarray(int,struct ordenamiento []);
void burbuja (int,struct ordenamiento []);
void muestra (int,struct ordenamiento []);
void leerarray(int n,struct ordenamiento a[]){
 for(int i=0;i<n;i++){
cout<<"Introduce elemento "<<i<<":";
cin>>a[i].elemen;
}
}


void burbuja (int n,struct ordenamiento a[]){
int i,j;
struct ordenamiento temp;
for(i=1;i<n;i++)
for(j=n-1;j>=i;j--)
if(a[j-1].elemen >a[j].elemen){
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
}
}


void muestra (int n,struct ordenamiento a[]){
for(int i=0;i<n;i++)
cout<<" "<<a[i].elemen;
}


void metodo_shell(){
	void shell(int b[], int n);
	void resultado(int b[], int n);
	
	int total;
    cout<<"\t Bienvenido a los metodos de ordenamiento \n";
    cout<<"Ingresa el numero de elementos: \n";
    cin>>total;
    int numero[total];
    for (int i = 0; i < total; i++){
        cout<<"Ingresa el elemento " << (i + 1) << "  : \n";
        cin>>numero[i];
    }
    shell(numero, total);
}

void shell(int b[], int n)
{

    int ints, i, aux;
    bool band;
    ints = n;
    while (ints > 1)
    {
        ints = (ints / 2);
        band = true;
        while (band == true)
        {
            band = false;
            i = 0;
            while ((i + ints) <= n)
            {
                if (b[i] > b[i + ints])
                {
                    aux = b[i];
                    b[i] = b[i + ints];
                    b[i + ints] = aux;
                    band = true;
                }
                i++;
                resultado(b, n);
            }
        }
    }
}

void resultado(int b[], int n)
{
    cout<<"Elementos ordenados: " << endl;

    for (int i = 0; i < n; i++)
        cout << " " << b[i] << " ";
}

void regresar(){
char op;do{
	cout<<"\nDesea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
	int main();
else 
	system("pause");
}


int main(){
	int n;
	int opc;
	int total; 
	int b;
	
	do{
		cout<<"\t Metodos de ordenamiento";
		cout<<"\n Selecciona un metodo de ordenamiento: ";
		cout<<"\n 1.- Burbuja";
		cout<<"\n 2.- Shell";
		cout<<"\n 3.- Seleccion directa\n";
		cin>>opc;
		
		switch(opc){
			case 1:
		 		struct ordenamiento orden[MAX];
				cout<<"Introduce el limite del arreglo:";
				cin>>n;
				leerarray(n,orden);
				burbuja (n,orden);
				cout<<endl<<"El arreglo ordenado es:"<<endl;
					muestra(n,orden);
					regresar();
					break;
					
			case 2:
			metodo_shell();
			regresar();
				break;
				
			case 3:
				int vector[4] = {3, 2, 5, 8};
	
	int i, j, k, aux;
	
	for(k = 0; k<=2; k++){
		i = k;
		aux = vector[k];
		for(j = k+1; j<=3; j++){
			if(vector[j] < aux){
				i = j;
				aux = vector[i];
			}
		}
		//intercambio
		vector[i] = vector[k];
		vector[k] = aux;
	}
	
	for(i = 0; i<=3; i++){
		cout<<" "<<vector[i]<<" ";
		
	}
	regresar();
				break;	
		
			}
		system("pause");
					
		}while(opc!=4);

	}
