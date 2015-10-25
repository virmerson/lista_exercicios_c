/**
 
 Considere o seguinte processo para gerar uma seqüência de números. Comece
 com um inteiro n. Se n é par, divida por 2. Se n é ímpar, multiplique por 3
 e some 1. Repita esse processo com o novo valor de n, terminando quando
 n = 1. Por exemplo, a seqüência de números a seguir é gerada para n = 22:
 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
 É conjecturado que esse processo termina com n = 1 para todo inteiro
 n > 0. Para uma entrada n, o comprimento do ciclo de n é o número
 de elementos gerados na seqüência. No exemplo acima, o comprimento do
 ciclo de 22 é 16.
 
 (a) Escreva uma função não-recursiva com a seguinte interface:
 int ciclo(int n)
 que receba um número inteiro positivo n, mostre a seqüência gerada
 pelo processo descrito acima na saída e devolva o comprimento do ciclo
 de n.
 
 (b) Escreva uma versão recursiva da função do item (a) com a seguinte
 
 interface:
 int cicloR(int n)
 
 que receba um número inteiro positivo n, mostre a seqüência gerada
 pelo processo descrito acima na saída e devolva o comprimento do ciclo
 de n
 
 (c)Escreva um programa que receba um número inteiro n  1 e determine
 a seqüência gerada por esse processo e também o comprimento do ciclo
 de n. Use as funções em (a) e (b) para testar.
 */

#include <stdio.h>


void ciclo (int n){

    
    while (n>1){
        printf( "%d ", n);
        if (n%2==0){
            n= n/2;
        }else {
            n= (n*3) +1;
        }
    }
    printf("%d" , n);
    
}

int cicloR (int n){
    printf ("%d " , n);
    if (n>1){
        
        if (n%2==0)
            return cicloR(n/2);
        else
            return cicloR(n*3+1);
    }
    return 0;

}
int main(){
    
    int n;
    printf("Digite um Número Inteiro:");
    scanf("%d", &n );

    cicloR(n);
}