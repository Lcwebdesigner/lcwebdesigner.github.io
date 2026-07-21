#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

struct Student students[100];
int count = 0;


void addStudent()
{
    printf("\nEnter ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Name: ");
    scanf("%s", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("Student added successfully!\n");
}


void displayStudents()
{
    printf("\n--- Student List ---\n");

    for(int i=0; i<count; i++)
    {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}


int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Add Student");
        printf("\n2. View Students");
        printf("\n3. Exit");

        printf("\nChoose option: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
