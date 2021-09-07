//
// Created by chris on 2021/6/13.
//
#include <stdio.h>

struct book {
    char title[40];
    int value;
};

int main1(){

    struct book c_primer = {"c_primer_plus", 40};

    printf("c_primer.title : %s", c_primer.title);
}

