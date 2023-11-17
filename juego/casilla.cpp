#include "casilla.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Casilla::Casilla()
{
    pos = 0;
    cambio = 0;
}
Casilla::Casilla(int p, int c)
{
    pos = p;
    cambio = c;
}
void Casilla::imprimir()
{
    cout << "Tu posicion es: " << pos << endl;
    cout << "El cambio fue de " << cambio << endl;
}

void Casilla::set_pos(int p)
{
    pos = p;
}

int Casilla::get_pos()
{
    return pos;
}
int Casilla::get_cambio()
{
    return cambio;
}