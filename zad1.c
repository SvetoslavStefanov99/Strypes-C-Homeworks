#include <stdio.h>
#include<math.h>

int main(){
    double height=0;
    int mass=0;
    printf("Enter the height in meters:");
    scanf("%lf",&height);
    printf("Enter the mass:");
    scanf("%d",&mass);
    double BMI=mass/(pow(height,2));
    double newBMI=1.3*(mass/(pow(height,2.5)));
    printf("The BMI is:%0.3lf\n",BMI);
    printf("The new BMI is:%0.3lf\n",newBMI);
    return 0;
}