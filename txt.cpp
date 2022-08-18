//#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

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
es.close();
icc=cintura/cadera;
imc=peso/(estatura*estatura);
cant_calculadoras++;regresar_menuC();

ofstream file;
	file.open("Expediente Clinico");
	file<<"Nombre: "<<Nom<<"  "<<"\n Genero: "<<G<<" "<<"\n Tipo de sangre: "<<tsangre<<" "<<"Ha contraido COVID-19: "<<covid<<" "<<"Es fumador/a: "<<fuma<<" "<<"\n IMC: "<<imc<<" "<<"\n ICC: "<<icc<<" ";
	cout<<"\nArchivo creado \n";


}

int main(){
	float peso;
	char tsangre;
	char Nom[60];
	char G;
	char covid;
	char fuma;
	int eda;
	int cod;
    float mmuslo, mabdominales, mpecho, mpierna,estatura,imc, icc, cintura, cadera, tricipital, subescapular, suprailico,precipital;
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


  ofstream file;
  file.open("EXPEDIENTE.txt");
  file<<"Nombre: "<<Nom<<"  "<<"\n Genero: "<<G<<" "<<"\n Tipo de sangre: "<<tsangre<<" "<<"Ha contraido COVID-19: "<<covid<<" "<<"Es fumador/a: "<<fuma<<" "<<"\n IMC: "<<imc<<" "<<"\n ICC: "<<icc<<" ";
  file.close();
  return 0;
}
