#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <vector>
#include <fstream>
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3
using namespace std;

struct Paciente {
int CodPaciente; 
char NomPaciente[60];
char Genero;
int Edad;
float Talla;
float Peso;
};


Paciente pacientes[60];
int cant_pacientes=0;
char opci;
void datos_paciente();
void menucita();
int ingresar_cod_paciente();
void lista_pacientes();
void lista_paciente_posicion(int pos_paciente);
void lista_paciente();
void regresar_menu();
void regresar_doc();
void menu();
void regi();
void cont();
void doc();
int main();
void calculadora();
void datos_paciente(){
system("cls");
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"Ingrese FOLIO:";
cin>>pacientes[cant_pacientes].CodPaciente;
cout<<"Ingrese nombre de paciente: ";
cin>>pacientes[cant_pacientes].NomPaciente;
cout<<"Ingrese genero(M/F): ";
cin>>pacientes[cant_pacientes].Genero;
cout<<"Ingrese edad: ";
cin>>pacientes[cant_pacientes].Edad;
cout<<"Ingrese Estatura: ";
cin>>pacientes[cant_pacientes].Talla;
cout<<"Ingrese peso: ";
cin>>pacientes[cant_pacientes].Peso;
cant_pacientes++;regresar_menu();
}


int ingresar_cod_paciente(){
int aux;int respuesta=-1;
bool encontrado=false;
system("cls");
cout<<"Ingresar folio del paciente: ";
cin>>aux;
for(int i=0;i<cant_pacientes;i++){
if(aux==pacientes[i].CodPaciente)
{
respuesta=i;
encontrado=true;
}
}
if(encontrado==false){
cout<<"No encontrado\n";
regresar_menu;
}
return respuesta;
}


