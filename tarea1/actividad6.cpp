//6. calcular la suma de los cuadrados de los cien primeros numero naturales
#include<iostream>
using namespace std;
int main()
{
     double i, suma = 0;
         for(i=1;i<=100;i++){
             suma= suma+i*i;
     }
          cout<<"LA SUMA DE LOS CUADRADOS DE LOS 100 PRIMEROS NUMEROS ES: "<<suma<<endl;

return 0;


}
