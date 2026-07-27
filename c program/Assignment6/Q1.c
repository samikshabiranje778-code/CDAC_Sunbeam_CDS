#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, len, flag = 1;
    char *str;

    if(argc != 2)
    {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    str = argv[1];
    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("'%s' is a Palindrome.\n", str);
    else
        printf("'%s' is Not a Palindrome.\n", str);

    return 0;
}