void regresar_doc(){
	char op;do{
	cout<<"Desea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
	doc();
else 
	system("pause");
}

void menucita(){
	
	char opcion;
	cout<<endl<<"\tmenu";
	cout<<endl<<"\t 1. Consultar Cita";
	cout<<endl<<"\t2. Eliminar Cita";
	cout<<endl<<"\t3. Editar Cita";
	cout<<endl<<"\t 4. Regresar ";
	cout<<endl<<"Opción:";
	
	cin>>opcion;
	fflush(stdin);
	
	do{
		switch(opcion){
			case '1':
				
			break;
			
			case '2':
				
			break;
			
			case '3':
				
			break;
						
			case '4':
				system("cls");
				doc();
			break;
			
			default:
				cout<<"\n\tOpción Invalida T-T\n";
				break;
		}
		cout<<"\n\tPresiona Cualquier Tecla\n";
	 	getch();
		system("cls");
	}while(opcion != '4');
}

void lista_paciente(){
system("cls");
int pos_paciente=ingresar_cod_paciente();
if(pos_paciente==-1)regresar_menu();
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"FOLIO: "<<pacientes[pos_paciente].CodPaciente<<endl;
cout<<"Nombre: "<<pacientes[pos_paciente].NomPaciente<<endl;
if(pacientes[pos_paciente].Genero=='M')
cout<<"Genero: Masculino"<<endl;
else 
cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<pacientes[pos_paciente].Edad<<endl;
cout<<"Estatura: "<<pacientes[pos_paciente].Talla<<endl;
cout<<"Peso: "<<pacientes[pos_paciente].Peso<<endl;
regresar_menu();
}
void lista_paciente_posicion(int pos_paciente){
cout<<"\t\tDatos de Paciente "<<pos_paciente+1<<endl;
cout<<"FOLIO: "<<pacientes[pos_paciente].CodPaciente<<endl;
cout<<"Nombre: "<<pacientes[pos_paciente].NomPaciente<<endl;
if(pacientes[pos_paciente].Genero=='M')
cout<<"Genero: Masculino"<<endl;
else
 cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<pacientes[pos_paciente].Edad<<endl;
cout<<"Estatura: "<<pacientes[pos_paciente].Talla<<endl;
cout<<"Peso: "<<pacientes[pos_paciente].Peso<<endl;
cout<<endl<<endl;
}


void calculadora(){
	 float peso;
	char Nom[60];
	char G;
    float estatura,imc, icc, cintura, cadera, precipita, subescapular, suprailico,precipital;
	cout<<"Introduce tu nombre:  ";
	cin>>Nom;
	
	cout<<"Introduce tu genero(M/F):  ";
	cin>>G;
	
    cout<<"Introduce tu Peso (Kg):  ";

    cin>>peso;

    cout<<"Introduce tu Estatura  (Mts(1.00)): ";

    cin>>estatura;
	
	
    cout<<"Introduce  las medidas de la cintura (CM):  ";

    cin>>cintura;
	
	cout<<"Introduce  las medidas de la cadera (CM):  ";

    cin>>cadera;
    
    cout<<"Introduce  las medidas del pliegue subcutaneo precipital (mm):  ";

    cin>>precipital;
    
   cout<<"Introduce  las medidas del pliegue subcutaneo subescapular (mm):  ";

    cin>>subescapular;
    
    cout<<"Introduce  las medidas del pliegue subcutaneo suprailico  (mm):  ";

    cin>>suprailico;
    
    cout<<"Introduce  las medidas del pliegue subcutaneo Tricipital (mm):  ";

    cin>>precipital;
    icc=cintura/cadera;
    
    imc=peso/(estatura*estatura);
	if(imc<=18.4)
	cout << "\nUSTED ESTA BAJO DE PESO\n";
	if(imc>=18.5&&imc<=24.9)
	cout << "\nUSTED TIENE UN PESO NORMAL\n";
	if(imc>=25&&imc<=29.9)
	cout << "\nUSTED TIENE SOBREPESO\n";
	if(imc>=30)
	cout << "\nUSTED TIENE OBESIDAD\n";
	
    cout<<"Tu IMC es de :   "<<imc<<endl;
    cout<<"Tu ICC es de: "<<icc<<endl;
    cout<<"Nombre: "<< Nom << endl;
    cout<<"Genero: "<< G << endl;
    regresar_doc();
    

}

void lista_pacientes(){
system("cls");
cout<<"\t\tLista de pacientes\n";
for(int i=0;i<cant_pacientes;i++){
lista_paciente_posicion(i);
}
regresar_menu();
}

void regresar_menu(){
char op;do{
	cout<<"Desea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
	menu();
else 
	system("pause");
}

void doc(){
	int opcion=0;
do{
system("cls");
cout<<"\tHOSPITAL W\n";

cout<<"1. CITAS"<<endl;
cout<<"2. EXPEDIENTE CLINICO"<<endl;
cout<<"3. CALCULADORA DE IMC"<<endl;
cout<<"4. CAMBIAR DE USUARIO"<<endl;
cout<<"Ingrese opcion: ";
cin>>opcion;
}while(opcion>4);
switch (opcion)
{
case 1: 
	menucita();
	break;
case 2: 
//	lista_pacientes();
	break;
case 3: 
	calculadora();
	break;
case 4:
	main();
	break;
	}
}

void regi(){
vector<string> usuarios;
    vector<string> claves;


    usuarios.push_back("Valeria");
    usuarios.push_back("Ximena");
    usuarios.push_back("Maria");
  

 
    claves.push_back("456");
    claves.push_back("0407");
    claves.push_back("321");

    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "\tINGRESE SU USUARIO" << endl;
        cout<<"\n\n";
        cout << "\n\tUSUARIO: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tCONTRASEÑA: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos, intente nuevamente" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
         }

    cin.get();

}


void cont(){
vector<string> usuarios;
    vector<string> claves;


    usuarios.push_back("Sofia");
    usuarios.push_back("Brenda");
    usuarios.push_back("Andrea");
  
 
    claves.push_back("678");
    claves.push_back("123");
    claves.push_back("C");


    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "\tINGRESE SU USUARIO" << endl;
        cout << "\n\tUSUARIO: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tCONTRASEÑA: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                password.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == usuario && claves[i] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tEl usuario y/o password son incorrectos, intente nuevamente" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tUsted no pudo ingresar al sistema" << endl;
    }
    else
    {
        cout << "\n\n\tBienvenido al sistema" << endl;
         }

    cin.get();

}



void menu(){
int opcion=0;
do{
system("cls");
cout<<"\tHOSPITAL W\n";

cout<<"1. Ingresar Datos de Paciente"<<endl;
cout<<"2. Lista de Pacientes"<<endl;
cout<<"3. Buscar Paciente"<<endl;
cout<<"4. CAMBIAR DE USUARIO"<<endl;
cout<<"Ingrese opcion: ";
cin>>opcion;
}while(opcion>4);
switch (opcion)
{
case 1: 
	datos_paciente();
	break;
case 2: 
	lista_pacientes();
	break;
case 3: 
	lista_paciente();
	break;
case 4: 
	main(); 
	break;
	}
}

int main(){
	system("color 3f");
	
	cout<<"INGRESA QUE TIPO DE USUARIO ERES\n";
	cout<<"1.- DOCTOR\n";
	cout<<"2.- PACIENTE\n";
	cout<<"DIGITE LA OPCION QUE DESEA\n";
	cin>>opci;
	
	switch(opci){
		case '1':
			cout<<"INGRESO COMO DOCTOR\n";
			regi();
			doc();
			break;
		case '2':
			cout<<"INGRESO COMO PACIENTE\n";
			cont();
			menu();
			break;
		default:
			system("cls");
			cout<<"OPCION NO VALIDA\n";
			//cin.get();
			break;
	}
//	regi();
	//menu();
	
}
