#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int consumo = 0;
	int total;
	int precio;
      srand(time(NULL));
	  int lim_inf = 50;
	  int lim_sup = 150;
        for(int i=0;i<200;i++){
     	
     	int valor = lim_inf + rand()%(lim_sup + 1 - lim_inf);

     	
		 if (valor > 100)
		 	 consumo = 12;
     	
		 else 
     	     consumo = 10 ;
     	     cout<<valor<<"  "<<consumo<<endl;
     	         total = total+consumo;
     	         precio = total*19;	
		 	 }
		    
	 
	 
	 cout<<"el precio de la gasolina es: "<<precio<<endl;

	 cout<<"total: "<<total<<endl;
	 
/* cout<<rand()<<endl;
  cout<<rand()<<endl;
  cout<<rand()<<endl;
*/
  
   return 0;
}
