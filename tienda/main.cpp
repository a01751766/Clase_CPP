#include <iostream>
#include <string>
#include "producto.h"
#include "inventario.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    cout << "hola" << endl;
    Producto agua = Producto ("ID0001", "Agua Embotellada", 15.54, 25);
    Producto palomitas= Producto ("ID0002", "Bote de Palomitas", 25.65, 25);
    Producto ice = Producto ("ID0003", "ICE de cereza", 40.23, 50);
    Inventario inventario;
    inventario.agregarProducto(agua);
    inventario.agregarProducto(palomitas);
    inventario.agregarProducto(ice);
    inventario.imprimirl();
}