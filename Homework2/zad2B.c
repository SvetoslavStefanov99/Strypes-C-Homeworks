#include<stdio.h>
#include<math.h>


int main(){
    double R;
    double H; 
    double L;
    double Volume;
    printf("Enter the radius:");
    scanf("%lf",&R);
    printf("Enter the height:");
    scanf("%lf",&H);
    printf("Enter the length:");
    scanf("%lf",&L);
    Volume=L*(R*R*acos((R-H)/R)-(R-H)*sqrt((2*R*H-H*H)));
    printf("Volume of the water inside is:%0.3lf\n",Volume);
    return 0;
}
