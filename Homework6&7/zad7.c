#include<stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue);
void Bubble(int* pArray,unsigned int uLen);
void swap(int* a, int* b);


int main(){
    unsigned array[6]={13,5,22,140,9,15};
    unsigned index=BinSearch(array,6,13);
    for(int i=0;i<6;i++){
        printf("%d ",array[i]);
    }
    putchar('\n');
    if(index != 0xFFFF){ 
        printf("The number is in index: %d\n", index);
    }
    else printf("The number wasn't found!\n");
    return 0;
}

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue){
    unsigned start = 0;
    unsigned end = uArraySize-1;
    Bubble(pArray,uArraySize);
    while(start <= end){
        unsigned mid = start + ((end-start) /2);
        if (pArray[mid] == uValue) {
            return mid;
        }
        if (pArray[mid] < uValue) {
            start = mid + 1;
        }
        else end = mid - 1;
    }
return 0xFFFF;
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