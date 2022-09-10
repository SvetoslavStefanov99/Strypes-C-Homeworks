#include<stdio.h>
#include "zad1Funcs.h"

void printString(char* str){
    printf("%s\n",str);
}

signed lowercaseCounter(char* str){
    unsigned counter=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
        counter++;
        }
    }
    return counter;
}
