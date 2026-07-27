#include <stdio.h>  //binery serch


int recursiveBinarySearch(int arr[], int low, int high, int key) {
    
    if (low > high) {
        return -1;
    }

    
    int mid = low + (high - low) / 2;

   
    if (arr[mid] == key) {
        return mid;
    }

   
    if (key < arr[mid]) {
        return recursiveBinarySearch(arr, low, mid - 1, key);
    }

  
    return recursiveBinarySearch(arr, mid + 1, high, key);
}

int main() {
    int n,i, key;


    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

   
    int result = recursiveBinarySearch(arr, 0, n - 1, key);

                                                                                      
    if (result != -1) {
        printf("Element found at index position: %d\n", result+1);
    } else {
        printf("Element Not Found\n");
    }

    return 0;
}
