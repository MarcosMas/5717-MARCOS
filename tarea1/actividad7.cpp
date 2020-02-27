//sumar los numeros pares del 2 al 100 e imprimir su valor
#include<iostream>
using namespace std;
int main()
{
	 int i, valor;
         cout<<"la suma de pares de 2 al 100 es "<<endl;
             
			 for(i=2;i<=100;i++){
                 if (i%2==0)
                     valor=valor+i;
             }
         cout<<"el valor es :"<<valor<<endl;


return 0;



}
