#include <iostream>
using namespace std;
int main() {

    //1. Imprimir 5 veces la palabra Pucese
    // for(i=0; i<5;i++)
    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Pucese: "<<(i+1);
        cout<<endl<<"fin";
    }

    //2. Imprimir la tabla de multiplicar del número 5
    // cout<<"El valor de la variable i"<<i;
    for(int i=1; i<=10; i++)
    {
        cout<<endl<<"5 x "<<i<<" = "<<(5*i);
    }
    cout<<" "<<endl;

    //3. Se ingresa por teclado un entero que representa una tabla de multiplicar.
    //Se pide imprimir este tabla desde el 1 al 12
    int a;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>a;
    for(int i=1;i<=12;i++)
    {
        cout<<a<<" x "<<i<<" = "<<(a*i)<<endl;
    }

    //4. Calcular la sumatoria de los numeros comprendidos entre 500 y 800
    int acum;
    acum=0;
    for(int i=500;i<=800;i++)
    {
        acum=acum+i;
    }
    cout<<"La sumatoria de los numeros comprendidos son: "<<acum<<endl;

    //5. Se pide por teclado 2 enteros que representan el principio y fin
    // de una serie. Se pide realizar las sumatoria de los numeros
    // multiplos de 5 que se encuentran en esta serie.
    int inicio, fin,suma;
    suma=0;

    cout<<"Ingrese el primer numero"<<endl;
    cin>>inicio;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>fin;
    for(int i=inicio;i<=fin;i++)
    {
        if(i%5==0)
        {
            suma=suma+i;
        }
    }
    cout<<"La sumatoria de los numeros multiplos de 5 son: "<<suma<<endl;

    //6. For anidados(un for dentro de otro for)
    //**********
    //**********
    //**********
    //**********
    //**********
    for(int j=1; j<=5; j++)
    {
        for(int j=1; j<=10; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //7. Se imprime las 10 primeras tablas de multiplicar
    for(int x=1;x<=10;x++)
    {
        cout<<"La tabla del "<<x<<endl;
        for(int i=1;i<=10; i++)
            {
                cout<<x<<" x "<<i<<" = "<<(x*i)<<endl;
            }
        cout<<endl;
    }

    //Tarea para la casa
    //1. Realizar la sumnatoria de los 30 primeros numeros primos
    // 1+2+3+5+7+11+13....+31 + ... etc

    //2.Realizar la sumatoria de los 10 primeros factoriales
    //Los ejercicios 1 y 2 los recibo en aula virtual en un unico archivo.

    //3. Compartir con el docente en el github el ejercicio realizado en clase.
    // es para hoy hasta las 20:00

    return 0;
}
