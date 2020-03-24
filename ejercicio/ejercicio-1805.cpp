#include<iostream>

using namespace std;

int main()
{
     int A;
     float B,R;
     cin>>A;
     cin>>B;
         
         if(1<=A&&B<=1000000000)
         {
             R=(A+B)+(A-B)+(B+A)+(B-A);
             cout<<R<<endl;
         }
return 0;
}
