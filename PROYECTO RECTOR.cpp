#include <iostream>
#include <fstream>
#include <windows.h>
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

struct Calculadora {
	float peso;
	char tsangre;
	char Nom[60];
	char G;
	char covid;
	char fuma;
	int eda;
	int cod;
    float mmuslo, mabdominales, mpecho, mpierna,estatura,imc, icc, cintura, cadera, tricipital, subescapular, suprailico,precipital;

};

Calculadora calculadoras[60];
int cant_calculadoras=0;
int ingresar_cod_calculadora();
int ingresar_cod_paciente();
void lista_calculadoras();
void lista_calculadora_posicion(int pos_calculadora);
void lista_calculadora();

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
void regresar_menuC();
void regresar_doc();
void menu();
void menuC();
void regi();
void cont();
void doc();
int main();
void calculadora();

void datos_calculadora(ofstream &es){
	float peso;
	char tsangre;
	char Nom[60];
	char G;
	char covid;
	char fuma;
	int eda;
	int cod;
    float mmuslo, mabdominales, mpecho, mpierna,estatura,imc, icc, cintura, cadera, tricipital, subescapular, suprailico,precipital;
	es.open("EXPEDIENTE clinico.txt", ios::out|ios::app);
cout<<"Ingrese FOLIO:";
cin>>calculadoras[cant_calculadoras].cod;
cout<<"Ingrese nombre completo del paciente: ";
cin>>calculadoras[cant_calculadoras].Nom;
cout<<"Ingrese genero(M/F): ";
cin>>calculadoras[cant_calculadoras].G;
cout<<"Ingrese edad: ";
cin>>calculadoras[cant_calculadoras].eda;
cout<<"Ingrese Estatura: ";
cin>>calculadoras[cant_calculadoras].estatura;
cout<<"Ingrese peso: ";
cin>>calculadoras[cant_calculadoras].peso;
cout<<"Tipo de sangre: \n";
    cout <<"1.- A POSITIVO\n";
    cout <<"2.- A NEGATIVO\n";
    cout <<"3.- B POSITIVO\n";
    cout <<"4.- B NEGATIVO\n";
    cout <<"5.- O POSITIVO\n";
    cout <<"6.- O NEGATIVO\n";
    cout <<"7.- AB POSITIVO\n";
    cout <<"8.- AB NEGATIVO\n";
    cout<<"Digite el numero segun el grupo sanguinero al que pertenece\n";
    cin>>calculadoras[cant_calculadoras].tsangre;
   switch (tsangre){
    case '1': 
		cout <<"SU TIPO DE SANGRE ES:A POSITIVO\n";
		break;
	case '2': 
		cout <<"SU TIPO DE SANGRE ES: A NEGATIVO\n";
		break;
	case '3': 
		cout <<"SU TIPO DE SANGRE ES:B POSITIVO\n";
		break;
	case '4': 
		cout <<"SU TIPO DE SANGRE ES: B NEGATIVO\n";
		break;
	case '5': 
		cout <<"SU TIPO DE SANGRE ES:O POSITIVO\n";
		break;
	case '6': 
		cout <<"SU TIPO DE SANGRE ES:O NEGATIVO\n";
		break;
	case '7': 
		cout <<"SU TIPO DE SANGRE ES:AB POSITIVO\n";
		break;
	case '8': 
		cout <<"SU TIPO DE SANGRE ES:AB NEGATIVO\n";
		break;
//	default:
		//	system("cls");
		//	cout<<"OPCION NO VALIDA\n";
			
		//	break;
	}
cout<<"Es o fue fumador (S/N): ";
cin>>calculadoras[cant_calculadoras].fuma;
cout<<"Ha tenido COVID-19 (S/N): ";
cin>>calculadoras[cant_calculadoras].covid;
cout<<"Digite las medidas del muslo: ";
cin>>calculadoras[cant_calculadoras].mmuslo;
cout<<"Digite las medidas abdominales: ";
cin>>calculadoras[cant_calculadoras].mabdominales;
cout<<"Digite las madidas del pecho: ";
cin>>calculadoras[cant_calculadoras].mpecho;
cout<<"Digite las medidas de la pierna: ";
cin>>calculadoras[cant_calculadoras].mpierna;
cout<<"Digite las medidas de la cintura (CM): ";
cin>>calculadoras[cant_calculadoras].cintura;
cout<<"Digite las medidas de la cadera (CM): ";
cin>>calculadoras[cant_calculadoras].cadera;
cout<<"Digite las medidas del pliegue subcutaneo precipital (mm): ";
cin>>calculadoras[cant_calculadoras].precipital;
cout<<"Digite las medidas del pliegue subcutaneo subescapular (mm): ";
cin>>calculadoras[cant_calculadoras].subescapular;
cout<<"Digite las medidas del pliegue subcutaneo suprailico (mm): ";
cin>>calculadoras[cant_calculadoras].suprailico;
cout<<"Digite las medidas del pliegue subcutaneo tricipital (mm): ";
cin>>calculadoras[cant_calculadoras].tricipital;
es<<"Folio: "<<cod<<" "<<"Nombre:  "<<Nom<<" "<<"Genero: "<<G<<" "<<"Edad: "<<eda<<" "<<"Estatura:"<<estatura<<" "<<"Peso: "<<peso<<" "<<"Sangre: "<<tsangre<<" "<<"fuma:"<<fuma<<" "<<"Muslo:"<<mmuslo<<" "<<"Abdominal:"<<mabdominales<<" "<<"pecho:"<<mpecho<<" "<<"Pierna:"<<mpierna<<" "<<"Cintura:"<<cintura<<" "<<"Cadera:"<<cadera<<" "<<"Precipital:"<<precipital<<" "<<"Subescapular:"<<subescapular<<" "<<"Suprailico:"<<suprailico<<" "<<"Tricipital:"<<tricipital<<" "<<"IMC:"<<imc<<" "<<"ICC:"<<icc<<" ";
cout<<"imc: "<<imc<<endl;
cout<<"icc: "<<icc<<endl;
es.close();
icc=cintura/cadera;
imc=peso/(estatura*estatura);
cant_calculadoras++;regresar_menuC();

ofstream file;
	file.open("EXPEDIENTE clinico");
	file<<"Nombre: "<<Nom<<"  "<<"\n Genero: "<<G<<" "<<"\n Tipo de sangre: "<<tsangre<<" "<<"Ha contraido COVID-19: "<<covid<<" "<<"Es fumador/a: "<<fuma<<" "<<"\n IMC: "<<imc<<" "<<"\n ICC: "<<icc<<" ";
	cout<<"\nArchivo creado \n";


}



