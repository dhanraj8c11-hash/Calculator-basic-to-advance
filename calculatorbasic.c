#include<stdio.h>
int main(void){
float a,b,result;
int choice;

    do{
        printf("\n---Calculate operation---\n");
        printf("Enter the first number:");
        scanf("%f", &a);
        printf("Enter the second number:");
        scanf("%f", &b);
        printf("\nCHOOSE AN OPPERATION:\n");
        printf("1-Addition (+)\n");
        printf("2-Subtraction (-)\n");
        printf("3-Multiplication (*)\n");
        printf("4-Division (/)\n");
        printf("choose an number form (1-4):");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                result=a+b;
                printf("sum: %f\n", result);
                break;
            case 2:
                result=a-b;
                printf("sub: %f\n", result);
                break;
            case 3:
                result=a*b;
                printf("mult: %f\n", result);
                break;
            case 4:
                if (b !=0){
                    result=a/b;
                printf("Divide: %f\n", result);
                }
                else{
                    printf("Error");
                }
                break;
            case 5:
                printf("Calculation close");
                break;

            default:
                printf("Invalid choice");
        }
    }while(choice !=5);

return 0;
}
