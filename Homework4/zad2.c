#include<stdio.h>

unsigned sumArrayDigits(const int* arr, size_t n);

int main(){
    int arr[] = {12, 34, 5, 70};
    printf("%u\n",sumArrayDigits(arr,4));
    return 0;
}

unsigned sumArrayDigits(const int* arr, size_t n){
    int sum=0;
    int num=0;
    for(int i=0;i<n;i++){
        sum=sum+(arr[i]/10+arr[i]%10);
    }
    return sum;
}
