#include <stdio.h>

int add(int a, int b);
float average(int a, int b, int c);

int main()
{
    int age = "Twenty";  //Semantic Error: string assigned to int
                         //Correction: int age = 20;

    float salary = 50000.50;

    int marks = 85;

    char grade = "A";    //Semantic Error: string assigned to char
                         //Correction: char grade = 'A';

    printf("%d\n", salary);  //Semantic Error: wrong format specifier
                             //Correction: printf("%f\n", salary);

    printf("%f\n", marks);   //Semantic Error: wrong format specifier
                             //Correction: printf("%d\n", marks);

    int total;

    total = marks + score;   //Semantic Error: score not declared
                             //Correction: int score = 90;

    int x = 10;
    int x = 20;              //Syntax/Semantic Error: redeclaration of x
                             //Correction: x = 20;

    100 = x;                 //Syntax Error: constant cannot be assigned
                             //Correction: x = 100;

    int num = 25;

    printf("%s\n", num);     //Semantic Error: wrong format specifier
                             //Correction: printf("%d\n", num);

    float pi = 3.14;

    printf("%d\n", pi);      //Semantic Error: wrong format specifier
                             //Correction: printf("%f\n", pi);

    int arr[5];

    arr[2.5] = 100;          //Semantic Error: array index must be integer
                             //Correction: arr[2] = 100;

    char ch = 65.5;          //Semantic Error: float value assigned to char
                             //Correction: char ch = 'A';

    int result;

    result = add(10);        //Semantic Error: add needs 2 arguments
                             //Correction: result = add(10, 20);

    printf("%d\n", result);

    float avg;

    avg = average(10,20);    //Semantic Error: average needs 3 arguments
                             //Correction: avg = average(10,20,30);

    printf("%f\n", avg);

    int temperature = "35";  //Semantic Error: string assigned to int
                             //Correction: int temperature = 35;

    int amount = 1000;

    float discount = "10.5"; //Semantic Error: string assigned to float
                             //Correction: float discount = 10.5;

    amount = amount - discount;

    char name[20];

    name = "Robil";          //Semantic Error: array cannot be assigned directly
                             //Correction: use strcpy(name, "Robil");

    printf("%s\n", name);

    int count;

    count = totalMarks + 10; //Semantic Error: totalMarks not declared
                             //Correction: int totalMarks = 100;

    int number = 50;

    printf("%c\n", number);  //Logical/Semantic Error: using %c for int
                             //Correction: printf("%d\n", number);

    float rate = 7.5;

    printf("%d\n", rate);    //Semantic Error: wrong format specifier
                             //Correction: printf("%f\n", rate);

    int a = 10;
    int b = 20;

    int sum;

    sum = add(a,b,c);        //Semantic Error: c not declared and add needs 2 args
                             //Correction: sum = add(a,b);

    printf("%d\n", sum);

    float radius = 5.5;

    int area;                //Logical Error: area should be float
                             //Correction: float area;

    area = 3.14 * radius * radius;

    printf("%d\n", area);    //Semantic Error: use %f for float
                             //Correction: printf("%f\n", area);

    int studentMarks = 90;

    if(studentMarks = 100)   //Logical Error: assignment used instead of comparison
                             //Correction: if(studentMarks == 100)
    {
        printf("Perfect Score\n");
    }

    int size = "Large";      //Semantic Error: string assigned to int
                             //Correction: char size[] = "Large";

    printf("%d\n", size);    //Semantic Error: wrong format specifier
                             //Correction: printf("%s\n", size);

    float percentage = 89.75;

    printf("%d\n", percentage); //Semantic Error: wrong format specifier
                                //Correction: printf("%f\n", percentage);

    int arr2[10];

    arr2["five"] = 100;      //Semantic Error: array index must be integer
                             //Correction: arr2[5] = 100;

    int choice = 2;

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case "2":            //Semantic Error: case value must be integer constant
                             //Correction: case 2:
            printf("Two\n");
            break;
    }

    int finalResult;

    finalResult = multiply(10,20); //Semantic Error: multiply function not declared/defined
                                  //Correction: define multiply() or use add()

    printf("%d\n", finalResult);

    int length = 10;
    int width = 5;

    float areaRect;

    areaRect = length * width;

    printf("%d\n", areaRect); //Semantic Error: wrong format specifier
                              //Correction: printf("%f\n", areaRect);

    int marks1 = 70;
    int marks2 = 80;
    int marks3 = 90;

    int avgMarks;             //Logical Error: average returns float
                              //Correction: float avgMarks;

    avgMarks = average(marks1, marks2, marks3);

    printf("%d\n", avgMarks); //Semantic Error: wrong format specifier
                              //Correction: printf("%f\n", avgMarks);

    int data;

    printf("%d\n", value);    //Semantic Error: value not declared
                              //Correction: declare value first

    int employeeId = "EMP101"; //Semantic Error: string assigned to int
                               //Correction: char employeeId[] = "EMP101";

    printf("%d\n", employeeId); //Semantic Error: wrong format specifier
                                //Correction: printf("%s\n", employeeId);

    return 0;
}