#include <iostream>
using namespace std;
 
void caEdad( int Aa , int Ma, int Da, int An, int Mn, int Dn);
 
int main ()
{
    int Aa, Ma, Da;
    int An, Mn, Dn; 

    cout<<"CALCULAR EDAD"<<endl;
    cout<<endl<<"A�o Actual: "<<endl;
	cin>>Aa;
    cout<<"Mes Actual: "<<endl;  
	cin>>Ma;
    cout<<"Dia Actual: "<<endl;
	cin>>Da;
	
 
    cout<<endl<<"A�o Nacimiento: "<<endl; 
	cin>>An;
    cout<<"Mes de Nacimiento: "<<endl;
	cin>>Mn;
    cout<<"Dia de Nacimiento: "<<endl;
	cin>>Dn;
 
    caEdad( Aa , Ma, Da, An, Mn, Dn);
 
    return 0;
}
 

void caEdad( int Aa , int Ma, int Da, int An, int Mn, int Dn)
{
    int rF , rM, Fa, Fn;
 
    if (Fn<Fa)
    { 
        Fa=Fa+30; 
        Ma=Ma-1; 
        rF=Fa-Fn; 
    }
    else 
        rF=Fa-Fn;  
 
    if(Ma<Mn)
    { 
        Ma=Ma+12; 
        Aa=Aa-1;
        rM=Ma-Mn; 
    }
    else
        rM=Ma-Mn; 
    
 
    cout<<"Su edad es: "<<endl;
    cout<<" Edad: "<<Aa-An<< endl;
    cout<<" M: "<<rM<<endl; 
    cout<<" D: "<<rF<<endl;
    
     cout<<"A�o actual "<<Aa<<endl;

     if(Aa % 4 == 0 && (Aa % 100 != 0 || Aa % 400 == 0)){
         cout<<"El A�o " <<Aa<< "Si es bisiesto " <<endl;
     }else{
         cout<<"El A�o " <<Aa<< " No es bisiesto " <<endl;
     }
     
     cout<<"A�o de nacimiento "<<An<<endl;
     
     if(An % 4 == 0 && (An % 100 != 0 || An % 400 == 0)){
         cout<<"El A�o "<<An<<" Si es bisiesto "<<endl;
     }else{
         cout<<"El A�o "<<An<<" No es bisiesto "<<endl;
     }


}
