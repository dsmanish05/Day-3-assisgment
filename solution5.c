#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 10;

    if(b != 0)
        printf("Division Result = %d\n", a / b);

    int value1;
    int *ptr1 = &value1;

    *ptr1 = 50;

    int arr[5];

    arr[0] = 100;

    int value2;
    int *ptr2 = &value2;

    *ptr2 = 200;

    char name[20];

    strcpy(name, "Programming");

    printf("%s\n", name);

    int value3 = 30;
    int *ptr3 = &value3;

    printf("%d\n", *ptr3);

    FILE *fp;

    fp = fopen("unknown.txt", "r");

    if(fp != NULL)
    {
        fscanf(fp, "%d", &a);
        fclose(fp);
    }
    else
    {
        printf("File not found\n");
    }

    char *ptr4 = malloc(20);

    if(ptr4 != NULL)
    {
        strcpy(ptr4, "Computer Science");

        printf("%s\n", ptr4);

        free(ptr4);
        ptr4 = NULL;
    }

    int *ptr5 = malloc(sizeof(int));

    if(ptr5 != NULL)
    {
        free(ptr5);
        ptr5 = NULL;
    }

    int x = 5;

    int y = 2;

    if(y != 0)
    {
        int result = x % y;
        printf("%d\n", result);
    }

    char str1[30] = "Hello";

    strcat(str1, "World");

    printf("%s\n", str1);

    int *numbers;

    numbers = malloc(3 * sizeof(int));

    if(numbers != NULL)
    {
        for(int i=0; i<3; i++)
        {
            numbers[i] = i;
        }

        free(numbers);
        numbers = NULL;
    }

    int matrix[3][3];

    matrix[2][2] = 100;

    int value6 = 60;
    int *ptr6 = &value6;

    printf("%d\n", ptr6[0]);

    char password[8];

    fgets(password, sizeof(password), stdin);

    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));

    if(ptr7 != NULL)
    {
        *ptr7 = 500;

        free(ptr7);
        ptr7 = NULL;
    }

    int age = 21;

    printf("Age = %d\n", age);

    int index = 1;

    arr[index] = 50;

    int value8 = 10;
    int *ptr8 = &value8;

    if(*ptr8 > 0)
    {
        printf("Positive\n");
    }

    char *text = "Hello";

    printf("%s\n", text);

    int size = 1000;

    int *hugeArray;

    hugeArray = malloc(size * sizeof(int));

    if(hugeArray != NULL)
    {
        hugeArray[0] = 1;

        free(hugeArray);
        hugeArray = NULL;
    }

    int count = 0;

    while(count < 5)
    {
        count++;
    }

    printf("End of Program\n");

    return 0;
}