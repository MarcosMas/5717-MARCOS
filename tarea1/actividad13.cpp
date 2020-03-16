//13-.calcular la nota media de los alumnos de una clase 

//considerando n-numeros de alumnos y c-numeros de notas de cada alumno.



#include <iostream>

using namespace std;



int cant_alumnos = 0, cant_notas = 0;

float valor_nota = 0,suma_notas = 0, promedio_notas = 0;



void parametros (){

     cout<<"ESCRIBA EL NUMERO DE ALUMNOS QUE HAY : "<<endl;

     cin>>cant_alumnos;

     cout<<"ESCRIBA LA CANTIDADA DE NOTAS:"<<endl;

     cin>>cant_notas;

return;

}



void calificaciones (){

parametros();

    for (int x = 1; x <= cant_alumnos; x++){

        cout<<"------Ingresando las notas del alumno "<<x<<"------"<<endl;

        for (int i = 1; i <= cant_notas; i++)

        {

            cout<<"Inserte la califiación de la nota "<<i<<endl;

            cin>>valor_nota;

            suma_notas = valor_nota + suma_notas;

        }

    }

    promedio_notas = suma_notas/(cant_alumnos*cant_notas);

return;

}



int main(){

    calificaciones();

    cout<<"LA NOTA MEDIA DE LOS ALUMNOS DE UNA CLASE ES: "<<promedio_notas<<endl;

return 0;

}
