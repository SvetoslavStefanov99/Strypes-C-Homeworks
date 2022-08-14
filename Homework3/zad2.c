#include<stdio.h>
#include<math.h>

int triangle(double a, double b, double c, double* S, double *P){
    if(a>0 && b>0 && c>0){
        *S=(sqrt(4*pow(a,2)*pow(b,2)-pow((pow(a,2)+pow(b,2)-pow(c,2)),2)))/4;
        *P=a+b+c;
        return 0;
    }
    else return -1;

}

int main(){
    double A,B,C;
    double area=0;
    double perimeter=0;
    while(scanf("%lf %lf %lf",&A ,&B ,&C)!=EOF){
        while (getchar() != '\n')
        continue;
        if(!triangle(A,B,C ,&area ,&perimeter)){
            printf("S= %0.2lf\n",area);
            printf("P= %0.2lf\n",perimeter);
        }
        else printf("Invalid triangle sides!\n");
    }
    return 0;
}