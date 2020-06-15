#include<iostream>
using namespace std;

 int IMPAR(int n)
    {
     int resul=(n*3)+1;
         return resul;
     }
     int PAR(int n)
     {
     int resul=n/2;
         return resul;
     }
     int decimal(int n)
     {
         if(n%2==0)
         {
             n=PAR(n);
             cout<<" "<<n;
         }
         else
         {
             n=IMPAR(n);
             cout<<" "<<n;
         }
     return n;
     }

int main()
{
     int n;
     cin>>n;
     if(n>=1&&n<=106)
     {
         cout<<" "<<n;
         while(n!=1)
         n=decimal(n);
     }
return 0;
}
