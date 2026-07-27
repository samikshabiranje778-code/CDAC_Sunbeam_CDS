#include <stdio.h>

int leapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

void daysInMonth(int month, int year)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)
        printf("Days = 31");

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Days = 30");

    else if (month == 2)
    {
        if (leapYear(year))
            printf("Days = 29");
        else
            printf("Days = 28");
    }
}

int main()
{
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (leapYear(year))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    daysInMonth(month, year);

    return 0;
}