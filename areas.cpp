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
