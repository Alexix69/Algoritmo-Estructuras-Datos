#include <iostream>
using namespace std;


int suma(int n1, int n2);

int main()
{
    int num1, num2;
    cout<<"        SUMATORIA       "<<endl;
while((num1<0)||(num2<0))
{
    cout<<"Ingrese desde donde quiere comenzar la suma(entero positivo): ";
    cin>>num1;

    cout<<"Ingrese donde quiere teminar la suma (entero positivo): ";
    cin>>num2;
}
    cout<<"La suma de "<<num1<<" hasta "<<num2<<" es: "<< suma(num1, num2)<<endl;
    return 0;
}

int suma(int n1, int n2)
{
    int suma=0;
    for(int i=n1; i<=n2; i++)
    {
        suma=suma + i;
    }

    return suma;
}
