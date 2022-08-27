#include<stdio.h>
#include<stdint.h>

#define MAX(x, y, z) (x>y && x>z) ? x : (y>z) ? y : z
#define MIN(x, y, z) (x<y && x<z) ? x : (y<z) ? y : z
#define SETBIT(mask, bit) (mask |= (1ull << (bit)))
#define CLEARBIT(mask, bit) (mask &= ~(1ull << (bit)))
#define INVERSEBIT(mask, bit) (mask ^= (1ull << (bit)))
#define CHECKBIT(mask, bit) !!(mask & (1ull << (bit)))
#define SWAP(a,b) (a) =(a) ^ (b); (b)=(b) ^ (a); (a)=(a) ^ (b)

int main(){
    double max,min;
    max=MAX(2,5+2,6);
    min=MIN(2-1.5,3.5,1.9);
    printf("max:%0.2lf\n",max);
    printf("min:%0.2lf\n",min);
    uint32_t number=0;
    for(int bit = 32;bit >= 0;bit--){
        printf("%d",CHECKBIT(number,bit));
        }
    putchar('\n');
    SETBIT(number,3);
    for(int bit = 32;bit >= 0;bit--){
        printf("%d",CHECKBIT(number,bit));
        }
    putchar('\n');
    CLEARBIT(number,3);
    for(int bit = 32;bit >= 0;bit--){
        printf("%d",CHECKBIT(number,bit));
        }
    putchar('\n');
    INVERSEBIT(number,2);
    for(int bit = 32;bit >= 0;bit--){
        printf("%d",CHECKBIT(number,bit));
        }
    putchar('\n');
    if(!CHECKBIT(number,2)){
        printf("Third bit is:0\n");
    }else printf("Third bit is:1\n");
    int a=5,b=6;
    printf("Before swap: a:%d,b:%d\n",a,b);
    SWAP(a,b);
    printf("After swap: a:%d,b:%d\n",a,b);
    return 0;

}