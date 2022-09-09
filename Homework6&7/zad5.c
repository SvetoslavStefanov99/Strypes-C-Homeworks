#include<stdio.h>

#define MAX_SIZE 5

int IsEmpty();
int IsFull();
void Push(int nNewValue);
int Pop();

int arr[MAX_SIZE];
int top = 0;
int bottom = 0;
unsigned size=0;

int main(){
    int num=0;
    while (IsFull())
    {
        printf("Enter a number:");
        scanf("%d", &num);
        Push(num);
    }
    while (IsEmpty())
    {
        printf("Numbers:%d\n",Pop());
    }
    return 0;
}

int IsEmpty(){
    if (size == 0)
    {
        return 0;
    }
    else return 1;
}

int IsFull(){
    if (size == MAX_SIZE){
        return 0;
    }
    else return 1;
}

void Push(int nNewValue){
    arr[top] = nNewValue;
    size++;
    top++;
}

int Pop(){
    size--;
    return arr[bottom++];
}