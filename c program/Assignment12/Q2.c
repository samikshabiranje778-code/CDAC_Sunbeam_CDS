#include <stdio.h> ///Modify Insertion Sort Algorithm to Sort 
                     //  the Array in desending order

int main()
{
    int size, i, key;
    int j;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements :\n", size);
    for(i = 0; i < size; i++) //10 20  30  40   50
                            // [0] [1] [2] [3][4]
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 1; i < size; i++)
    {//i=1             //20 10 30 40 50               i=2
      
        key=arr[i];    //key=20           // key=30
        j=i-1;         //j= 1-1=0 //10    // j=1
                        
                          //arr[0]<20  //10<30=1
                         // 10<20

         while(j>=0 && arr[j] < key){ //j=1
         //arr[0+1]=arr[1]
         //arr[1] = 10     //shift next index // 10 10 30 40 50
         arr[j+1]=arr[j];                       //20 10 10 40 50 //10=key//
         j--;         //j=-1 loop stop beacuse j<0//j=0
    }
    arr[j+1]=key ; 
 } //arr[0]=key//20    //20 10 30 40 50 //j=1//30 20 10 40 50

     printf("Sorted array in descending order: \n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

