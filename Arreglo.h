//Iván Alberto Romero Wells A00833623
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Arreglo
{
private:
    T *arreglo;
    int tamano;
    int capacidad;
    void redimensionar(int nuevaCapacidad)
    {
        T *nuevoArreglo = new T[nuevaCapacidad];
        for (int i = 0; i < tamano; i++)
        {
            nuevoArreglo[i] = arreglo[i];
        }
        delete[] arreglo;
        arreglo = nuevoArreglo;
        capacidad = nuevaCapacidad;
    }

public:
    Arreglo()
    {
        this->capacidad = 4;
        this->arreglo = new T[capacidad];
        this->tamano = 0;
    }
    ~Arreglo()
    {
        delete[] arreglo;
    }
    void agregar(T elemento)
    {
        if (tamano == capacidad)
        {
            redimensionar(capacidad * 2);
        }
        this->arreglo[tamano] = elemento;
        this->tamano++;
    }
    T consultar(int posicion)
    {
        if (posicion < 0 || posicion >= tamano)
        {
            throw "Posicion invalida";
        }
        return arreglo[posicion];
    }
    void eliminar(int posicion)
    {
        if (posicion < 0 || posicion >= tamano)
        {
            return;
        }
        for (int i = posicion; i < tamano - 1; i++)
        {
            arreglo[i] = arreglo[i + 1];
        }
        tamano--;
    }
    int obtenerTamano()
    {
        return tamano;
    }
    int obtenerCapacidad()
    {
        return capacidad;
    }
};
