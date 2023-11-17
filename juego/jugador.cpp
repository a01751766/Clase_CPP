#include "jugador.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void Jugador::cambia_posicion(int n)
{
    posicion = posicion + n;

}
int Jugador::get_posicion()
{
    return posicion;
}

void Jugador::set_nombre(string n)
{
    nombre = n;
}

void Jugador::imprimir()
{
    cout <<"Soy el jugador "<< nombre << endl;
    cout<< "Mi posición es " << posicion << endl;
}

void Jugador::mover()
{
    int mov = midado.lanzar();
    cambia_posicion(mov);
}

Jugador::Jugador()
{
    nombre = "Yo";
    posicion = 0;
}

Jugador::Jugador(int n, string m)
{
    nombre = m;
    posicion = n;
}

Jugador::~Jugador()
{
    cout << "Desde destructor del jugador " << nombre << endl;
}