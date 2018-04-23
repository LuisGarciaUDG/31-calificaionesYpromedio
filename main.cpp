/* programa_31 Imprimir los numeros entre el 0 y el 20
estructura: ciclica for
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 5 de marzo del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    float prom, s, a;
    s=0;

    cout<<"\n Claificacion Promedio\n\n";

    for (x=0; x<=4; x++)
    {
    cout<<"Escribe la calificacion: ";
    cin>>a;
    cout<<"\n";
    s=s+a;
    }

    prom=s/5;
    cout<<"\t\t\t\t El promedio es: " <<prom<<"\n\n\n\t\t\t\t\t";
    system ("pause");

    return 0;
}
