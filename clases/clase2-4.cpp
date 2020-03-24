#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(int argc, char*argv[])
{
	int lim_inf=50, lim_sup=150;
	int sum= 0;
      srand(time(NULL));
	  if(argc !=3)
	  {
	  	
	  	cout<<"error, el programa "<<argv[0]<<"debe proporcionar los parametros "<<argv[0]<<"lim_inf lim_sup"<<endl;
	  	return 1;
	  }
	  
	      lim_inf= stoi(argv[1],nullptr,10);
	      lim_sup= stoi(argv[2],nullptr,10);
           
	 for(int i=0;i<200;i++)
	 {
         int tmp = lim_inf + rand()%(lim_sup + 1 - lim_inf);

    if (tmp>100)
     sum += 12;
     else 
     sum += 10;
	 
	
	}
	 cout<<"el costo de la gasolina es: "<<(sum * 19)<<endl;
	 

   return 0;
}
