//1-.se desea calcular independiente de los numeros pares e impares comprendidos entre 1 y 200.
#include <iostream>
using namespace std;
// funcion principal
int main()
{
     int sumapar = 0, sumaimpar = 0;
     
         for (int i=1;i<=200;i++){
         if (i%2 != 0){
         sumaimpar=sumaimpar+i;
         }
     else 
          sumapar=i+sumapar;
     }
     cout<<"la suma de los pares es: "<<sumapar<<endl;
     cout<<"la suma de los impares es: "<<sumaimpar<<endl;
    return 0;
}


