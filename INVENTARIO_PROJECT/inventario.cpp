#include "inventario.h"
#include <iostream>
using namespace std;

void iniciarInventario() {
  cout << "Bienvenido al gestor de inventario" << endl;
  int n;
  cout << "Ingrese el numero de productos a registrar: ";
  cin >> n;
  cin.ignore();

  Producto *inventario = crearInventario(n);

  for (int i = 0; i < n; i++) {
    cout << "Ingrese los datos del producto " << i + 1 << endl;
    agregarProducto(inventario[i]);
  }

  mostrarInventario(inventario, n);

  cout << "PRODUCTO CON STOCK BAJO" << endl;

  stockBajo(inventario, n, 5);

  cout << "PRODUCTO MAS CARO" << endl;
  Producto masCaro = MasCaro(inventario, n);
  cout << "Nombre: " << masCaro.nombre << endl;
  cout << "Stock: " << masCaro.stock << endl;
  cout << "Precio: " << masCaro.precio << endl;
  cout << "--------------------------------------" << endl;

  liberarInventario(inventario);
}