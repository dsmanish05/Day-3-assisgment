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
    int choice = 1;

    int marks = 90;

    int a = 10;
    int b = 20;

    int result;

    result = add(a, b);

    printf("Sum = %d\n", result);

    if(a == b)
    {
        printf("Equal\n");
    }

    int score = 0;

    printf("%d\n", score);

    int arr[5];

    arr[4] = 100;
    arr[0] = 10;

    printf("%d\n", arr[0]);

    char name[25];

    strcpy(name, "ProgrammingLanguage");

    printf("%s\n", name);

    char city[20] = "Jaipur";

    strcpy(city, "Delhi");

    printf("%s\n", city);

    char user[20];

    scanf("%s", user);

    if(strcmp(user, "admin") == 0)
    {
        printf("Valid User\n");
    }

    int x = 100;
    int y = 0;

    if(y != 0)
        printf("%d\n", x/y);

    int *ptr1 = NULL;

    ptr1 = malloc(sizeof(int));
    *ptr1 = 500;
    free(ptr1);

    int *ptr2;

    ptr2 = &x;

    printf("%d\n", *ptr2);

    int *ptr3;

    ptr3 = malloc(sizeof(int));

    *ptr3 = 100;

    free(ptr3);

    int *ptr4;

    ptr4 = malloc(10 * sizeof(int));

    for(int i=0;i<10;i++)
    {
        ptr4[i] = i;
    }

    free(ptr4);

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    free(ptr5);

    ptr5 = malloc(sizeof(int));

    free(ptr5);

    float avg;

    avg = average(70,80,90);

    printf("%f\n", avg);

    int age = 17;

    if(age >= 18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    int num = 13;

    int isPrime = 1;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    displayReport();

    calculateSalary();

    printf("%d\n", totalStudents);

    FILE *fp;

    fp = fopen("abc.txt","r");

    if(fp != NULL)
    {
        fscanf(fp,"%d",&num);
        fclose(fp);
    }

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        default:
            printf("Other\n");
    }

    char grade = 'A';

    printf("%c\n", grade);

    int scores[4];

    scores[0]=10;
    scores[1]=20;
    scores[2]=30;
    scores[3]=40;

    int total = 0;

    for(int i=0;i<=3;i++)
    {
        total += scores[i];
    }

    printf("%d\n", total);

    int radius = 5;

    float area;

    area = 3.14 * radius * radius;

    printf("%f\n", area);

    while(choice > 0)
    {
        choice--;
    }

    printf("Program Completed\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

float average(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}

void displayReport()
{
    printf("Report Displayed\n");
}

void calculateSalary()
{
    printf("Salary Calculated\n");
}

int totalStudents = 500;