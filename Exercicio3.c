/**
 
 Escreva uma função recursiva que receba dois números inteiros positivos
 e devolva o máximo divisor comum entre eles usando o algoritmo
 de Euclides.
    (b) Escreva um programa que receba dois números inteiros e calcule o
 máximo divisor comum entre eles. Use a função do item (a).

 */
#include <stdio.h>

int mdc(int a, int b){
    
    //Maximo divisor comun de qualquer numero com 1 sempre será 1
    if(b==0)
        return a;
    
    return mdc( b, a%b);
}

int main (){
    int a, b;
    printf("a:");
    scanf("%d", &a );
    printf("b:");
    scanf("%d",&b);
    int r = mdc(a, b);
    printf("%d " , r);
    return 0;
}