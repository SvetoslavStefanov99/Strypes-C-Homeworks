#include<stdio.h>

#define PI 3.1415
#define TERMS 7

double sine(int);
double power(double, int);
int fact(int); 

int main(){
    double degrees;
    printf("Provide the degrees:");
    scanf("%lf", &degrees);
    printf("The sin of %0.2lf degrees is:%0.2lf\n", degrees,sine(degrees));
    return 0;
}

double sine(int deg) {
    deg %= 360; 
    double rad = deg * PI / 180;
    double sin = 0;

    int i;
    for(i = 0; i < TERMS; i++) {
        sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
    }
    return sin;
}

double power(double base, int exp) {
    if(exp < 0) {
        if(base == 0)
            return -0; 
        return 1 / (base * power(base, (-exp) - 1));
    }
    if(exp == 0)
        return 1;
    if(exp == 1)
        return base;
    return base * power(base, exp - 1);
}

int fact(int n) {
    return n <= 0 ? 1 : n * fact(n-1);
}