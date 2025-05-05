/*
Utilizando funciones denominadas suma, resta, producto y divisi�n, que reciba como argumentos
dos par�metros de tipo float, implemente las 4 operaciones b�sicas (+, -, *, /). A continuaci�n, defina un
arreglo de punteros a funciones y asigne a cada elemento la direcci�n de las funciones de operaciones
b�sicas. Finalmente ejecute las operaciones por medio del arreglo de punteros a funciones.

*/
#include <iostream>
using namespace std;

float suma(float a, float b){return a+b;}
float resta(float a, float b){return a-b;}
float multiplicacion(float a, float b){return a*b;}
float division(float a, float b){return a/b;}

int main() {
    
    float (*operaciones[4])(float,float)={suma,resta,multiplicacion,division};
    
    float a,b;
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<endl;
    cout<<"Ingrese el segundo valor: ";
    cin>>b;
    
    cout<<"Suma: "<<operaciones[0](a,b)<<endl;
    cout<<"Resta: "<<operaciones[1](a,b)<<endl;
    cout<<"Mult: "<<operaciones[2](a,b)<<endl;
    cout<<"Division: "<<operaciones[3](a,b)<<endl;
    
}
