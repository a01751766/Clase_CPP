#ifndef _PRODUCTO_H_
#define _PRODUCTO_H_
#include <string>

using std::string;

class Producto
{
    private:
        string id;
        string descripcion;
        double precio;
        int unidades;
    public:
        Producto();   // Constructores
        Producto(string a, string b, double preci, int unidade);

        string getId();    // getters
        string getDescripcion();
        double getPrecio();
        int getUnidades();

        void setPrecio(double p);
        void setUnidades(int p);
        void imprimir();


};
#endif