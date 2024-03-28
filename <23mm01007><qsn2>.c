#include <stdio.h>
struct Student 
{
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float avgMarks;
};
void displayStudent(struct Student student)
 {
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Age: %d\n", student.age);
    printf("Average Marks: %.2f\n", student.avgMarks);
    printf("\n");
}
int main() 
{
    struct Student students[6];
    for (int i = 0; i < 6; ++i) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average Marks: ");
        scanf("%f", &students[i].avgMarks);
        printf("\n");
    }
    printf("Student Details:\n");
    for (int i = 0; i < 6; ++i) 
    {
        printf("Details for student %d:\n", i + 1);
        displayStudent(students[i]);
    }

    return 0;
}
