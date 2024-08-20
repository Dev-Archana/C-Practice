/*
Given an 0-indexed array of integers arr[] of size n, find its peak element and return it's index. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

Examples :

Input: n = 3, arr[] = {1, 2, 3} 
Output: 1
Explanation: If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property, so answer will be printed as 0.
Input: n = 7, arr[] = {1, 1, 1, 2, 1, 1, 1}
Output: 1
Explanation: In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.
Your Task:
You don't have to read input or print anything. Complete the function peakElement() which takes the array arr[] and its size n as input parameters and returns the index of the peak element.

Expected Time Complexity: O( log(n) ).
Expected Auxiliary Space: O(1)

Constraints:
1 = n = 105
1 = arr[i] = 106
*/
#include<stdio.h>

int peakElement(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start <= end) {
        int mid = start + (end) / 2;// in some of the situation we can use the mid calculation as a formula of mid=start+(end-start);
        
        // Check if mid is a peak element
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return mid;
        }
        // If the left neighbor is greater, move to the left half
        else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            end = mid - 1;
        }
        // Otherwise, move to the right half
        else {
            start = mid + 1;
        }
    }
    
    return -1; // In case no peak element is found, though this shouldn't happen
}

int main() {
    int n, i;
    printf("Enter Array size\n");
    scanf("%d", &n);
    
    printf("Enter Array Elements\n");
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peak_index = peakElement(arr, n);
    printf("The peak element is at index: %d\n", peak_index);
    
    return 0;
}

