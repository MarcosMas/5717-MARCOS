//leer 500 numeros enteros y obtener cuantos son positivos
#include<iostream>
using namespace std;
int main()
{
	 int numero, i, Positivo = 0;
         cout<<"DIJITE LOS NUMEROS: "<<endl;
             
			 for(i=1;i<=500;i++)
             {
                 cin>>numero;
                     if(numero>0){
                         Positivo +=+1;}
             }
             
			 cout<<"los numeros positivos encontrados son:  "<<Positivo<<endl;

return 0;

}
