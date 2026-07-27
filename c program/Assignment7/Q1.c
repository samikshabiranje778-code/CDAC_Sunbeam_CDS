#include<stdio.h>
#include<ctype.h>
int count_Occuranace(char str[],char ch)//FN DECLARATION
{
    int count=0;
    ch = tolower(ch);//convert upper case into lowercase  ch

    for( int i = 0; str[i] != '\0'; i++)
    {
        if(tolower(str[i])==ch)
        count++;
    }
    return count;
    
}

int main()
{
    char str[50];
    char ch;
    
    printf("enter the string:");
        scanf("%s",str);

    printf("enter the character for serching:");
    scanf(" %c",&ch);

    
    printf("count=  %d \n",
         count_Occuranace(str,ch));

return 0;
}
