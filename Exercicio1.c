/**
 A n-ésima potência de um número x, denotada por xn, pode ser computada
 recursivamente observando a seguinte a fórmula:
 xn =
 
 1 ; se n = 0 ;
 x  xn􀀀1 ; se n > 1 :
 Considere neste exercício que x e n são números inteiros.
 (a) Escreva uma função não-recursiva com a seguinte interface:
 int pot(int x, int n)
 que receba dois números inteiros x e n e calcule e devolva xn.
 (b) Escreva uma função recursiva com a seguinte interface:
 int potR(int x, int n)
 que receba dois números inteiros x e n e calcule e devolva xn.
 (c) Escreva um programa que receba dois números inteiros x e n, com
 n  0, e devolva xn. Use as funções em (a) e (b) para mostrar os dois
 resultados.
 
 */
#include <stdio.h>


int pot(int x, int n){
    
    int r =1;
    for (int i =0 ; i< n; i++){
        r = r * x;
    }
    return r;
}

int potR(int x, int n){
    
    if (n==0)return 1;
    else
        return x *  potR (x , n-1);
    
}

int main(int argc, const char * argv[]) {
    int x, y;
    printf("x:");
    scanf("%d", &x );
    printf("y:");
    scanf("%d",&y);
    printf("POT de %d ˆ %d é %d \n" , x, y,   potR(x, y) );
    return 0;
}
