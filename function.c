//
// Created by chris on 2021/6/13.
//
#include <stdio.h>

void print(int num);

int main1(){
    printf("function demo");
    print(88);
}

void print(int num){
    printf("print function,input:%d", num);
}