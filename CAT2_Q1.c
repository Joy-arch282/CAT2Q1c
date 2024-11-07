#include <stdio.h>
#include <string.h> // For using strcpy

// Define the structure named employee
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize a variable of type employee
    struct employee emp;

    // Initializing the structure fields
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

    // Print the employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0 ;
}