#include<stdio.h>
#include<math.h>

int quadEq(double a, double b, double c, double* x1, double* x2){
    double discriminant=pow(b,2)-4*a*c;
    if(discriminant>=0){
        *x1=(-b+sqrt(discriminant))/2*a;
        *x2=(-b-sqrt(discriminant))/2*a;
        return 0;
    }
    else return -1;

}

int main(){
    double A,B,C;
    double X1=0;
    double X2=0;
    scanf("%lf %lf %lf",&A ,&B ,&C);
    if(!quadEq(A,B,C ,&X1 ,&X2)){
        printf("x1= %0.2lf\n",X1);
        printf("x2= %0.2lf\n",X2);
    }
    else printf("No real roots!\n");
    return 0;
}