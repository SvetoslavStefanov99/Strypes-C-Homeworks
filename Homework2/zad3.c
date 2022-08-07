#include<stdio.h>
#include<math.h>


int main(){
    double number1;
    double number2;
    double number3;
    double max=0;
    scanf("%lf %lf %lf",&number1, &number2, &number3);
    max=fmax(fmax(number1,number2),number3);
    printf("Number:%0.2lf\n",max);
    return 0;
}
