// Search an element in the array using binary search.

#include <stdio.h>
#include <stdlib.h>

// int bs(int a[], int value, int low, int high)
// {
//     while(low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if(a[mid] == value)
//         {
//             return mid;
//         }
//         if(a[mid] < value)
//         {
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }


int bs(int a[], int left, int right, int value){
    while(left <= right){
        int mid = left + (right - left) / 2;
    
        if(a[mid] == value) return mid;
        
        if(a[mid] < value) left = mid + 1; 
        else right = mid - 1;
    }
    return -1;
}

void main()
{
    int a[100], value, N, result, i;
    // clrscr();
    printf("Enter the size of array:\n");
    scanf("%d", &N);

    printf("Enter the element of array:\n");
    for(i=0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search:\n");
    scanf("%d", &value);

    result = bs(a, value, 0, N-1);

    result == -1 ? printf("Element not found") : printf("Element is found at index %d", result);
    getch();
}