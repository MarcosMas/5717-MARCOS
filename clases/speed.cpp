#include <iostream>

using namespace std;

int main()
{
    int n_pr =0;
    int n_n =0;
    int num;
    cin>>n_pr;
    int c1=0,c2=0;
    for (int i=0;i<n_pr;i++)
{
    cin>>n_n;
    for(int j=0;j<n_n;j++)
{
    cin>>num;
    if((num&1)==0)
    c1++;
    else 
    c2++;
}
 cout<<c1<<"even and"<<c2<<"odd"<<endl;
}
  
    return 0;
}

