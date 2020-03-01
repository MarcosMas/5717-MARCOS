//15.escribir un algoritmo que lea datos de entrada de un archivo 
// que solo contiene numeros  y sume los numeros positivos.

#include<iostream>

using namespace std;

int main(){
	  float a, s=0;

	  cout<<"DIGIITE LOS DATOS DEL ARCHIVO"<<endl;
	  cin>>a;
	  while(cin){
	  if (a>0)
	  s=s+a;
	  cin>>a;
	  }
  cout<<"LA SUMA DE POSITIVOS ES: "<<s<<endl;

	return 0;
}