int ingresar_cod_calculadora(){
int aux;int respuesta=-1;
bool encontrado=false;
system("cls");
cout<<"Ingresar folio del paciente: ";
cin>>aux;
for(int i=0;i<cant_calculadoras;i++){
if(aux==calculadoras[i].cod)
{
respuesta=i;
encontrado=true;
}
}
}
void datos_paciente(ofstream &es){
system("cls");
int CodPaciente; 
char NomPaciente[60];
char Genero;
int Edad;
float Talla;
float Peso;
 es.open("Personas.txt", ios::out| ios::app);
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"Ingrese FOLIO:";
cin>>pacientes[cant_pacientes].CodPaciente;
cout<<"Ingrese nombre completo del paciente: ";
cin>>pacientes[cant_pacientes].NomPaciente;
cout<<"Ingrese genero(M/F): ";
cin>>pacientes[cant_pacientes].Genero;
cout<<"Ingrese edad: ";
cin>>pacientes[cant_pacientes].Edad;
cout<<"Ingrese Estatura: ";
cin>>pacientes[cant_pacientes].Talla;
cout<<"Ingrese peso: ";
cin>>pacientes[cant_pacientes].Peso;
es<<"Folio: "<<CodPaciente<<" "<<"Nombre:  "<<NomPaciente<<" "<<"Genero: "<<Genero<<" "<<"Edad: "<<Edad<<" "<<"Estatura: "<<Talla<<" "<<"Peso: "<<Peso;
es.close();

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


void lista_calculadora(){
system("cls");
int pos_calculadora=ingresar_cod_calculadora();
if(pos_calculadora==-1)regresar_menuC();
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"FOLIO: "<<calculadoras[pos_calculadora].cod<<endl;
cout<<"Nombre: "<<calculadoras[pos_calculadora].Nom<<endl;
if(calculadoras[pos_calculadora].G=='M')
cout<<"Genero: Masculino"<<endl;
else 
cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<calculadoras[pos_calculadora].eda<<endl;
cout<<"Estatura: "<<calculadoras[pos_calculadora].estatura<<endl;
cout<<"Peso: "<<calculadoras[pos_calculadora].peso<<endl;
cout<<"Tipo de sangre: "<<calculadoras[pos_calculadora].tsangre<<endl;
if(calculadoras[pos_calculadora].fuma=='S')
cout<<"Si es fumador"<<endl;
else 
cout<<"No es fumador"<<endl;

if(calculadoras[pos_calculadora].covid=='S')
cout<<"El paciente ya ha contraido covid"<<endl;
else 
cout<<"El paciente NO ha contraido covid"<<endl;
cout<<"Medida muslo: "<<calculadoras[pos_calculadora].mmuslo<<endl;
cout<<"Medida abdomen: "<<calculadoras[pos_calculadora].mabdominales<<endl;
cout<<"Medida pecho: "<<calculadoras[pos_calculadora].mpecho<<endl;
cout<<"Medida pierna: "<<calculadoras[pos_calculadora].mpierna<<endl;
cout<<"Medida cintura: "<<calculadoras[pos_calculadora].cintura<<endl;
cout<<"Medida cadera: "<<calculadoras[pos_calculadora].cadera<<endl;
cout<<"Medida precipital: "<<calculadoras[pos_calculadora].precipital<<endl;
cout<<"Medida subescapular: "<<calculadoras[pos_calculadora].subescapular<<endl;
cout<<"Medida suprailico: "<<calculadoras[pos_calculadora].suprailico<<endl;
cout<<"Medida tricipital: "<<calculadoras[pos_calculadora].tricipital<<endl;

cout<<"IMC: "<<calculadoras[pos_calculadora].imc<<endl;
cout<<"ICC: "<<calculadoras[pos_calculadora].icc<<endl;
regresar_menuC();
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

void lista_calculadora_posicion(int pos_calculadora){
//system("cls");
 //pos_calculadora=ingresar_cod_calculadora();
//if(pos_calculadora==-1)regresar_menu();
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"FOLIO: "<<calculadoras[pos_calculadora].cod<<endl;
cout<<"Nombre: "<<calculadoras[pos_calculadora].Nom<<endl;
if(calculadoras[pos_calculadora].G=='M')
cout<<"Genero: Masculino"<<endl;
else 
cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<calculadoras[pos_calculadora].eda<<endl;
cout<<"Estatura: "<<calculadoras[pos_calculadora].estatura<<endl;
cout<<"Peso: "<<calculadoras[pos_calculadora].peso<<endl;
cout<<"Tipo de sangre: "<<calculadoras[pos_calculadora].tsangre<<endl;
if(calculadoras[pos_calculadora].fuma=='S')
cout<<"Si es fumador"<<endl;
else 
cout<<"No es fumador"<<endl;

if(calculadoras[pos_calculadora].covid=='S')
cout<<"El paciente ya ha contraido covid"<<endl;
else 
cout<<"El paciente NO ha contraido covid"<<endl;
cout<<"Medida muslo: "<<calculadoras[pos_calculadora].mmuslo<<endl;
cout<<"Medida abdomen: "<<calculadoras[pos_calculadora].mabdominales<<endl;
cout<<"Medida pecho: "<<calculadoras[pos_calculadora].mpecho<<endl;
cout<<"Medida pierna: "<<calculadoras[pos_calculadora].mpierna<<endl;
cout<<"Medida cintura: "<<calculadoras[pos_calculadora].cintura<<endl;
cout<<"Medida cadera: "<<calculadoras[pos_calculadora].cadera<<endl;
cout<<"Medida precipital: "<<calculadoras[pos_calculadora].precipital<<endl;
cout<<"Medida subescapular: "<<calculadoras[pos_calculadora].subescapular<<endl;
cout<<"Medida suprailico: "<<calculadoras[pos_calculadora].suprailico<<endl;
cout<<"Medida tricipital: "<<calculadoras[pos_calculadora].tricipital<<endl;

cout<<"ICC Paciente: "<<calculadoras[pos_calculadora].icc<<endl;
cout<<"IMC Paciente: "<<calculadoras[pos_calculadora].imc<<endl;
cout<<endl<<endl;
}




void lista_pacientes(){
system("cls");
cout<<"\t\tLista de pacientes\n";
for(int i=0;i<cant_pacientes;i++){
lista_paciente_posicion(i);
}
regresar_menu();
}

void lista_calculadoras(){
system("cls");
cout<<"\t\tLista de pacientes\n";
for(int i=0;i<cant_calculadoras;i++){
lista_calculadora_posicion(i);
}
regresar_menuC();
}

void regresar_menuC(){
char op;do{
	cout<<"Desea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
	menuC();
else 
	system("pause");
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
	ofstream Esc;
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
	//menucita();
	break;
case 2: 
//	lista_pacientes();
	break;
case 3: 
//	datos_calculadora(Esc);
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
	ofstream Esc;
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
	datos_paciente(Esc);
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



void menuC(){
	ofstream Esc;
int opcion=0;
do{
system("cls");
cout<<"\tDOCTOR W\n";

cout<<"1. Registrar Datos de Paciente"<<endl;
cout<<"2. Expedientes clinicos"<<endl;
cout<<"3. Cita"<<endl;
cout<<"4. CAMBIAR DE USUARIO"<<endl;
cout<<"Ingrese opcion: ";
cin>>opcion;
}while(opcion>4);
switch (opcion)
{
case 1: 
	datos_calculadora(Esc);
	break;
case 2: 
	lista_calculadoras();
	break;
case 3: 
	lista_calculadora();
	break;
case 4: 
	main(); 
	break;
	}
}

int main(){
	ofstream Esc;
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
			menuC();
		//	doc();
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
