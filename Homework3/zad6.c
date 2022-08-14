#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint64_t attendance = 0;
    int option;
    int number;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {
             printf("Which student's attendance do you want to set?(1-64): ");
             scanf("%d",&number);
             if(number>=0&&number<=64){
                attendance|=1ull<<(number-1);
             }else printf("Invalid student number!\n\n");
        }
        else if (option == 2)
        {
            printf("Which student's attendance do you want to set?(1-64): ");
             scanf("%d",&number);
             if(number>=0&&number<=64){
                attendance&=~(1ull<<(number-1));
             }else printf("Invalid student number!\n");
        }
        else if (option == 3)
        {
            printf("Numbers of students that are here:"); 
            for(int bit = 63;bit >= 0;bit--){
                if(!!(attendance & (1ull<<bit))){
                printf("%d,",bit+1);
                }
            }
            putchar('\n');
            printf("Numbers of students that aren't here:"); 
            for(int bit = 63;bit >= 0;bit--){
                if(!!!(attendance & (1ull<<bit))){
                printf("%d,",bit+1);
                }
            }
            putchar('\n');
            printf("Mask:");
            for(int bit = 63;bit >= 0;bit--){
            printf("%d",!!(attendance & (1ull<<bit)));
            }
            putchar('\n');
        }
        else if (option == 4)
        {
            printf("Which student's attendance do you want to flip?(1-64): ");
             scanf("%d",&number);
             if(number>=0&&number<=64){
                attendance^=1ull<<(number-1);
             }else printf("Invalid student number!\n");
        }
        else if(option == 5){
            break;
        }else printf("Invalid option!\n");
    }
    return 0;
}
