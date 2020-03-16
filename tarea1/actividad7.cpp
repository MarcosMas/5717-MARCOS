//7.sumar los numeros pares del 2 al 100 e imprimir su valor
#include<iostream>
using namespace std;
int main()
{
         int i, valor;
         cout<<"LA SUMA DE LOS PARES DE 2 AL 100 ES "<<endl;

                         for(i=2;i<=100;i++){
                 if (i%2==0)
                     valor=valor+i;
             }
         cout<<"EL VALOR:"<<valor<<endl;
return 0;
}
