#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

void acceptStudent(struct Student *s)
{
    printf("Enter Roll No: ");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void printStudent(struct Student *s)
{
    printf("\nStudent Details:\n");
    printf("Roll No : %d\n", s->rollNo);
    printf("Name    : %s\n", s->name);
    printf("Marks   : %.2f\n", s->marks);
}

int main()
{
    struct Student s;

    acceptStudent(&s);
    printStudent(&s);

    return 0;
}