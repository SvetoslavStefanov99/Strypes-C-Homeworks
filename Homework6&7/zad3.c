#include<stdio.h>

void VMirror(unsigned char *pImage);

int main(){
    unsigned char array[]={0x7F,0x40,0x40,0x40,0x7F,0x00,0x00,0x00};
    VMirror(array);
    for(int i=0;i<8;i++){
        printf("0x%02x ",array[i]);
    }
    putchar('\n');
    return 0;
}

void VMirror(unsigned char *pImage){
for(int i=0;i<8;i++){
    pImage[i] = (pImage[i] & 0xF0) >> 4 | (pImage[i] & 0x0F) << 4;
    pImage[i]= (pImage[i] & 0xCC) >> 2 | (pImage[i] & 0x33) << 2;
    pImage[i] = (pImage[i] & 0xAA) >> 1 | (pImage[i] & 0x55) << 1;
    }
}