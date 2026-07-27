#include<stdio.h>
int main()
{
    char str[50];
    int i,j,count;
    int found;
    printf("Enter  the String:");
    scanf("%s",str);
    for( int i = 0; str[i] !=0 ; i++)
    {
        /* code */
        count=0;
    
     for( int j= 0; str[j] !=0 ; j++)
     {
        if(str[i] == str[j])
        count++;
     }

     
        if(count==1)
      { printf("first non reapeting element found:: %c \n ",str[i]);

         found = 1;
         break;

      
        }
    }
    
        if(found==0)
        printf("-1\n");
        return 0;
    }

     
    
