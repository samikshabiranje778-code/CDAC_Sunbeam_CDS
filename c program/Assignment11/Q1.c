#include <stdio.h> ///binery serch in desending order

int main()
{
    int size, i, key;
    int low, high, mid;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in descending order:\n", size);
    for(i = 0; i < size; i++) 
    //[0] [1] [2] [3] [4]
    //  50  40  30  20  10
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);  //30

    low = 0;
    high = size - 1;//5-1=4
          
          //0<=4
    while(low <= high)
    {
        mid = (low + high) / 2;//0+4/2=2  //30

        if(arr[mid] == key)//arr[2]==30//30=30
        {
            printf("Position = %d\n", mid + 1);// index=0 but position=1
            return 0;                //2+1=3
        }
                // 40>arr[2]
        else if(key > arr[mid])  //key=40
        {
            // Search left half (descending order)
            high = mid - 1;
        }
        else
        {   // arr[2]>20 //30>20
            // Search right half
            low = mid + 1;
        }
    }

    printf("Element Not Found\n");

    return 0;
}