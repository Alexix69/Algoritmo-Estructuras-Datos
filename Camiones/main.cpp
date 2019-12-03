#include <iostream>
using namespace std;

int factorial (int n);

int main()
{
    cout << factorial(4);
    return 0;
}

int factorial (int n)
{
    if (n == 0)
        {
            return 1;
        }
    else
        {
            return n * factorial (n - 1);

        }

}



/*
    //DECLARACION DE VARIABLES
    int rango;
    int identificador;
    int contador;
    int sumatoriapar = 0;
    int sumatoriaimpar = 0;

    cout << "Ingrese el rango de camiones: " << endl;
    cin >> rango;
    for (int i=1; i<rango; i++)
    {
        cout << "Ingrese el identificador del camion" << endl;
        cin >> identificador;
        if (identificador % 2 == 0)
        {
            sumatoriapar = sumatoriapar + 1;

        }
        else
        {
            sumatoriaimpar = sumatoriaimpar + 1;
        }
    }
    cout << " Los camiones que van al Norte son: " << sumatoriaimpar << endl;
    cout << " Los camiones que van al Sur son: " << sumatoriapar << endl;*/

/*//1.-DECLARAR EL PROTOTIPO DE LA FUNCION
void prueba();
int sumar(int num1, int num2);
//3.-LLAMAR A LA FUNCION
prueba();
cout << sumar(5, 8);
//2.-TRABAJAR CON LA FUNCION
void prueba()
{
    cout << "Intro de funciones" << endl;
}
int sumar(int num1, int num2)
{
    int r = num1 + num2;
    return r;
}*/

