#include<stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue);

int main(){
    unsigned array[6]={3,5,7,10,15,20};
    unsigned index=BinSearch(array,6,3);
    if(index != 0xFFFF){ 
        printf("The number is in index: %d\n", index);
    }
    else printf("The number wasn't found!\n");
    return 0;
}

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue){
    unsigned start = 0;
    unsigned end = uArraySize-1;
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

