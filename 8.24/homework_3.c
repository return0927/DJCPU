//
// Created by bjleh on 2017-08-24.
//

#include <stdio.h>

int main(){

    int input;
    printf(" 짝/홀수 구분할 숫자: ");
    scanf("%d", &input);
    if(input%2==0) {
        printf("\n짝");
    } else {
        printf("\n홀");
    }

    return 0;
}