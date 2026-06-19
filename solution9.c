#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b);
void printArray(int *arr, int size);

int main()
{
    int x = 10;
    int y = 20;

    int *ptr1;

    ptr1 = &x;

    printf("%d\n", *ptr1);

    int *ptr2 = NULL;

    ptr2 = malloc(sizeof(int));

    *ptr2 = 100;

    int *ptr3;

    ptr3 = &x;

    printf("%d\n", *ptr3);

    printf("%d\n", *ptr3);

    int arr[5] = {10,20,30,40,50};

    int *ptr4 = arr;

    printf("%d\n", *(ptr4 + 4));

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    *ptr5 = 500;

    printf("%d\n", *ptr5);

    free(ptr5);

    int *ptr6;

    ptr6 = malloc(sizeof(int));

    *ptr6 = 1000;

    free(ptr6);

    ptr6 = NULL;

    int *ptr7;

    ptr7 = malloc(10 * sizeof(int));

    for(int i=0; i<10; i++)
    {
        ptr7[i] = i;
    }

    free(ptr7);

    int *ptr8;

    ptr8 = malloc(4 * sizeof(int));

    ptr8[0] = 10;
    ptr8[1] = 20;
    ptr8[2] = 30;
    ptr8[3] = 40;

    free(ptr8);

    int *ptr9;

    ptr9 = malloc(sizeof(int));

    *ptr9 = 50;

    free(ptr9);

    int *ptr10;

    ptr10 = malloc(sizeof(int));

    *ptr10 = 0;

    printf("%d\n", *ptr10);

    free(ptr10);

    int *numbers;

    numbers = malloc(5 * sizeof(int));

    for(int i=0; i<5; i++)
    {
        numbers[i] = i * 10;
    }

    printArray(numbers,5);

    free(numbers);

    int a = 100;
    int b = 200;

    swap(&a,&b);

    printf("%d %d\n", a, b);

    int **pptr;

    int value = 500;
    int *pvalue = &value;

    pptr = &pvalue;

    printf("%d\n", **pptr);

    char *name;

    name = malloc(20);

    strcpy(name,"Programming");

    printf("%s\n", name);

    free(name);

    int *ptr11;

    ptr11 = malloc(sizeof(int));

    *ptr11 = 123;

    printf("%d\n", *ptr11);

    free(ptr11);

    int *ptr12 = NULL;

    if(ptr12 != NULL && *ptr12 > 0)
    {
        printf("Positive\n");
    }

    int *ptr13;

    ptr13 = malloc(100 * sizeof(int));

    for(int i=0;i<100;i++)
    {
        ptr13[i] = i;
    }

    ptr13[99] = 500;

    free(ptr13);

    int *ptr14;

    ptr14 = malloc(sizeof(int));

    free(ptr14);

    int matrix[3][3];

    int *p;

    p = &matrix[0][0];

    printf("%d\n", *(p + 8));

    int *ptr15;

    ptr15 = malloc(sizeof(int));

    free(ptr15);

    ptr15 = malloc(sizeof(int));

    free(ptr15);

    printf("End of Program\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}