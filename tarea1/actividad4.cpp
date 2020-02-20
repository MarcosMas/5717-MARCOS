#include<iostream>
using namespace std;

int main()
{
  int mayor = 0;
  int menor = 0;
  int valor = 0;
  int esprimero = 1;
  do
  {
    cin>>valor;   
    if (cin&&valor<0) continue;
    if(cin&& esprimero)
    {
      mayor = menor = valor;
      esprimero= 0;
    } 
    else{
       if (cin && valor>mayor)
        mayor= valor;
       if (cin && valor<mayor)
        menor= valor;
     }
  }
     while (cin);
 
 cout<<"el numero mayor es: " <<mayor<<endl;
 cout<<"el numero menor es: " <<menor<<endl;
return 0;
}

