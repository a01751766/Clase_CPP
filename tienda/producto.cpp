#include "producto.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

Producto::Producto()
{
    id = "";
    descripcion = "";
    precio = 0.0;
    unidades = 0;
}

Producto::Producto(string a, string b, double preci, int unidade)
{
    id = a;
    descripcion = b;
    precio = preci;
    unidades = unidade;
}

string Producto::getId()
{
    return id;
}

string Producto::getDescripcion()
{
    return descripcion;
}

double Producto::getPrecio()
{
    return precio;
}

int Producto::getUnidades()
{
    return unidades;
}

void Producto::setPrecio(double p)
{
    precio = p;
}

void Producto::setUnidades(int p)
{
    unidades = p;
}

void Producto::imprimir()
{
    cout << "--------------" << endl;
    cout << "ID: " << id << endl;
    cout <<"Producto: "<< descripcion << endl;
    cout << "Precio: " << precio << endl;
    cout << "Unidades en stock: " << unidades << endl;
    cout << "--------------" << endl;
}
