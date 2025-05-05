/*
Dada una cadena, encuentre la subcadena contigua de longitud m�xima que tambi�n sea un
pal�ndromo. Por ejemplo, la subcadena palindr�mica m�s larga de �bananas� es �anana�, y la subcadena
palindr�mica m�s larga de �abdcbcdbdcbbc� es �bdcbcdb�.
No se garantiza que la subcadena palindr�mica m�s larga sea �nica. Si existen varias subcadenas
palindr�micas m�s largas, la soluci�n debe devolver la que aparece primero en la cadena.
Entrada:
"abracadabra"
Salida: "aca"
Explicaci�n: No hay ninguna subcadena palindr�mica en una cadena "abracadabra" con una longitud mayor
que 3. Hay dos subcadenas palindr�micas con una longitud de 3, a saber, "aca" y "ada".
La soluci�n devuelve "aca" tal como aparece antes de "ada" en la cadena.*/

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
    
    /* �bdcbcdb */
    char* p = cadena;
    
    maximoPalindromo(p,7);
    
    return 0;
}
