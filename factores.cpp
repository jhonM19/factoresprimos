//pograma para factorizar por medio de numeros primos
//jhon alejandro mariaca

#include <iostream>//añadir librerias

using namespace std;

int main()
{
    int numero=0;//inicializar variables
    cout<<"$:";//ingresar numero
    cin>>numero;//guardar en variable
    for (int i = 2; numero >= i; i++)//se añade el parametro del ciclo
    {

        while(numero % i == 0)
        {

            cout<<i<<" x ";
            numero = numero/i;//se divide el numero entre la variable de conteo
        }

    }
   

}




























