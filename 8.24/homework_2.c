//
// Created by bjleh on 2017-08-24.
//

#include <stdio.h>

int main(){

    int dan;
    scanf("%d", &dan);
    for (int i=1; i<10; i++){
        printf("%dx%d=%d\n", dan, i, dan*i);
    }

    return 0;
}