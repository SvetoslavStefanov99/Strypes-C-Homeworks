#include<stdio.h>
#include<limits.h>

int secondMax(const int* arr, size_t n, int* secondMax);
int areEqual(const int* arr, size_t n);

int main(){
    int sm;
    int arr[] = {2, 34, 5, 70, 46 };
    if(secondMax(arr,5,&sm)) printf("%d\n",sm);
    return 0;
}

int secondMax(const int* arr, size_t n, int* secondMax){
    *secondMax=INT_MIN;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
            if(arr[i]>max){
                *secondMax=max;
                max=arr[i];
            }
            else if(arr[i]>*secondMax && arr[i]<max){
                *secondMax=arr[i];
            }
        }
    if(*secondMax==INT_MIN){
        if(n==0){
            printf("The array is empty!\n");
            return 0;
        }
        else if(n==1){
            printf("The array has one number!\n");
            return 0;
        }
        else if(areEqual(arr,n)){
            printf("The array is made of equal numbers!\n");
            return 0;
        }
    }
    return *secondMax;
}

int areEqual(const int* arr, size_t n){
    for(int i=0;i<n;i++){
        if (arr[i] != arr[0]) {
            return 0;
        }
    }
    return 1;
}