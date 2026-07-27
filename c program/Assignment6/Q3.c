#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strstr(argv[2], argv[1]) != NULL)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}