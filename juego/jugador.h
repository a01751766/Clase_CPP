#ifndef _JUGADOR_H_
#define _JUGADOR_H_

#include <string>
#include "dado.h"
using std::string;

class Jugador
{
    private:
    string nombre;
    string color;
    int posicion;
    Dado midado;

    public:
    Jugador();//contructores
    Jugador(int n, string m);

    ~Jugador();

    void cambia_posicion(int n);
    int get_posicion();
    void set_nombre(string n);
    void mover();
    void imprimir();
};

#endif