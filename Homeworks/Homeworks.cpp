#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int eleccmen; // declaracion de variable para la eleccion en el menu
    cout << "Bienvenido al menu de tareas." << "Tiene tres opciones para elegir." << endl;
    do // ciclo para repetir el menu hasta elegir la opcion salir
    {
        cin >> eleccmen; // lee la variable
        switch (eleccmen) // switch para casos dependiendo de la opcion elegida
        {
        case 1: // caso elegido para el segundo parcial
            int eleccsub; // declaracion para variable de los subtemas
            cout << "Elija algun proyecto realizado." << endl;
            cout << "1- Imprimir y leer en c++." << endl;
            cout << "2- If-else en c++." << endl;
            cout << "3- Ciclos for, while y do-while." << endl;
            cout << "4- Uso de switch en c++." << endl;
            cout << "5- Arreglos en c++." << endl;
            cout << "6- Metodos de ordenamiento." << endl;
            cout << "7- Examen segundo parcial." << endl;
            cin >> eleccsub; // lee variable de eleccion de subtemas
            switch (eleccsub) // switch para casos dependiendo de el subtema elegido
            {
            case 1: // caso elegido para Imprimir y leer en c++
                cout << "hola" << endl;
                break;
            case 2: // caso elegido para If-else en c++
                cout << "adios" << endl;
                break;
            case 3: // caso elegido para Ciclos for, while y do-while
                cout << "tiempo" << endl;
                break;
            case 4: // caso elegido para Uso de switch en c++
                cout << "agua" << endl;
                break;
            case 5: // caso elegido para Arreglos en c++
                cout << "pasto" << endl;
                break;
            case 6: // caso elegido para Metodos de ordenamiento
                cout << "futbol" << endl;
                break;
            case 7: // caso elegido para Examen segundo parcial
                cout << "plaza" << endl;
                break;
            default:
                cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
                break;
            }
            break;
        case 2:
            int eleccsub2;
            cout << "Elija algun proyecto realizado" << endl;
            cout << "1- Metodos de ordenamiento." << endl;
            cout << "2- Goto, gotoxy, textcolor." << endl;
            cout << "3- Funciones y metodos." << endl;
            cout << "4- Struct." << endl;
            cout << "5- Examen tercer parcial." << endl;
            cin >> eleccsub2;
            switch (eleccsub2) // switch para casos dependiendo de el subtema elegido
            {
            case 1: // caso elegido para Metodos de ordenamiento
                cout << "hola" << endl;
                break;
            case 2: // caso elegido para Goto, gotoxy, textcolor
                cout << "adios" << endl;
                break;
            case 3: // caso elegido para Funciones y metodos
                cout << "tiempo" << endl;
                break;
            case 4: // caso elegido para Struct
                cout << "agua" << endl;
                break;
            case 5: // caso elegido para Examen tercer parcial
                cout << "pasto" << endl;
                break;
            default:
                break;
            }
            break;
        case 3:
            exit(EXIT_SUCCESS);
        default:
            cout << "Opcion elegida no valida, seleccione otra opcion" << endl;
            break;
        }
    } while (eleccmen > 0 || eleccmen < 3);
    return 0;
}
