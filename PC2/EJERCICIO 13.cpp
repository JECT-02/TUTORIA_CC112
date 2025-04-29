/* 
Contador de caracteres en un char[]
Escribe una función que reciba una cadena de caracteres (char[]) y cuente
cuántas veces aparece un carácter específico. Usa solo punteros
*/

#include<iostream>
using namespace std;

int contador(char* p, char target){
    int count = 0;
    
    while(*p != '\0'){
        if(*p == target){
            count++;
        }
        p = p+1;
    }
    
    return count;
}

int main(){
    
    char str[100];
    cout<<"Ingrese su cadena: ";
    cin.getline(str,100);
    
    char target;
    cout<<"Ingrese la letra a contar: ";
    cin>>target;
    
    char* p = str;
    
    int count = contador(p,target);
    cout<<count<<endl;
    
    return 0;
}
