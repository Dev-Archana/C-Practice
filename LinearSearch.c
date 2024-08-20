#include <stdio.h>
#include <stdbool.h>

// Function to perform linear search
bool findKeyValue(int a[], int size, int key) {
	int i;
    for ( i = 0; i < size; i++) {
        if (a[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    
    printf("Enter Array Size\n");
    scanf("%d", &n);

    int array[n],i; 
    printf("Enter Array Elements\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int key;
    printf("Enter Key Element To Find\n");
    scanf("%d", &key);

    // Call the findKeyValue function with the size of the array
    bool res = findKeyValue(array, n, key);

    if (res) {
        printf("Key Element is found\n");
    } else {
        printf("Key Not Found\n");
    }

    return 0;
}

