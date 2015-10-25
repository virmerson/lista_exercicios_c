/**
 
 O piso de um número inteiro positivo x é o único inteiro i tal que i <= x <
 i + 1. O piso de x é denotado por [x] (piso) .
 Segue uma amostra de valores da função [ log2 n]:
 
 */

#include <stdio.h>


int piso_log2(int n){
    
    int base =2;
    if(n/base > 1){
        
        return 1+ piso_log2(n/base);
    }
    
    return 1;
    
    
}

int main (){
    int l =  piso_log2 (256);
    printf("%d ", l);

    
}