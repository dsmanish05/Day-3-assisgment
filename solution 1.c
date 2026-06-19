#include <stdio.h>
#include <math.h>

int calculate(int a, int b);

int main()
{
    int x = 10;
    int y = 20;

    printf("Program Started\n");

    if(x == 10)
    {
        printf("X is 10\n");
    }

    int marks = 90;

    int z = 0;
    printf("%d\n", z);

    x = 100;

    int arr[5];

    arr[4] = 50;

    int *ptr = &x;

    printf("%d\n", x);

    int a = 10;
    int b = 1;

    printf("%d\n", a/b);

    char ch = 'A';

    if(x > y)
        printf("X is greater");
    else
        printf("Y is greater");

    sqrt(25);

    while(x < 15)
    {
        x++;
    }

    int result = calculate(10, 20);

    printf("%d\n", result);

    printf("Program Ended\n");

    return 0;
}

int calculate(int a, int b)
{
    return a + b;
}