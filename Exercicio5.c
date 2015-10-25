/**
 
 5)
 (a) Escreva uma função recursiva com a seguinte interface:
 int soma_digitos(int n)
 que receba um número inteiro positivo n e devolva a soma de seus
 dígitos.
 
 (b) Escreva um programa que receba um número inteiro n e imprima a
 soma de seus dígitos. Use a função do item (a).
 
 **/
#include <stdio.h>



int soma_digitos(int n){
   
    if(n>0){
        int resto = n%10;
        return resto + soma_digitos(n/10);
    }else {
        return 0;
    }

}

int main(){
    
    int n;
    printf("Digite um Número Inteiro:");
    scanf("%d", &n );
    int s = soma_digitos (n);
    
    printf("%d ", s);
    
    return 0;
}