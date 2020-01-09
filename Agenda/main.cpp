#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip>

void escribir();
void leer();
string nombreArchivo;
int main()
{

    escribir();
    leer();

    return 0;
}

void escribir()
{
    char opcion;
    ofstream archivoEscribir;
    int edad, contador = 1;
    string nombre, apellido;
    cout << "Nombre del Archivo: ";
    getline(cin, nombreArchivo);
    archivoEscribir.open(nombreArchivo.c_str(), ios::out);
    do
    {
        cout << "Contacto " << contador << ".- " << endl;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Apellido: ";
        cin >> apellido;
        cout << "Edad: ";
        cin >> edad;
        archivoEscribir << nombre << " " << apellido << " " << edad << endl;
        cout << "Desea Ingresar otro Contacto (s/n)?: ";
        cin >> opcion;
        contador++;

    }
    while (opcion == 's');
    archivoEscribir.close();
}

void leer()
{
    ifstream archivoLeer;
    string nombre, apellido;
    int edad, contador = 1;
    archivoLeer.open(nombreArchivo.c_str(), ios:: in);
    if (archivoLeer.fail())
    {
        cout << "Ha ocurrido un error al abrir el archivo!";
    }
    else
    {
        while (!archivoLeer.eof())
        {
            archivoLeer >> nombre >> apellido >> edad;

            if (!archivoLeer.eof())
            {
                cout << endl;
                cout << "Contacto " << contador << ": " << endl;
                cout << "NOMBRE: " << nombre << endl;
                cout << "APELLIDO: " << apellido << endl;
                cout << "EDAD: " << edad << endl;
                contador++;
            }

        }
    }
    archivoLeer.close();

}
