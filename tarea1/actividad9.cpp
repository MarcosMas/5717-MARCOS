// 9.calcular la media de cincuenta numeros e imprimir su resultado
#include<iostream>
using namespace std;
int main()
{
	 float  numero, suma = 0, media = 0;
	 int i;
        
		 cout<<" Dijite el numero : "<<endl;
         
		 for(i=1;i<=50; i++){
             cin>>numero;
            suma = suma+numero;
		 }
             media = suma/50;
            
		 cout<<" El resultado es:  "<<media<<endl;
     
         
return 0;
}
