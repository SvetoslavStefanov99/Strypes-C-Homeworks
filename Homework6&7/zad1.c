#include<stdio.h>
#include<stdint.h>

#define CHECKBIT(mask, bit) !! (mask & (1ull << (bit)))

unsigned char CheckBit(unsigned int uValue);

int main(){
    uint16_t number=0x0600;
    printf("0x%02x\n",CheckBit(number));
    return 0;
}

unsigned char CheckBit(unsigned int uValue){
    unsigned char counter=0;
    for(int bit=15; bit>=0; bit--){
        if(CHECKBIT(uValue,bit)){
            counter++;
        }
    }
    if(counter == 1){
        return 1;
    }
    return 0;
}
