//without using 3rd in pointer
#include<stdio.h>

int main() {
    int n1 = 10, n2 = 20;
    int *n3 = &n1;
    int *n4 = &n2;
    
    printf("Before swapping: %d\t%d\n", n1, n2);
    
    // Swap the values without using a third variable
    *n3 = *n3 + *n4; // n1 = n1 + n2
    *n4 = *n3 - *n4; // n2 = n1 - n2 (now n2 is original n1)
    *n3 = *n3 - *n4; // n1 = n1 - n2 (now n1 is original n2)
    
    printf("After swapping: %d\t%d\n", n1, n2);
    
    return 0;
}

