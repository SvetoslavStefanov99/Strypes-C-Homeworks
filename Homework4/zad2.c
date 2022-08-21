#include<stdio.h>

unsigned sumArrayDigits(const int* arr, size_t n);

int main(){
    int arr[] = {12, 34, 5, 70,123};
    printf("%u\n",sumArrayDigits(arr,5));
    return 0;
}

unsigned sumArrayDigits(const int* arr, size_t n){
    unsigned sum=0;
    int ones=0;
    for(int i=0;i<n;i++){
        int number = arr[i];
        while (number != 0)
        {
            ones = number % 10;
            number /= 10;
            sum += ones;
        }
    }
    return sum;
}