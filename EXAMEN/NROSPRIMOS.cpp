#include<iostream>
using namespace std;

int main()
{
  int numerito=0,a=0,a2=0,resultadito=0,numeritoc=0;
  cout<<"Ingresa el limite de los numeritos UwU: "; 
  cin>>numerito;
  for(a=1;a<=numerito;a++)
  {
    for(a2=1;a2<=a;a2++)
    {
      resultadito=a%a2;
      if(resultadito==0)
      {
        numeritoc=numeritoc+1;
      }
    }
    if(numeritoc==2)
    {
      cout<<" "<<a;
    }
    numeritoc=0;
  }
  return 0;
}
