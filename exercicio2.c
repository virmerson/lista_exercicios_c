

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


