#include <stdio.h>

int main()
{
    float a, b, result;
    int choice;

    printf("===== CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(b != 0)
            {
                result = a / b;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Division by zero is not possible!");
            }
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}