//Iván Alberto Romero Wells A00833623
#include <bits/stdc++.h>
#include "Arreglo.h"
using namespace std;

int main()
{
    //Declaracion del arreglo
    Arreglo<int> arreglo;
    //Agregar elementos
    for (int i = 0; i < 5; i++)
    {
        int a = rand() % 10;
        arreglo.agregar(a);
    }
    //Mostrar elementos
    for (int i = 0; i < 5; i++)
    {
        cout << arreglo.consultar(i) << " ";
    }
    cout << endl;
    //Eliminar elementos
    arreglo.eliminar(2);
    //Mostrar elementos nuevamente
    for (int i = 0; i < arreglo.obtenerTamano(); i++)
    {
        cout << arreglo.consultar(i) << " ";
    }
    cout << endl;
    //mostrar capacidad y tamano
    cout << arreglo.obtenerCapacidad() << endl;
    cout << arreglo.obtenerTamano() << endl;

    //Mostrar comparacion de crecimiento de tamaño y capacidad
    Arreglo<int> arreglo2;
    for (int i = 0; i < 10; i++)
    {
        arreglo2.agregar(i);
        cout << i << ": " << arreglo2.obtenerTamano() << " " << arreglo2.obtenerCapacidad() << endl;
    }
    //probar operador []
    for (int i = 0; i < 10; i++)
    {
        cout << arreglo2[i] << " ";
    }
    cout << endl;
    // probar operador ==
    bool hola = arreglo != arreglo2;
    cout << hola << endl;

    Arreglo<int> arreglo3;
    for (int i = 0; i < 10; i++)
    {
        arreglo3.agregar(i);
    }
    hola = arreglo2 == arreglo3;
    cout << hola << endl;

    return 0;
}
