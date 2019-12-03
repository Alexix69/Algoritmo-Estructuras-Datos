#include <iostream>
using namespace std;

void agregar (int a[], int n);
void ordenar (int a[], int n);
void imprimir (int a[], int n);

int main()
{

    int m;
    cout << "Tamanio del arreglo: ";
    cin >> m;
    int arreglo [] = {};
    agregar(arreglo, m);
    ordenar(arreglo, m);
    imprimir(arreglo, m);

    return 0;
}

void agregar (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void ordenar (int a[], int n)
{

    int aux, min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++ )
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;

    }


}
void imprimir (int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

