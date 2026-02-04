#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
        printf("********BASIC CALCULATOR********\n");
        printf("1. for Addition\n");
        printf("2. for Subtraction\n");
        printf("3. for Multiplication\n");
        printf("4. for Division\n");
        printf("5. for Exit\n");
        printf("Enter a choice for selected operations: \n");
        char c ;
        c = getch();
            if (c == '1'){
                int a,b,sum;
                printf("Enter first number ");
                scanf("%d",&a);
                printf("\n");
                printf("Enter second number ");
                scanf("%d",&b);
                printf("\n");
                sum = a+b;
                printf("The sum of two number is %d", sum);

            }
            if (c == '2'){
                int a,b,sub;
                printf("Enter first number");
                scanf("%d",&a);
                printf("\n");
                printf("Enter second number");
                scanf("%d",&b);
                printf("\n");
                sub = a-b;
                printf("The subtraction of two number is %d",sub);

            }
            if (c == '3'){
                int a,b,mul;
                printf("Enter first number");
                scanf("%d",&a);
                printf("\n");
                printf("Enter second number");
                scanf("%d",&b);
                printf("\n");
                mul = a*b;
                printf("The multiplication of two number is %d", mul);

            }
            if (c == '4'){
                float a,b,div;
                printf("Enter first number");
                scanf("%f",&a);
                printf("\n");
                printf("Enter second number");
                scanf("%f",&b);
                printf("\n");
                div = a/b;
                printf("The division of two number is %f", div);

            }
            if (c == '5'){
                exit(0);
            }
}
