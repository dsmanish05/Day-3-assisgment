#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b);
float average(int a, int b, int c);
void displayReport();
void calculateSalary();  

extern int totalStudents;

int main()
{
    int choice = 1         // Syntax Error: semicolon missing
                           // Correction: int choice = 1;

    int marks = "90";      // Semantic Error: string assigned to int
                           // Correction: int marks = 90;

    int a = 10;
    int b = 20;

    int result;

    result = add(a);       // Semantic Error: add needs 2 arguments
                           // Correction: result = add(a, b);

    printf("Sum = %d\n", result);

    if(a = b)              // Logical Error: assignment used instead of comparison
                           // Correction: if(a == b)
    {
        printf("Equal\n");
    }

    printf("%d\n", score); // Semantic Error: score is not declared
                           // Correction: declare int score = 0;

    int arr[5];

    arr[10] = 100;         // Runtime Error: array index out of bounds
                           // Correction: arr[4] = 100;

    printf("%d\n", arr[-1]); // Runtime Error: negative index invalid
                             // Correction: printf("%d\n", arr[0]);

    char name[10];         // Runtime Error: array size too small
                           // Correction: char name[25];

    strcpy(name, "ProgrammingLanguage");

    printf("%s\n", name);

    char city[20] = "Jaipur";

    city = "Delhi";        // Syntax Error: array cannot be assigned directly
                           // Correction: strcpy(city, "Delhi");

    printf("%s\n", city);

    char user[20];

    scanf("%s", user);

    if(user == "admin")    // Logical Error: wrong string comparison
                           // Correction: if(strcmp(user, "admin") == 0)
    {
        printf("Valid User\n");
    }

    int x = 100;
    int y = 0;

    printf("%d\n", x/y);   // Runtime Error: division by zero
                           // Correction: check y != 0 before division

    int *ptr1 = NULL;

    *ptr1 = 500;           // Runtime Error: NULL pointer dereference
                           // Correction: allocate memory before use

    int *ptr2;

    printf("%d\n", *ptr2); // Runtime Error: uninitialized pointer dereference
                           // Correction: ptr2 = &x;

    int *ptr3;

    ptr3 = malloc(sizeof(int));

    *ptr3 = 100;

    free(ptr3);

    printf("%d\n", *ptr3); // Runtime Error: use after free
                           // Correction: remove this line

    free(ptr3);            // Runtime Error: double free
                           // Correction: remove second free

    int *ptr4;

    ptr4 = malloc(5);      // Runtime Error: wrong memory allocation size
                           // Correction: ptr4 = malloc(10 * sizeof(int));

    for(int i=0;i<10;i++)
    {
        ptr4[i] = i;
    }

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    ptr5 = malloc(sizeof(int)); // Memory Leak: previous memory lost
                                // Correction: free(ptr5) before second malloc

    float avg;

    avg = average(70,80);  // Semantic Error: average needs 3 arguments
                           // Correction: avg = average(70,80,90);

    printf("%f\n", avg);

    int age = 17;

    if(age > 18)
        printf("Not Eligible\n"); // Logical Error: condition/message wrong
                                  // Correction: print Eligible
    else
        printf("Eligible\n");     // Correction: print Not Eligible

    int num = 13;

    int isPrime = 1;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isPrime = 1;    // Logical Error: should become 0 when not prime
                            // Correction: isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Not Prime\n"); // Logical Error: true means prime
                               // Correction: printf("Prime\n");
    else
        printf("Prime\n");     // Correction: printf("Not Prime\n");

    displayReport();       // Semantic Error: function declared but not defined
                           // Correction: define displayReport()

    calculateSalary();     // Semantic Error: function not defined
                           // Correction: define calculateSalary()

    printf("%d\n", totalStudents);

    FILE *fp;

    fp = fopen("abc.txt","r");

    fscanf(fp,"%d",&num);  // Runtime Error: file pointer may be NULL
                           // Correction: check if(fp != NULL)

    fclose(fp);

    switch(choice)
    {
        case 1             // Syntax Error: colon missing
                           // Correction: case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
                           // Logical Error: break missing
                           // Correction: add break;

        default:
            printf("Other\n");
    }

    char grade = 'AB';     // Semantic Error: char can store only one character
                           // Correction: char grade = 'A';

    printf("%c\n", grade);

    int scores[3];

    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40;          // Runtime Error: array index out of bounds
                           // Correction: int scores[4];

    int total = 0;

    for(int i=0;i<=3;i++)
    {
        total += scores[i];
    }

    printf("%d\n", total);

    int radius = 5;

    float area;

    area = 2 * 3.14 * radius * radius; // Logical Error: circle area formula wrong
                                       // Correction: area = 3.14 * radius * radius;

    printf("%f\n", area);

    while(choice > 0);     // Logical Error: extra semicolon creates empty loop
                           // Correction: while(choice > 0)
    {
        choice--;
    }

    continue;              // Syntax Error: continue used outside loop
                           // Correction: remove continue;

    printf("Program Completed\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (a+b+c)/3;      // Logical Error: integer division
                           // Correction: return (float)(a+b+c)/3;
}

int totalStudents = 500;