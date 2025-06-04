#ifndef Producto_h
#define Producto_h

#include <string>
using namespace std;

struct Producto{
  string nombre;
  int stock;
  float precio;
};

Producto* crearInventario(int n);
void agregarProducto(Producto& p);
void mostrarInventario(Producto* inventario, int n);
void stockBajo(Producto* inventario, int n, int limite);
Producto MasCaro(Producto* inventario, int n);
void liberarInventario(Producto* inventario);


#endif