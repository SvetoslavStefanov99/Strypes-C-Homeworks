#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>
#include "zad1Funcs.h"

unsigned mostFrequent(char* str);

int main(){
    unsigned n,m,k;
    srand(time(NULL)); 
    printf("Enter size of the first array:");
    scanf("%u",&n);
    char* array=malloc(n * sizeof(char));
    if(NULL==array){
        fprintf(stderr,"Error!");
        return EXIT_FAILURE;
    }
    for(int i=0;i<n;i++){
        array[i]="abcdefghijklmnopqrstuvwxyz"[random () % 26];
    }
    printf("Enter size of the second array:");
    scanf("%u",&m);
    array=realloc(array,(n+m) * sizeof(char));
    if(NULL==array){
        fprintf(stderr,"Error!");
        return EXIT_FAILURE;
    }
    for(int i=n;i<n+m;i++){
        array[i]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26];
    }
    printf("Enter size of the third array:");
    scanf("%u",&k);
    array=realloc(array,(n+m+k) * sizeof(char));
    if(NULL==array){
        fprintf(stderr,"Error!");
        return EXIT_FAILURE;
    }
    for(int i=n+m;i<n+m+k;i++){
        array[i]="!?$@*%%-"[random () % 8];
    }
    array=realloc(array,sizeof(char));{
        array[n+m+k+1]='\0';
    }
    /*for(int i=0;i<n+m+k;i++){
        printf("%c",array[i]);
    }*/
    putchar('\n');
    printString(array);
    printf("Number of lowercase letters:%u\n",lowercaseCounter(array));
    if(mostFrequent){
        printf("Number of times in the string:%u\n",mostFrequent(array));
    }else printf("Even number of letters!\n");
    free(array);
    return EXIT_SUCCESS;
}

unsigned mostFrequent(char* str){
    unsigned counter=0;
    unsigned max=0;
    char letter;
    for(int i=0; i<strlen(str); i++){
        for(int j=0;j<strlen(str)-1;j++){
            //int character=str[i-1];
            if(str[i]==str[j]){
                counter++;
                if(max<counter){
                max=counter;
                letter=str[j];
            }
            }else counter=0;
            
            }   
    }
    if(max==0){
        return 0;
    }
    
    else {
        printf("Most frequent letter:%c\n",letter);
        return max;
}
}