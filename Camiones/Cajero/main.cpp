#include <iostream>
using namespace std;

const int tamanio = 50;
void menu();


int main()
{
    int aux,cantidad,cantidades[tamanio];
    int opcion, indice = 0;
    menu();
    cin >> opcion;
    switch (opcion)
    {


        case 1:
        {

            int numcant = 1;
            cout << "Ingrese las cantidades que necesite (0 para terminar)." << endl;
            cout << "Cantidad 1 ";
            cin >> cantidad;
            while ((cantidad != 0) && (indice < tamanio))
            {
                cantidades[indice] = cantidad;
                indice++;
                numcant++;
                cout << "Cantidad " << numcant << " ";
                cin >> cantidad;
            }
        }
        break;
        case 6:
        {
            cout << "Fin del Programa, gracias por su preferrencia!" << endl;
        }

    }

    while (opcion != 6)
    {
        cout <<endl;
        cout << "2.- Ordenar y mostrar del Menor a la Mayor Cantidad." << endl;
        cout << "3.- Ordenar y mostrar del Mayor a la Menor Cantidad." << endl;
        cout << "4.- Suma de Elementos Pares." << endl;
        cout << "5.- Suma de Elementos Impares." << endl;
        cout << "6.- Salir." << endl;
        cout << " Que necesita: ";
        cin >> opcion;
        switch (opcion)
        {
            int pares[15];

            case 2:
            {

                for (int i = 0; i < indice; i++)
                {
                    for (int j = i + 1; j < indice; j++)
                    {
                        if (cantidades [i] > cantidades [j])
                        {
                            aux = cantidades[i];
                            cantidades[i] = cantidades[j];
                            cantidades [j] = aux;
                        }
                    }
                }
                for (int i = 0; i < indice; i++)
                {
                cout << cantidades[i] << " ";
                }
            }
            break;
            case 3:
            {
                for (int i = 0; i < indice; i++)
                {
                    for (int j = i + 1; j < indice; j++)
                    {
                        if (cantidades [j] > cantidades [i])
                        {
                            aux = cantidades[i];
                            cantidades[i] = cantidades[j];
                            cantidades [j] = aux;
                        }
                    }
                }
                for (int i = 0; i < indice; i++)
                {
                    cout << cantidades[i] << " ";
                }

            }
            break;
            case 4:
            {
                int sumpar = 0;
                for (int i = 0; i < indice; i++)
                {
                    if (cantidades[i] %2 == 0)
                    {
                        sumpar = sumpar + cantidades[i];
                    }

                }
                cout << "La suma de numeros pares es " << sumpar << endl;

            }
            break;
            case 5:
            {
                int sumimpar = 0;
                for (int i = 0; i < indice; i++)
                {
                    if (cantidades[i] %2 != 0)
                    {
                        sumimpar = sumimpar + cantidades[i];
                    }

                }
                cout << "La suma de numeros impares es " << sumimpar << endl;
            }
            break;
            case 6:
            {
                cout << "Fin del Programa, gracias por su preferencia!" << endl;
            }

        }
    }
    return 0;
}

void menu()
{
    cout << " Bienvenido!" << endl;
    cout << "1.- Ingresar Cantidades de dinero." << endl;
    cout << "2.- Ordenar y mostrar del Menor a la Mayor Cantidad." << endl;
    cout << "3.- Ordenar y mostrar del Mayor a la Menor Cantidad." << endl;
    cout << "4.- Suma de Elementos Pares." << endl;
    cout << "5.- Suma de Elemnetos Impares." << endl;
    cout << "6.- Salir." << endl;
    cout << " Que necesita: ";
}

