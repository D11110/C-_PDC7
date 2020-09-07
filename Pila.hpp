#pragma once
#include <deque>
template <typename T>
class Pila
{
public:
    T &arriba() { return pila.front(); }
    void insertar(const T &moverValor) { pila.push_front(moverValor); }
    void extraer() { pila.pop_front(); }
    bool estaVacia() const { return pila.empty(); }
    size_t size() const { return pila.size(); }

private:
    std::deque<T> pila;
};
