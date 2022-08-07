#include<stdio.h>

#define PI 3.141592654

int main(){
    double R;
    double H; 
    printf("Enter the radius:");
    scanf("%lf",&R);
    printf("Enter the height:");
    scanf("%lf",&H);
    printf("Volume of the water inside is:%0.4lf\n",PI*R*R*H);
    return 0;
}
