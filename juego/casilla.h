#ifndef _CASILLA_H_
#define _CASILLA_H_

class Casilla
{
    private:
        int pos;
        int cambio;

    public:
        Casilla();
        Casilla(int p, int c);
        void imprimir();
        int get_pos();
        void set_pos(int p);
        int get_cambio();
};

#endif