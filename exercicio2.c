//
//  exercicio2.c
//  exercicios
//
//  Created by Virmerson Bento dos Santos on 10/23/15.
//  Copyright (c) 2015 Virmerson Bento dos Santos. All rights reserved.
//

#include<stdio.h>

void imprime_alguma_coisa(int n)
{
    if (n != 0)
    {
        imprime_alguma_coisa(n/2);
        printf("%c", '0'+ n%2); //
    }
}




int main (){

    imprime_alguma_coisa(3);
    return 0;
}


