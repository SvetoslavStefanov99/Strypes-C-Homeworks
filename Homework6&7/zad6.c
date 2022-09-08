#include<stdio.h>

void Bubble(int* pArray,unsigned int uLen);
void swap(int* a, int* b);

int main(){
    int array[5] = {-23,5,28,15,3};
    Bubble(array,5);
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    putchar('\n');
    return 0;
}

void Bubble(int* pArray,unsigned int uLen){
    for(int i=0;i<uLen;i++){
        for(int j=0;j<uLen-1;j++){
        if(pArray[i] < pArray[j]){
            swap(&pArray[i],&pArray[j]);
        }
    }
    }
}

void swap(int* a, int* b){
    *a = *a^*b;
    *b = *b^*a;
    *a = *a^*b;
}