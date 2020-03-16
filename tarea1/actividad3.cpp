//calcular y vizualizar la suma y el producto de los numeros pares comprendidos entre 20 y 400, ambos inclusive.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	 int suma;
	 long double pp;
         for(int i=20;i<=60;i+=2){
	     suma+=i;
	     pp*=i;
}

     cout<<"LA SUMA DE LOS PARES ES : "<<suma<<endl;
     cout<<"EL PRODUCTO DE LOS PARES ES : "<<pp<<endl;
return 0;

}

