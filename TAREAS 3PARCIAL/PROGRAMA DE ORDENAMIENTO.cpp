#include<iostream>
#include<string.h>
#include<conio.h>

#define MAX 50
struct fecha
 {
  char dia[3];
  char mes[3];
  char anio[5];

 };
struct personall
 {
  char codigo[9];
  char nombre[MAX];
  char apellido[MAX];
  struct fecha nacimiento;

 };
 
 using namespace std;

 void leerpersonal(int,struct personall[]) ;
 void ordenaxfecha(int,struct personall[]) ;
 void listado(int,struct personall[]) ;
 int bBinariafecha(int,struct personall[],struct fecha) ;
int main(void){system("color f5");
int n,pos ;
struct fecha f;                                                                               
struct personall x[MAX] ;
 
 cout<<"Introduce el numero de personall:" ;cin>>n ;
 leerpersonal(n,x) ;
 ordenaxfecha(n,x) ;
 listado(n,x) ;
 cout<<"Introduce la fecha a buscar: "<<endl ;
 cout<<"Introduce el dia:" ;cin>>f.dia ;
 cout<<"Introduce el mes:" ;cin>>f.mes ;
 cout<<"Introduce el anio:" ;cin>>f.anio ;
 pos=bBinariafecha(n,x,f) ;
 if(pos==-1)cout<<"Personal no encontrado";
 else cout<<"Personal numero "<<pos;

 getch();
 }


 void leerpersonal(int n,struct personall x[])
 {for(int i=0;i<n;i++)
 {cout<<"Introduceel codigo:";cin>>x[i].codigo;
 cout<<"Introduce el apellido:";cin>>x[i].apellido;
 cout<<"Introduce el nombre:";cin>>x[i].nombre;
 cout<<"Introduce el dia nacimiento:";cin>>x[i].nacimiento.dia;
 cout<<"Introduce el mes nacimiento:";cin>>x[i].nacimiento.mes;
 cout<<"Introduce el anio nacimiento:";cin>>x[i].nacimiento.anio;
 cout<<endl;
 }
}
 void ordenaxfecha(int n,struct personall x[])
 {struct personall temp;
 char f1[9],f2[9];
 for(int i=1;i<n;i++)
 for(int j=n-1;j>=1;j--)
 {strcpy(f1,"");strcpy(f2,"");
 strcat(f1,x[j-1].nacimiento.anio);
 strcat(f1,x[j-1].nacimiento.mes);
 strcat(f1,x[j-1].nacimiento.dia);
 strcat(f2,x[j].nacimiento.anio);
 strcat(f2,x[j].nacimiento.mes);
 strcat(f2,x[j].nacimiento.dia);
if(strcmp(f1,f2)>0)
{temp=x[j-1];
x[j-1]=x[j];
x[j]=temp;

}
}
}
void listado(int n,struct personall x[])
{cout<<endl<<"Lista de personal: "<<endl;
for(int i=0;i<n;i++)
cout<<x[i].codigo<<"\t"<<x[i].apellido<<"\t"
<<x[i].nombre<<"\t"<<x[i].nacimiento.dia
<<"/"<<x[i].nacimiento.mes<<"/"<<x[i].nacimiento.anio
<<endl;
cout<<endl;
}
int bBinariafecha(int n,struct personall x[],struct fecha f)
{char f1[9],f2[9];
int izq=0,der=n-1,mitad;
while(izq<=der)
{mitad=(izq+der)/2;
strcpy(f1,"");strcpy(f2,"");
strcat(f1,f.anio);
strcat(f1,f.mes);
strcat(f1,f.dia);
strcat(f2,x[mitad].nacimiento.anio);
strcat(f2,x[mitad].nacimiento.mes);
strcat(f2,x[mitad].nacimiento.dia);
if(strcmp(f1,f2)>0)izq=mitad+1;
else if(strcmp(f1,f2)<0)der=mitad-1;
else return mitad;
}
return -1;
}
