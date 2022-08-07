#include<stdio.h>

int main()
{
    int number1;
    int number2;
    printf("Enter two binary numbers:\n");
    scanf("%d %d",&number1, &number2);
    if((number1>=0&&number2>=0)&&(number1<=1&&number2<=1)){
        printf("XOR with 2 numbers:%d\n",number1 ^ number2);
    }else printf("Enter only binary numbers!\n");
    return 0;
}
    
    
