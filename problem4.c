#include <stdio.h>

void displayMenu();
void calculateSalary(float basic);
int add(int a, int b);
float calculateArea(float radius);
void printStudentDetails();
int findMaximum(int a, int b);
void showResult();
float calculateAverage(int a, int b, int c);

extern int totalStudents;
extern float companyProfit;

int main()
{
    int choice = 1;

    displayMenu();

    int sum = add(10,20);

    printf("Sum = %d\n", sum);

    float area = calculateArea(7.5);

    printf("Area = %.2f\n", area);

    calculateSalary(50000);      //Semantic Error: function declared but not defined
                                  //Correction: define calculateSalary()

    printStudentDetails();       //Semantic Error: function declared but not defined
                                  //Correction: define printStudentDetails()

    int max = findMaximum(10,20);

    printf("Max = %d\n", max);

    showResult();                //Semantic Error: function declared but not defined
                                  //Correction: define showResult()

    float avg = calculateAverage(70,80,90); //Semantic Error: function declared but not defined
                                            //Correction: define calculateAverage()

    printf("Average = %.2f\n", avg);

    printf("Students = %d\n", totalStudents);

    printf("Profit = %.2f\n", companyProfit); //Semantic Error: extern variable declared but not defined
                                               //Correction: float companyProfit = 250000.50;

    generateReport();            //Semantic Error: function not declared/defined
                                  //Correction: declare and define generateReport()

    displayEmployee();           //Semantic Error: function not declared/defined
                                  //Correction: declare and define displayEmployee()

    processData();               //Semantic Error: function not declared/defined
                                  //Correction: declare and define processData()

    saveRecord();                //Semantic Error: function not declared/defined
                                  //Correction: declare and define saveRecord()

    loadRecord();                //Semantic Error: function not declared/defined
                                  //Correction: declare and define loadRecord()

    printInvoice();              //Semantic Error: function not declared/defined
                                  //Correction: declare and define printInvoice()

    calculateTax();              //Semantic Error: function not declared/defined
                                  //Correction: declare and define calculateTax()

    validateUser();              //Semantic Error: function not declared/defined
                                  //Correction: declare and define validateUser()

    sendNotification();          //Semantic Error: function not declared/defined
                                  //Correction: declare and define sendNotification()

    generateCertificate();       //Semantic Error: function not declared/defined
                                  //Correction: declare and define generateCertificate()

    return 0;
}