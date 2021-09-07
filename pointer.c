//
// Created by chris on 2021/6/13.
//
#include <stdio.h>
void inter_change(int * x, int * y);

int main1(){
    int x = 10;
    int y = 20;
    printf("x = %d, y = %d\n", x, y);
    inter_change(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}

void inter_change(int * x, int * y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}