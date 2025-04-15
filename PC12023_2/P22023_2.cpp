#include <iostream>
using namespace std;

int minDias(int n){
    if(n == 0){return 0;}
    n = n-1;
    
    if(n%3 == 0){
        n = n/3;
        return 1 + minDias(n);
    }
    
    if(n%2 == 0){
        n = n/2;
        return 1 + minDias(n);
    }
    
    else{
        return 1 + minDias(n);
    }
}


int main()
{
    int n = 7;
    cout<<minDias(n)<<endl;
}
