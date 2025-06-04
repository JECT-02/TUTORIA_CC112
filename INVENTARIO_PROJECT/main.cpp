// Gestor de inventario con la estructura producto
// nombre, stock, precio
// pedir al usuario que ingrese la cantidad de productos
// pedir que llene los datos
// mostrar datos, stock bajo, mostrar el producto mas caro, total de stock
#include "inventario.h"
#include <iostream>
using namespace std;

int main() {
  iniciarInventario();
  return 0;
}

/*archivo.h
  structura
  funciones -> Producto masCaro(producto* inventario, int n); // devuelve el
producto mas caro

archivo.cpp
  llamar archivo.h
  Producto masCaro(producto* inventario, int n){

  }*/