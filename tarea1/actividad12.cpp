//12. dado diez  numeros enteros, visualizar la suma de los numeros pares  de la lista
//cuantos numeros pares existen y cual es la media aritmetica de los numeros impares.
#include<iostream>

using namespace std;

int main(){
     int i, x, np=0, e=0;
     float sp=0, si=0, me;
     
          cout<<"DIJITE LOS NUMEROS:"<<endl;
     for(i=1;i<=10;i++)
     {
         cin>>x;
         if (x%2==0)
        {
         sp=sp+x;
         np+=+1;
         
         }
             else
             {
             si=si+x;
             e+=e+1;
             }
     }
          me=si/e;
cout<<"LOS NUMEROS PARES SON: "<<np<<endl;
cout<<"LA SUMA DE PARES ES: "<<sp<<endl;
cout<<"LA MEDIA DE IMPARES ES: "<<me<<endl;
        return 0;
}
