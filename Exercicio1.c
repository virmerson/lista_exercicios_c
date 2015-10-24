//
//  main.c
//  exercicio1
//
//  Created by Virmerson Bento dos Santos on 10/23/15.
//  Copyright (c) 2015 Virmerson Bento dos Santos. All rights reserved.
//

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
