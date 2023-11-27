#include "producto.h"
#include "inventario.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void Inventario::agregarProducto(Producto p)
{
    existencias.push_back(p);
}

void Inventario::imprimirl()
{
    for (int i = 0; i < existencias.size(); i++)
    {
        existencias.at(i).imprimir();
    }
}
