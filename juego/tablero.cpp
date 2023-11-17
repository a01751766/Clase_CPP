#include "tablero.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Tablero::Tablero()
{
    for (int i = 0; i<=100; i++)
    {
        cas[i].set_pos(i);
    }
}
void Tablero::imprimir()
{
    for (int j = 0; j<100; j++)
    {
        cas[j].imprimir();
    }
}
