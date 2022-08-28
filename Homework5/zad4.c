#include<stdio.h>

double root(double);

int main(){
    double number;
    printf("Provide the number:");
    scanf("%lf", &number);
    printf("The square root of %0.4lf is:%0.4lf\n",number ,root(number));
    return 0;
}

double root(double num){
    double temp, sqrt;
    sqrt = num / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = (num/temp+temp)/2;
    }
    return sqrt;
}