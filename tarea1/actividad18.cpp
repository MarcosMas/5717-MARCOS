//18.¿N es primo?
#include<iostream>
using namespace std;
int main()
{
 int n, x , s;
 cin>>n;
 x=n%2;
 s=n%3;
 if(n!=3&&n!=2){
 if(x==1&&s>0){
cout<<"ES PRIMO"<<n<<endl;}
else{ 
cout<<"NO ES PRIMO"<<n<<endl;}}
else {
cout<<"ES PRIMO"<<n<<endl;}
 return 0;
}
