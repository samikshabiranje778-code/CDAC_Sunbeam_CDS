#include<stdio.h>
#include<string.h>

#define max 2

struct Employee
{
    int Id;
    char emp_name[50];
    float salary;
};

int main()
{ 
    struct Employee record[max];
    int choice, found, searchId;
    char SearchName[50]; 

    printf("enter %d Employee details :\n", max);
    for (int i = 0; i < max; i++)
    {
        printf("\nemployee %d\n", i + 1); //0+1  
        
        printf("enter employee id: ");
        scanf("%d", &record[i].Id);
        
        printf("enter employee name: ");
        scanf("%s", record[i].emp_name)
        
        printf("enter employee salary: ");
        scanf("%f", &record[i].salary);
    }
    
    printf("\n========menu for choice=======\n");
    printf("1 .Employee Id\n");
    printf("2 .Employee name\n");
    printf("enter the choice: ");
    scanf("%d", &choice);
    
    found = 0; 

    
    if (choice == 1)
    {
        printf("Search Employee Id: ");
        scanf("%d", &searchId); 

        for (int i = 0; i < max; i++)
        {
            if(record[i].Id == searchId)
            { 
                printf("\n--- emp found details ---\n");
                printf("Id = %d\n", record[i].Id);
                printf("name = %s\n", record[i].emp_name);
                printf("Salary = %.2f\n", record[i].salary);
                found = 1;
                break;
            } 
        }
    }
    else if (choice == 2)
    {
        printf("Search Employee Name: ");
        scanf("%s", SearchName);

        for (int i = 0; i < max; i++)
        {
            if (strcmp(record[i].emp_name, SearchName) == 0)
            { 
                printf("\n--- emp found details ---\n");
                printf("Id = %d\n", record[i].Id);
                printf("name = %s\n", record[i].emp_name);
                printf("Salary = %.2f\n", record[i].salary);
                found = 1;
                break;
            }
        }
    }
    else 
    {
        printf("\nInvalid Choice!\n");
        return 1;
    }

    
    if (!found) {
        printf("\nEmployee record not found.\n");
    }

    return 0;
}
