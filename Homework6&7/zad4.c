#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void Conv(int sValue, char *pBuffer);

int main(){
    int16_t number1=-55;
    int16_t number2=15500;
    char string[7];
    Conv(number1,string);
    printf("%s\n",string);
    Conv(number2,string);
    printf("%s\n",string);
    return 0;
}

void Conv(int sValue, char *pBuffer){
    if(sValue<0){
        sprintf(pBuffer,"-%5d",abs(sValue));
    }
    else sprintf(pBuffer," %5d",sValue);
    
}