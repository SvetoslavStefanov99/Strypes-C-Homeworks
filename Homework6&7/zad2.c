#include<stdio.h>
#include<stdint.h>

void Reverse(char* ptr);
unsigned strLen(char* ptr);

int main(){
    char string[]="Strypes is very nice!";
    Reverse(string);
    printf("%s\n",string);
    return 0;

}

void Reverse(char* ptr){
    int temp=0;
    unsigned len=strLen(ptr);
    for(int i=0;i<len/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[len-i-1];
        ptr[len-i-1]=temp;
    }
}

unsigned strLen(char* ptr){
    unsigned length=0;
    for(int i=0; ptr[i]!='\0'; i++){
        length=i;
    }
    return length+1;
}
