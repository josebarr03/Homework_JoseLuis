#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

string ciclo();

int main()
{
    string ciclos;
    ciclos = ciclo();
    cout << ciclos << endl;
}

string ciclo()
{
    cout << "Bienvenido al menu de tareas." << endl;
    cout << "Tiene cinco opciones para elegir." << endl;
    cout << "1- Primera tarea." << endl;
    cout << "2- Segunda tarea." << endl;
    cout << "3- Tercera tarea." << endl;
    cout << "4- Cuarta tarea." << endl;
    cout << "5- Salir." << endl;
    int eleccmen;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cin >> eleccmen;
        switch (eleccmen) // switch para casos dependiendo de la opcion elegida
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (eleccmen > 0 || eleccmen < 5);
}