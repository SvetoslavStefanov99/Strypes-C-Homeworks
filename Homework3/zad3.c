#include<stdio.h>
#include<math.h>

int rectangle(double w, double h, double* S, double *P){
    if(w>0 && h>0){
        *S=w*h;
        *P=2*(w+h);
        return 0;
    }
    else return -1;

}

int main(){
    double W,H;
    double area=0;
    double perimeter=0;
    while(scanf("%lf %lf",&W ,&H)!=EOF){
        while (getchar() != '\n')
        continue;
        if(!rectangle(W,H ,&area ,&perimeter)){
            printf("S= %0.2lf\n",area);
            printf("P= %0.2lf\n",perimeter);
        }
        else printf("Invalid rectangle sides!\n");
    }
    return 0;
}