//greatest amoung 3 number 
#include <stdio.h>

// Function to find the greatest among three numbers
int greatest(int a, int b, int c);

int main()
{
    int x, y, z;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    
    // Call the function to find the greatest number and print the result
    printf("The greatest number is: %d\n", greatest(x, y, z));
    
    return 0;
}

// Function to find the greatest among three numbers
int greatest(int a, int b, int c)
{
    // Compare a with b and c to find the greatest number
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

