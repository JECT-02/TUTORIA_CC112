/*
Dada una cadena, encuentre la subcadena contigua de longitud máxima que también sea un
palíndromo. Por ejemplo, la subcadena palindrómica más larga de “bananas” es “anana”, y la subcadena
palindrómica más larga de “abdcbcdbdcbbc” es “bdcbcdb”.
No se garantiza que la subcadena palindrómica más larga sea única. Si existen varias subcadenas
palindrómicas más largas, la solución debe devolver la que aparece primero en la cadena.
Entrada:
"abracadabra"
Salida: "aca"
Explicación: No hay ninguna subcadena palindrómica en una cadena "abracadabra" con una longitud mayor
que 3. Hay dos subcadenas palindrómicas con una longitud de 3, a saber, "aca" y "ada".
La solución devuelve "aca" tal como aparece antes de "ada" en la cadena.*/

#include<iostream>
using namespace std;

bool isPalindromo(char* p, int inicio, int final){
    while(inicio<final){
        if(*(p+inicio) != *(p+final)){
            return false;
        }
        inicio++;
        final--;
    }
    return true;
}

void maximoPalindromo(char* p, int len){
    int maxLen = 1;
    int inicio = 0;
    
    for(int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(isPalindromo(p,i,j) && j-i > maxLen){
                maxLen = j-i;
                inicio = i;
            }
        }
    }
    
    for(int i=inicio; i<=inicio+maxLen; i++){
        cout<<*(p+i);
    }
    
    
}


int main(){
    
    char cadena[] = "abdcbcdbdcbbc";
    
    /* “bdcbcdb */
    char* p = cadena;
    
    maximoPalindromo(p,7);
    
    return 0;
}
