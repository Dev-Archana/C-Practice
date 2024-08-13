//Simple Calculator with switch statement 
#include <stdio.h>

int main()
{
    printf("Enter Any Two Values\n");
    int a, b;
    char c;
    
    // Read two integers
    scanf("%d%d", &a, &b);

    // Clear the input buffer before reading the character operator
    while ((getchar()) != '\n'); 

    printf("Enter Your Choice here (+, -, *, /)\n");
    scanf("%c", &c);

    // Switch statement for different operations
    switch (c)
    {
        case '+':
            printf("Sum of Given Numbers: %d\n", a + b);
            break;
        case '-':
            printf("Subtraction of Given Numbers: %d\n", a - b);
            break;
        case '*':
            printf("Multiplication of Given Numbers: %d\n", a * b);
            break;
        case '/':
            // Check for division by zero
            if (b != 0) {
                printf("Division of Given Numbers: %d\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

