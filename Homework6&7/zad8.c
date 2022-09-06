#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Add(const char* p1, const char* p2, char* result);

int main(){
    char sum[50];
    Add("500","1000",sum);
    printf("%s\n",sum);
    return 0;
}

void Add(const char* p1, const char* p2, char* result){
    if(atoi(p1)<0 || atoi(p2)<0){
        strcpy(result,"Only positive numbers!");
    }
    else{
        unsigned n=atoi(p1)+atoi(p2);
        sprintf(result,"%u",n);
    }
}