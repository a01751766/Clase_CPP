#include<iostream>
#include "dado.h"
#include "jugador.h"
#include "tablero.h"
using std::cout;
using std::endl;

int main()
{
    Dado midado;
    midado.set_caras(6);
    midado.imprimir();

    for (int i = 0; i < 5; i++)
    {
        cout << midado.lanzar() << endl;
    }
    Jugador yo;
    yo.set_nombre("Antonio");
    yo.imprimir();
    yo.mover();
    yo.imprimir();

    Jugador tu = Jugador(10, "Andres");
    tu.imprimir();

    Tablero un;
    un.imprimir();
    
}