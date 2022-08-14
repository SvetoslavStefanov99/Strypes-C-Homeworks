#include<stdio.h>
#include<stdint.h>

unsigned onesCount(uint64_t mask){
    int counter=0;
    for(int bit = 63;bit >= 0;bit--){
        printf("%d",!!(mask & (1ull<<bit)));
        if(!!(mask & (1ull<<bit))){
            counter++;
        }
        
    }
    putchar('\n');
    printf("Number of 1: %d\n",counter);
    
}

int main(){
    uint64_t Mask;
    printf("Mask: ");
    scanf("%lu",&Mask);
    onesCount(Mask);
    return 0;
}