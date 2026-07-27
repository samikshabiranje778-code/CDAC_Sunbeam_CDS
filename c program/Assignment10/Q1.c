 #include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digit = 0, special = 0;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else if(isdigit(ch))
            digit++;
        else
            special++;
    }

    printf("Uppercase Letters : %d\n", upper);
    printf("Lowercase Letters : %d\n", lower);
    printf("Digits            : %d\n", digit);
    printf("Special Characters: %d\n", special);

    fclose(fp);

    return 0;
}