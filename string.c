#include <stdio.h>
#include <string.h>
//gcc string.c
//./a.out

#define BOSE_NAME "CHRIS"

int main1(){
    printf("input your name:");
    char name[40];
    scanf("%s", name);
    int letters = strlen(name);
    int size = sizeof name;
    printf("hi, %s, letters:%d,size:%d,boss_name:%s", name, letters, size, BOSE_NAME);
    return 0;
}

