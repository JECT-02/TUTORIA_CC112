#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

Producto* crearInventario(int n){
  return new Producto[n];
}

void agregarProducto(Producto& p){
  cout<<"Ingrese el nombre del producto: ";
  getline(cin,p.nombre);
  cout<<"Ingrese el stock del producto: ";
  cin>>p.stock;
  cin.ignore();
  cout<<"Ingresar el precio del producto: ";
  cin>>p.precio;
  cin.ignore();
}

void mostrarInventario(Producto* inventario, int n){
  for(int i=0; i<n; i++){
    cout<<"Nombre: "<<inventario[i].nombre<<endl;
    cout<<"Stock: "<<inventario[i].stock<<endl;
    cout<<"Precio: "<<inventario[i].precio<<endl;
    cout<<"--------------------------------------"<<endl;
  }
}

void stockBajo(Producto* inventario, int n, int limite){
  for(int i=0; i<n; i++){
    if(inventario[i].stock<=limite){
      cout<<"Nombre: "<<inventario[i].nombre<<endl;
      cout<<"Stock: "<<inventario[i].stock<<endl;
      cout<<"Precio: "<<inventario[i].precio<<endl;
      cout<<"--------------------------------------"<<endl;
    }
  }
}


Producto MasCaro(Producto* inventario, int n){
  Producto Caro = inventario[0];
  for(int i=0; i<n; i++){
    if(Caro.precio<inventario[i].precio){
      Caro = inventario[i];
    }
  }
  return Caro;
}
void liberarInventario(Producto* inventario){
  delete[] inventario;
}