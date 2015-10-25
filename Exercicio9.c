/*
 
 Podemos calcular a potência x ^ n de uma maneira mais eficiente. Observe primeiro
 que se n é uma potência de 2 então x ^ n pode ser computada usando seqüências de
 quadrados. Por exemplo, x ^ 4 é o quadrado de x ^ 2 e assim x ^ 4 pode ser computado
 usando somente duas multiplicações ao invés de três. Esta técnica pode ser usada
 mesmo quando n não é uma potência de 2, usando a seguinte fórmula:
 
 
 x ^ n = {
 
    1               , se n=0;
    x ^ n/2 ) ^ 2   , se n é par
    x * x ^ n-1     , se n ímpar
 
 }
 
 */

#include <stdio.h>


int potencia (int x, int n){

    if (n==0) return 1;
    
    if (n%2==0)
        return   potencia (x, n/2) * potencia (x, n/2) ;
    else
        return x * potencia (x , n-1);
    
}

int main (){
    
    
    int r = potencia(2, 4);
    printf("%d ", r );
    
}