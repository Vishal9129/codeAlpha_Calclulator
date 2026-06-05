#include<stdio.h>
#include<math.h>
int main()
{
    int choice;
    float a, b, result;
    printf("=====Simple Calculator=====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Enter two numbers:");
            scanf("%f %f", &a, &b);
            result=a+b;
            printf("Result = %.2f",result);
            break;
            
            case 2:
            printf("Enter two numbers:");
            scanf("%f %f", &a, &b);
            result=a-b;
            printf("Result =%.2f",result);
            break;

            case 3:
            printf("Enter two numbers:");
            scanf("%f %f", &a, &b);
            result=a*b;
            printf("Result = %.2f",result);
            break;

            case 4: 
            printf("Enter two numbers:");
            scanf("%f %f", &a, &b);
            if(b !=0 ){
                result=a/b;
                printf("Result = %.2f",result);
            }
            else{
                printf("Error: Division by zero is not allowed.");

            }
            break;

            case 5:
            printf("Enter a number:");
            scanf("%f", &a);
            if(a >= 0){
                result = sqrt(a);
                printf("Result = %.2f", result);

            }else{
                printf("Error: Square root of a negative number is not defined. ");
            }
            break;
            default:
            printf("Invalid choice. Please select a valid option.");

                

            }

                
            
            
result=0;
    }
