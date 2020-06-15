#include <iostream>
#include <string>

using namespace std;


int valor1(long* a1,long* a2,long n,int a4,long k){
             int x=0;
             for(int i=0;i<a4;i++)
             {
                 for(long j=0;j<n;j++)
                 {
                     if((a1[j]<=(a2[i]+k))&&(a1[j]>=(a2[i]-k)))
                     {
                     x+=1;a2[i]=0;
                     } 
                 }
             }
      return x;
      }
long* valor2(long n){
     long* a1=new long[n];
         for(int i=0;i<n;i++)
         cin>>a1[i];
return a1;
}
long* valor3(int m){
     long* a2=new long[m];
         for(int i=0;i<m;i++)
         cin>>a2[i];
return a2;
}

int main(){

     int m;
     long n,k;
         cin>>n>>m>>k;
         long* a1=new long[n];
         long* a2=new long[m];
                 if(n>=1&&m<=200000&&(0<=k<=1000000000))
                 {
                     a1=valor2(n);
                     a2=valor3(m);
                     int x=valor1(a1,a2,n,m,k);
                     cout<<x<<endl;
                 }
     return 0; 
}
