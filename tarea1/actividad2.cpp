//2-. leer una serie de numeros distintos de cero(el ultimo numero de la serie -99) y obtener el numero mayor.
// como resultado se debe vizualizar el numero mayor Y un mensaje de indicacion de numero negativo, caso 
// de que se haya leeido un numero negativo.

#include<iostream>
using namespace std;
int main()
{
  for(int N=-1;N>=-99;N--){
	cout<<"EL NUMERO ES: "<<N<<endl;
		if(N==-99){
		cout<<"HAY NUMEROS NEGATIVOS"<<endl;
		}	
	}

return 0;
}





