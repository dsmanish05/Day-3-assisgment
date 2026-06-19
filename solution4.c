#include <stdio.h>

void displayMenu();
void calculateSalary(float basic);
int add(int a, int b);
float calculateArea(float radius);
void printStudentDetails();
int findMaximum(int a, int b);
void showResult();
float calculateAverage(int a, int b, int c);

void generateReport();
void displayEmployee();
void processData();
void saveRecord();
void loadRecord();
void printInvoice();
void calculateTax();
void validateUser();
void sendNotification();
void generateCertificate();

int totalStudents = 500;
float companyProfit = 250000.50;

int main()
{
    int choice = 1;

    displayMenu();

    int sum = add(10,20);

    printf("Sum = %d\n", sum);

    float area = calculateArea(7.5);

    printf("Area = %.2f\n", area);

    calculateSalary(50000);

    printStudentDetails();

    int max = findMaximum(10,20);

    printf("Max = %d\n", max);

    showResult();

    float avg = calculateAverage(70,80,90);

    printf("Average = %.2f\n", avg);

    printf("Students = %d\n", totalStudents);

    printf("Profit = %.2f\n", companyProfit);

    generateReport();

    displayEmployee();

    processData();

    saveRecord();

    loadRecord();

    printInvoice();

    calculateTax();

    validateUser();

    sendNotification();

    generateCertificate();

    return 0;
}

void displayMenu()
{
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Exit\n");
}

int add(int a, int b)
{
    return a + b;
}

float calculateArea(float radius)
{
    return 3.14f * radius * radius;
}

void calculateSalary(float basic)
{
    printf("Salary = %.2f\n", basic);
}

void printStudentDetails()
{
    printf("Student Details\n");
}

int findMaximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

void showResult()
{
    printf("Result Shown\n");
}

float calculateAverage(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}

void generateReport()
{
    printf("Report Generated\n");
}

void displayEmployee()
{
    printf("Employee Displayed\n");
}

void processData()
{
    printf("Data Processed\n");
}

void saveRecord()
{
    printf("Record Saved\n");
}

void loadRecord()
{
    printf("Record Loaded\n");
}

void printInvoice()
{
    printf("Invoice Printed\n");
}

void calculateTax()
{
    printf("Tax Calculated\n");
}

void validateUser()
{
    printf("User Validated\n");
}

void sendNotification()
{
    printf("Notification Sent\n");
}

void generateCertificate()
{
    printf("Certificate Generated\n");
}