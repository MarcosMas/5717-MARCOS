#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int fac(int n){
int i, a=1;
      if(n<0)
                a=0;
            else if(n==0)
                a=1;
                else
{
        for(i=1;i<=n;i++)
        a=a*i;
}
return a;
}

int main()
{
srand(time(NULL));
int n, s, suma=0, e1, e2, e3, e4, e5;
      cin>>n;
      cin>>suma;
                  int num[n];
                     for(int i=0;i<n;i++)
                         cin>>num[i];
e1=fac(n);
e2=fac(4);
e3=n-4;
e4=fac(e3);
e5=e1/(e2*e4)+4;

int size=4;
int ind;

            for(int i=0;i<=e1;i++)

{
            for(int i=0;i<n;i++)
                cout<<num[i]<<" ";
 while(size>0)
 
{
ind=rand()%size;
s=s+num[ind];
int aux;
        while(ind<size)
        {
        num[ind]=num[ind+1];
        num[ind+1]=0;
        ind++;
                }
 size--;
           for(int i=0;i<=n;i++)
        cout<<num[i]<<" ";
                          }
        cout<<"LA SUMA ES: "<<suma<<endl;
}
cout<<endl;
return 0;
}
