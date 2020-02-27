/* Se trata de escribir el algoritmo que permita emitir la factura correspondiente a una compra de un articulo determinado, del que
se adquieren una o varias unidades. El IVA es del 15% y si el precio bruto ( precio venta mas IVA) 
es mayor de 50.00 pesetas se debe realizar un descuento del 5%. */

#include<iostream>
using namespace std;
int main()
{
	 int p;
	 float Total, AC, IVA, PTI, des;
	     cout<<"artiulos comprados: " <<endl;
	     cin>>AC;
	     cout<<"precio del articulo:  " <<endl;
	     cin>>p;
	         Total=AC*p;
	         cout<<"TOTAL:"<<Total<<endl;
	 IVA=Total*0.15;
	         cout<<"IVA:"<<IVA<<endl;
	     PTI=Total+IVA;
	cout<<"PRECIO TOTAL CON IVA: "<<PTI<<endl;
	         if(PTI>50){
	         des=PTI*0.5;
	         
			 cout<<"PRECIO TOTAL CON DESCUENTO:"<<PTI-des<<endl;}
	         
			 else {
             
			     cout<<"SIN DESCUENTO :)"<<endl;}

return 0;
}
	

	
	
	
	
	
	
	


