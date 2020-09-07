#include <iostream>
#include <string>
using namespace std;
class MiClase
{
    string Nombre;

public:
    MiClase(string Nombre) { this->Nombre = Nombre; }
    string obtenerNombre() { return Nombre; }
    friend ostream &operator<<(ostream &output, const MiClase &miCla);
};
ostream &operator<<(ostream &output, const MiClase &miCla)
{
    return output << miCla.Nombre;
}