#include<iostream>

using namespace std;

int datos(int A,int B)
{
     int suma, resta, multi,mod;
     float divicion;
     suma=A+B;
     resta=A-B;
     multi=A*B;
     divicion=A/B;
     mod=A%B;
         cout<<suma<<endl;
         cout<<resta<<endl;
         cout<<multi<<endl;
         cout<<divicion<<endl;
         cout<<mod<<endl;
     
return 0;
}
int main()
{
      int A, B;
      cin>>A;
      cin>>B;
      if(1<=A&&B<=50)
      datos(A,B);
       
return 0;
}
