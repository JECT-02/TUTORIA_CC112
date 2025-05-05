/*
Desarrolle un programa en C++ que solicite el ingreso por teclado de dos n�meros enteros. A
continuaci�n:
i. Declare los vectores A y B en los que se almacenar�n las cifras de cada n�mero.
ii. Declare el vector comun que almacenar� las cifras comunes de ambos n�meros.
iii. Declare apuntadores a los vectores A, B y comun
iv. Defina una funci�n entera numDigitos que reciba como par�metros un n�mero y un apuntador
v. a entero y utilice dicho apuntador para pasar cada cifra del n�mero a un array. La funci�n debe retornar
el total de cifras del n�mero.
vi. Utilice apuntadores para acceder a los dos array A y B y compararlos y pasar al array comun las cifras
comunes.
La salida es:
Ingrese el numero 1= 125354
Ingrese el numero 2= 346629
Cifras comunes: 2 3 4 
*/

#include <iostream> 
using namespace std;

int numDigitos(int num, int* arr){
    int contador = 0;
    while(num>0){
        *(arr+contador) = num%10;
        num = num/10;
        contador++;
    }
    
    return contador;
}

void print(int *p, int len){
    for(int i=0; i<len; i++){
        cout<<*(p+i)<<" ";
    }
}

int main() 

{ 

    int num1, num2;
    
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    
    int A[10], B[10], comun[10];
    int* pA = A;
    int* pB = B;
    int* pComun = comun;
    
    int countA = numDigitos(num1,A);
    int countB = numDigitos(num2,B);
    
    int min;
    if(countA < countB){
        min = countA;
    }else{
        min = countB;
    }
    
    int aux = 0;
    
    for(int i=0; i<countA; i++){
        for(int j=0; j<countB; j++){
            if(*(pA+i) == *(pB+j)){
                bool existe = false;
                for(int k=0; k<aux; k++){
                    if(*(pA+i) == *(pComun+k)){
                        existe = true;
                        break;
                    }
                }
                
                if(existe == false){
                    *(pComun+aux) = *(pA+i);
                    aux++;
                }
            }
        }
    }
    
    print(pComun,aux);
    
    
    
    

} 
