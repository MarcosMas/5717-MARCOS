//10-.calcular los N primeros  multiplos de 4(4inclusive), donde N es el valor introducido por el teclado.

#include <iostream>

using namespace std;



     int n = 0;

     int multiplo = 0;

     int tmp = 1;



void ingreso (){

     cin>>n;

return;

}



void ciclo (){

     ingreso();

     cout<<"LOS MULTIPLOS SON:"<<endl;

         for (int i = 0; i < n; i++)

         {

         multiplo = 4 * tmp++;

         cout<<multiplo<<endl;

        }

return;

}



int main()

{

    cout<<"DIJITE LA CANTIDAD DE MULTIPLOS DE 4 QUE DESEE: "<<endl;

    ciclo();

return 0;

}
