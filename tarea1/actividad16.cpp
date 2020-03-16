//16.desarolla un algotitmo que termine en un conjunto de cien  numeros naturales:
//¿cuantos son menores a 15?
//¿cuantos son mayores a 50?
//¿cuantos estan comprendidos entre el 25 y 45?

#include<iostream>
using namespace std;
int main()
{
     int i,  n, me=0,ma =0, e=0;
          cout<<"DIJITE LOS NUMEROS:"<<endl;
          for(i=1;i<=100;i++)
          {
          cin>>n;
              if (n<15)
              me+=+1;
                 if (n>50)
                 ma+=+1;
                     if(n>25&&n<45)
                     e+=+1;
          }
   cout<<"NUMERO MENOS A 15 SON: "<<me<<endl;
   cout<<"NUMERO MAYOR A 50 SON: "<<ma<<endl;
   cout<<"NUMEROS ENTRE 25 Y 45 SON: "<<e<<endl;
return 0;
}

