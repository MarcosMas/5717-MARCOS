//18-.¿N es primo?
#include <iostream>
using namespace std;
int main(){
   int i,n, d=0;

         cout<<"DIJITE EL NUMERO:"<<endl;
         cin>>n;
         for(i=1;i<(n+1);i++)
         {
             if(n%i==0)
             {
             d++;
             }
         }
             if(d!=2)
             {
             cout<<"No es Primo"<<endl;;
             }
                 else
                 {
                 cout<<"Es Primo"<<endl;
                 }
return 0;
}
