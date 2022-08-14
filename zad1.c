#include<stdio.h>
#include<ctype.h>

int main(){
    double number1;
    double number2;
    char operation;
    while(scanf("%lf %c %lf",&number1, &operation, &number2)!=EOF){
       switch (operation)
        {
        case '+':
            printf("%0.2lf\n",number1+number2);
            break;

        case '-':
            printf("%0.2lf\n",number1-number2);
            break;

        case '*':
            printf("%0.2lf\n",number1*number2);
            break;

        case '/':
            printf("%0.2lf\n",number1/number2);
            break;
        
        default:
            fprintf(stderr,"Wrong operation!\n");
            break;
        } 
        while (getchar() != '\n')
        continue;
        }
    
    return 0;
}