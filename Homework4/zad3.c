#include<stdio.h>
#include<string.h>

int main(){
    char string1[50]="Hello world";
    char string2[50]="Strypes lab";
    char string3[50]="1234567";
    char string4[50]="C programming";
    printf("strlen: %lu\n", strlen(string1));
    printf("strnlen: %lu\n", strnlen(string1,5));
    printf("strnlen: %lu\n", strnlen(string1,2000));
    strcpy(string1,string3);
    printf("strcpy string1 and string3: %s\n",string1);
    strncpy(string1,string2,5);
    printf("strncpy string 1 and string2 after 4 index: %s\n",string1);
    strcat(string1,string4);
    printf("strcat string1 and string4: %s\n",string1);
    strcat(string3,"89");
    printf("strcat string3 and 89: %s\n",string3);
    strncat(string2,string4,15);
    printf("strncat string2 an string4 until 14 index: %s\n",string2);
    char string5[50]="aaabbb";
    char string6[50]="aaaccc";
    char string7[50]="aaa";
    char* point;
    point=strstr(string5,string7);
    printf("strcmp string5 and string6: %d\n",strcmp(string5,string6));
    printf("strncmp string5 and string6 first 3 indexes: %d\n",strncmp(string5,string6,3));
    printf("strstr string7 in string5: %s\n",point);
    return 0;
}