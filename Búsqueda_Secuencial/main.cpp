#include <iostream>
using namespace std;
#include <fstream>

void agregar(int a[], int n);
void buscar (int a[], int n, int b);
void imprimir(int a[], int n);
void escribir (int a[], int n, int b);

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int tamanio;
    int buscado;
    cout << "Tamaño del Arreglo:";
    cin >> tamanio;
    int arreglo[tamanio];
    agregar(arreglo, tamanio);
    cout << "Elemento a buscar: ";
    cin >> buscado;
    imprimir(arreglo, tamanio);
    cout << endl;
    buscar(arreglo, tamanio, buscado);
    escribir(arreglo, tamanio, buscado);
    return 0;
}

void agregar(int a[], int n)
{
    int contador = 1;
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << contador << ": ";
        cin >> a[i];
        contador++;
    }
}
void buscar (int a[], int n, int b)
{
    int posicion;
    bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            posicion = i;
            encontrado = true;
        }
    }
    if (encontrado == true)
    {
        cout << endl;
        cout << "ELEMENTO ENCONTRADO EN LA POSICION " << posicion + 1;
    }
    else
    {
        cout << endl;
        cout << "ELEMENTO NO ENCONTRADO!";
    }
}
void imprimir (int a[], int n)
{
    cout << "ELEMENTOS DEL ARREGLO SON: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void escribir(int a[], int n, int b)
{
    ofstream archivo;
    archivo.open ("Arreglo de Enteros.txt", ios :: out);
    archivo << "ELEMENTOS DEL ARREGLO" << endl;
    for (int i = 0; i < n; i++)
    {
        archivo << a[i] << " ";
    }
    archivo << endl;
    archivo << "Elemento a buscar: " << b << endl;
    int posicion;
    bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            posicion = i;
            encontrado = true;
        }
    }
    if (encontrado == true)
    {
        archivo << endl;
        archivo << "ELEMENTO ENCONTRADO EN LA POSICION " << posicion + 1;
    }
    else
    {
        archivo << endl;
        archivo << "ELEMENTO NO ENCONTRADO!";
    }
    archivo.close();
}
