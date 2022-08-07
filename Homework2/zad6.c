#include<stdio.h>
#include<math.h>

#define EPS 0.001

int compareBasic(float a,float b){
    return a==b;
}

int compareMyEPSSimple(float a,float b){
    if (((a - EPS) < b) && 
      ((a + EPS) > b))
   {
    return 1;
   }
  else
   {
    return 0;
   }
}

int compareMyEPS(float a,float b){
    return fabs(a-b)<EPS;
} 

int compareMyChangingEPS(float a,float b){
    return fabs(a-b)<EPS*fmax(a,b);
}
int compareBuiltInEPS(float a,float b){
    return fabs(a-b)<__FLT_EPSILON__;
} 

int compareChangingBuiltInEPS(float a,float b){
    return fabs(a-b)<__FLT_EPSILON__*fmax(a,b);
}

int main(){
    double number1=155.4;
    float number2=155.4f;
    printf("Double: %0.20lf\n",number1);
    printf("Float: %0.20f\n",number2);
    float number3=1.1f;
    float number4=0.0f;
    for(int i=0;i<11;i++){
        number4+=0.1f;
    }
    printf("number3: %0.20f\n",number3);
    printf("number4: %0.20f\n",number4);
    if(compareBasic(number3,number4)){
        printf("==: Equals!\n");
    }else printf("==: Not equals!\n");
    if(compareMyEPSSimple(number3,number4)){
        printf("My EPS Simple: Equals!\n");
    }else printf("My EPS Simple: Not equals!\n");
    if(compareMyEPS(number3,number4)){
        printf("My EPS: Equals!\n");
    }else printf("My EPS: Not equals!\n");
    if(compareMyChangingEPS(number3,number4)){
        printf("My EPS but changing: Equals!\n");
    }else printf("My EPS but changing: Not equals!\n");
    if(compareBuiltInEPS(number3,number4)){
        printf("Built in EPS: Equals!\n");
    }else printf("Built in EPS: Not equals!\n");
    if(compareChangingBuiltInEPS(number3,number4)){
        printf("Built in EPS but changing: Equals!\n");
    }else printf("Built it EPS but changing: Not equals!\n");
    return 0;
}
