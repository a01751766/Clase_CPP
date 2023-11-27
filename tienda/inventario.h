#ifndef _INVENTARIO_H_
#define _INVENTARIO_H_

#include <vector>
#include <string>
#include "producto.h"

using std::string;
using std::vector;

class Inventario
{
    public:
        vector<Producto>existencias;
        void agregarProducto(Producto p);
        void imprimirl();
};

#endif