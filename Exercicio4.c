
/*
 
 (a) Escreva uma função recursiva com a seguinte interface:
 float soma(int n, float v[MAX])
 que receba um número inteiro n > 0 e um vetor v de números com
 ponto flutuante com n elementos, e calcule e devolva a soma desses
 números.
 (b) Usando a função do item anterior, escreva um programa que receba um
 número inteiro n, com n  1, e mais n números reais e calcule a soma
 desses números.
 
 */

#include <stdio.h>
#define MAX 200

float soma(int n, float V[MAX]){
    
    if (n>=0){
        return V[n] + soma(n-1, V);
    }
    
    return 0;
}

int main (){
    int n, i;
    float val;
    float V[MAX];
    scanf("%d",&n);
    
    for (i=0; i<n; i++){
        scanf("%f",&val);
        V[i] =val;
    }
    
    float s = soma(n-1, V);
    
    printf("%.1f ", s);
}

