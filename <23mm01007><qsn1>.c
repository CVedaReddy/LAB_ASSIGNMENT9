#include <stdio.h>
struct strec
{
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};
int main() 
{
    struct strec cmp;
    printf("Enter the name of the company: ");
    scanf("%s", cmp.name);
    printf("Enter the address of the company: ");
    scanf("%s", cmp.address);
    printf("Enter the phone number of the company: ");
    scanf("%s", cmp.phone);
    printf("Enter the number of employees in the company: ");
    scanf("%d", &cmp.noOfEmployee);
    printf("\n Company Details: \n");
    printf("Name: %s\n", cmp.name);
    printf("Address: %s\n", cmp.address);
    printf("Phone: %s\n", cmp.phone);
    printf("Number of Employees: %d\n", cmp.noOfEmployee);
    return 0;
}
