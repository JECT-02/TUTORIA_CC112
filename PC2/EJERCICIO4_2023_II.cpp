/*
Se desea colocar losetas en una habitaci�n rectangular utilizando exclusivamente losetas cuadradas
de cualquier medida, no necesariamente iguales. Calcule la m�nima cantidad de losetas necesarias, mostrando
su medida.
La menor medida posible es 1 m.
Nota 1: No puede usar ninguna sentencia repetitiva, es decir: While, Do-While ni For.
Nota 2: Utilice punteros (*) o referencias (&) en la mayor�a del c�digo.
*/

#include <iostream> 
using namespace std; 
void dividir(int* base, int* altura) 
{ 
    if (*base < 1 || *altura < 1) 
        return; 
    else 
    { 
        if (*base > *altura) 
        { 
            cout << *base / *altura << " losetas de " << *altura << " m de lado  " << endl; 
            *base = *base - *altura * (*base / *altura); 
        } 
        else 
        { 
            cout << *altura / *base << " losetas de " << *base << " m de lado" << endl; 
            *altura = *altura - *base * (*altura / *base); 
        } 
    } 
    dividir(base, altura); 
} 

int main() 

{ 

    int base; 
    int altura; 
    cout << "base: "; 
    cin >> base; 
    cout << "altura: "; 
    cin >> altura; 
    dividir(&base, &altura); 
    return 0; 

} 
