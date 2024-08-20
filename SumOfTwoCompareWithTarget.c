#include <stdio.h>
#include <stdlib.h>

int* findingSum(int a[], int n, int target) 
{
    // Dynamically allocate memory for the result array
    int* res = (int*)malloc(2 * sizeof(int));
    int i, j;
    
    // Iterate through the array to find the two elements that sum up to the target
    for(i = 0; i < n - 1; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            if(a[i] + a[j] == target) 
            {
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    
    // If no such pair is found, return NULL
    free(res);  // Free allocated memory if not used
    return NULL;
}

int main() 
{
    int a[] = {12, 2, 1, 5, 7, 9};
    int* res = findingSum(a, 6, 9);
    
    // Check if a valid pair is found
    if (res != NULL) 
    {
    	int i;
        for( i = 0; i < 2; i++) 
        {
            printf("%d\n", res[i]);
        }
        free(res);  // Don't forget to free the allocated memory after use
    } 
    else 
    {
        printf("No pair found\n");
    }
    
    return 0;
}

