#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    
     int i, tortuga=0, liebre=0;
         int lim_inf=0;
         int lim_sup=100;
    srand(time(NULL));
         
         for(i=1;i<=1000;i++)
         {
               
             int valor=lim_inf+rand()%(lim_sup+1-lim_inf);
                 if(valor<=30)
                 {
                        tortuga=tortuga+1;
                        cout<<"GANÓ LA TORTUGA"<<endl;
                 }
                     else
                     {
                         liebre=liebre+1;
                         cout<<"GANÓ LA LIEBRE"<<endl;
                     }
         }
         
         cout<<"las veces que ganó la tortuga:  "<<tortuga<<endl;
         cout<<"las veces que ganó la liebre :  "<<liebre<<endl;
        return 0;
}
