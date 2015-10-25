/*
 
 A seqüência de Fibonacci é uma seqüência de números inteiros positivos
 dada pela seguinte fórmula:
  
 {
    F1 = 1 ;
    F2 = 1 ;
    Fi = Fi - 1 + Fi - 2 ; para i >= 3:
 }
 
 (a) Escreva uma função recursiva com a seguinte interface:
 int Fib(int $i$)
 que receba um número inteiro positivo i e devolva o i-ésimo termo da
 seqüência de Fibonacci, isto é, Fi.
 
 */
#include <stdio.h>

int fib(int i){

    if(i==1) return 1;
    if (i==2) return 1;
    return fib(i -1 ) + fib (i-2);
    
}

int main(){

    int r =  fib (7);
    printf("%d ", r);
    return 0;
}