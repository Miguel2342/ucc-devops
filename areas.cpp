# include <stdio.h>
# include <iostream>
using namespace std;

int main ()
{
        int op;
        cout<< "1. Calcular el area de un cuadrado" <<endl;
        cout<< "2.Calcular el area de un triangulo" <<endl;
        cout<< "3.Calcular el area de un circulo" <<endl;
        cout<< endl ;
        cout<< "Elija una opcion"<<endl;
        cin>>   op ;
        int lado,base,altura,radio;
        switch(op)
        {
                case 1 :cout<<"ingrese el lado del cuadrado\n";
                        cin>>lado;
                        cout<<" El area del cuadrado es: "<<lado*lado;
                        break;

                case 2 :cout<<" Ingrese la base del triangulo\n";
                        cin>>base;
                        cout<<"Ingrese la Altura del Triangulo:\n ";
                        cin>>altura;
                        cout<<"El area del teiangulo es: "<<base*altura/2;
                        break;
 		case 3 :cout<<" Ingrese el radio del circulo\n";
                        cin>>radio;
                        cout<<"El area del circulo es: "<<3.1416*(radio*radio);
                        break;
	}
        cout<< "\n1";
        cout<< "\+----------------------------------------------------------------------+n1";
        cout<< "\|									|n1";
        cout<< "\|                                                                      |n1";
        cout<< "\|     	PROGRAMA PARA CALCULAR EL AREA DE UNA FIGURA GEOMETRICA		|n1";
        cout<< "\|         		REALIZADO POR: MIGUEL GALINDO			|n1";
        cout<< "\|                                                                      |n1";
        cout<< "\|                                                                      |n1";
        cout<< "\+----------------------------------------------------------------------+n1";
return 0;
}
