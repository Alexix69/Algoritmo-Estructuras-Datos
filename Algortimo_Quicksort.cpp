#include <iostream>
using namespace std;
#include <fstream>

int mitad(int a[], int posInicial, int posFinal);   //RETORNO EL ELEMENTO CENTRAL
void ordenar(int a[], int posInicial, int posFinal);
void escribirArchivo(int a[]);
void imprimir(int a[]);

int main()
{
	int A[10] = { 23, -6, 13, -33, -98, 333, 23, -5, 0, -100 };
	cout << "Arreglo Original: " << endl;
	imprimir(A);
	escribirArchivo(A);
	ordenar(A, 0, 9);
	cout << endl;
	cout << "Arreglo Ordenado: " << endl;
	imprimir(A);
	return 0;
}

int mitad(int a[], int posInicial, int posFinal)
{
	return a[(posInicial + posFinal) / 2];
}

void ordenar(int a[], int posInicial, int posFinal)
{
	int i = posInicial;
	int j = posFinal;
	int temporal;
	int pivote = mitad(a, posInicial, posFinal);

	do {
		while (a[i] < pivote)
		{
			i++;
		}
		while (a[j] > pivote)
		{
			j--;
		}
		if (i <= j)
		{
			temporal = a[i];
			a[i] = a[j];
			a[j] = temporal;
			i++;
			j--;
		}
	} while (i <= j);

	if (posInicial < j)
	{
		ordenar(a, posInicial, j);
	}


	if (i < posFinal)
	{
		ordenar(a, i, posFinal);
	}
}

void escribirArchivo(int a[])
{
	ofstream archivo;
	archivo.open("Ordenamiento_Quicksort.txt");
	archivo << "ARREGLO ORIGINAL: " << endl;
	for (int i = 0; i < 10; i++)
	{
		archivo << "|" << a[i] << "|";
	}
	archivo << endl;
	ordenar(a, 0, 9);
	archivo << "ARREGLO ORDENADO: " << endl;
	for (int i = 0; i < 10; i++)
	{
		archivo << "|" << a[i] << "|";
	}
	archivo.close();
}

void imprimir(int a[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "|" << a[i] << "|";
	}
}