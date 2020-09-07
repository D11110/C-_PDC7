#include <iostream>
#include "Pila.hpp"
#include "MiClase.hpp"
template <class T>

void Tipos(T *a)
{
    Pila<T *> pilaa;
    const size_t tamPila = 10;
    if (T *objARetornar = dynamic_cast<string>(a))
    {
        Pila<string> cadenaPila;
        const size_t cadenaPilaTam = 10;
        cout << "\nInserte elementos en cadenaPila\n";
        for (size_t i = 0; i < cadenaPilaTam; ++i)
        {
            string stringTemp = "C++" + to_string(i);
            cadenaPila.insertar(stringTemp);
            cout << stringTemp << ' ';
        }
        cout << "\nExtrae elementos de cadenaPila\n";
        while (!cadenaPila.estaVacia())
        {
            cout << cadenaPila.arriba() << ' ';
            cadenaPila.extraer();
        }
    }
    else if (T *objARetornar = dynamic_cast<int>(a))
    {
        Pila<int> pilaEnteros;
        const size_t pilaEnterosTam = 10;
        int intValor = 1;
        cout << "\nInserte elementos en pilaEnteros\n";
        for (size_t i = 0; i < pilaEnterosTam; ++i)
        {
            pilaEnteros.insertar(intValor);
            cout << intValor++ << ' ';
        }
        cout << "\nExtrae elementos de pilaEnteros\n";
        while (!pilaEnteros.estaVacia())
        {
            cout << pilaEnteros.arriba() << ' ';
            pilaEnteros.extraer();
        }
    }
    else if (T *objARetornar = dynamic_cast<double>(a))
    {
        Pila<double> doublePila;
        const size_t doublePilaTam = 5;
        double doubleValor = 1.1;
        cout << "\nInserte elementos en doublePila\n";
        for (size_t i = 0; i < doublePilaTam; ++i)
        {
            doublePila.insertar(doubleValor);
            cout << doubleValor << ' ';
            doubleValor += 1.1;
        }
        cout << "\nExtrae elementos de doublePila\n";
        while (!doublePila.estaVacia())
        {
            cout << doublePila.arriba() << ' ';
            doublePila.extraer();
        }
    }
    else if (T *objARetornar = <dynamic_cast>(MiClase))
    {
        Pila<MiClase> clasePila;
        const size_t clasePilaTam = 10;
        cout << "\nInserte elementos en clasePila\n";
        for (size_t i = 0; i < clasePilaTam; ++i)
        {
            string stringTemp = "MC" + to_string(i);
            MiClase mcTemp(stringTemp);
            clasePila.insertar(mcTemp);
            cout << stringTemp << ' ';
        }
        cout << "\nExtrae elementos de clasePila\n";
        while (!clasePila.estaVacia())
        {
            cout << clasePila.arriba() << ' ';
            clasePila.extraer();
        }
    }
}
int main()
{
}