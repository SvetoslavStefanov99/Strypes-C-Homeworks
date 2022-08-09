#include<stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;
    printf("Enter three binary numbers:\n");
    scanf("%d %d %d",&number1, &number2, &number3);
    if((number1>=0&&number2>=0&&number3>=0)&&(number1<=1&&number2<=1&&number3<=1)){
        //printf("XOR with 3 numbers:%d\n",number1 ^ number2 ^ number3); old formula
        printf("XOR with 3 numbers:%d\n",((!number1 && !number2) && number3) || ((!number1 && number2) && !number3) || ((number1 && !number2) && !number3) || ((number1 && number2) && number3));
    }else printf("Enter only binary numbers!\n");
    return 0;
}
