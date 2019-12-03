#include <iostream>
using namespace std;

void ingresar(int a [], int n); //pasar un arreglo de nombre "a" y de un tamaño n
void burbuja (int a [], int n);
void imprimir (int a [], int n);

int main()
{
    int arreglo1[5];
    ingresar(arreglo1, 5);              //arreglo1 de tamaño 5
    burbuja(arreglo1, 5);
    imprimir(arreglo1, 5);
    return 0;
}

void ingresar(int a [], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i << " ";
        cin >> a [i];               //lo que se ingresa por teclado se almacena en cada posicion del arreglo
    }
}
void burbuja (int a [], int n)          // funcion para el ordenamiento de elementos, mediante el algoritmo burbuja
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}
void imprimir (int a [], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a [i] << " ";
    }
}
