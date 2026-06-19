#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // Syntax Error: strcpy() is used but string.h is missing
                      // Correction: #include <string.h>

void swap(int *a, int *b);
void printArray(int *arr, int size);

int main()
{
    int x = 10;
    int y = 20;

    int *ptr1;

    printf("%d\n", *ptr1);   // Runtime Error: Uninitialized pointer dereference
                             // Correction: ptr1 = &x;

    int *ptr2 = NULL;

    *ptr2 = 100;             // Runtime Error: NULL pointer dereference
                             // Correction: ptr2 = malloc(sizeof(int));

    int *ptr3;

    ptr3 = &x;

    printf("%d\n", *ptr3);

    ptr3++;                  // Runtime Error: Pointer moves outside valid variable
                             // Correction: remove ptr3++;

    printf("%d\n", *ptr3);

    int arr[5] = {10,20,30,40,50};

    int *ptr4 = arr;

    printf("%d\n", *(ptr4 + 10)); // Runtime Error: Array index out of bounds
                                  // Correction: printf("%d\n", *(ptr4 + 4));

    int *ptr5;

    ptr5 = malloc(sizeof(int));

    *ptr5 = 500;

    printf("%d\n", *ptr5);

    free(ptr5);

    printf("%d\n", *ptr5);   // Runtime Error: Use after free
                             // Correction: remove this line

    int *ptr6;

    ptr6 = malloc(sizeof(int));

    *ptr6 = 1000;

    ptr6 = NULL;             // Memory Leak: Allocated memory lost
                             // Correction: free(ptr6); before ptr6 = NULL;

    int *ptr7;

    ptr7 = malloc(5);        // Runtime Error: Wrong memory allocation size
                             // Correction: ptr7 = malloc(10 * sizeof(int));

    for(int i=0; i<10; i++)
    {
        ptr7[i] = i;
    }

    free(ptr7);

    int *ptr8;

    ptr8 = malloc(3 * sizeof(int));

    ptr8[0] = 10;
    ptr8[1] = 20;
    ptr8[2] = 30;
    ptr8[3] = 40;            // Runtime Error: Array index out of bounds
                             // Correction: allocate 4 integers

    free(ptr8);

    int *ptr9;

    ptr9 = malloc(sizeof(int));

    *ptr9 = 50;

    free(ptr9);

    free(ptr9);              // Runtime Error: Double free
                             // Correction: remove second free(ptr9);

    int *ptr10;

    ptr10 = malloc(sizeof(int));

    printf("%d\n", *ptr10);  // Logical Error: Printing uninitialized memory
                             // Correction: *ptr10 = 0;

    int *numbers;

    numbers = malloc(5 * sizeof(int));

    for(int i=0; i<=5; i++)  // Runtime Error: Array index out of bounds
                             // Correction: for(int i=0; i<5; i++)
    {
        numbers[i] = i * 10;
    }

    printArray(numbers,5);

    int a = 100;
    int b = 200;

    swap(&a,&b);

    printf("%d %d\n", a, b);

    int **pptr;

    int value = 500;

    pptr = &value;           // Semantic Error: int* assigned to int**
                             // Correction: int *pvalue = &value; pptr = &pvalue;

    printf("%d\n", **pptr);

    char *name;

    name = malloc(5);        // Runtime Error: Memory size too small
                             // Correction: name = malloc(20);

    strcpy(name,"Programming");

    printf("%s\n", name);

    int *ptr11;

    ptr11 = malloc(sizeof(int));

    *ptr11 = 123;

    ptr11++;                 // Runtime Error: Pointer moves outside allocated memory
                             // Correction: remove ptr11++;

    printf("%d\n", *ptr11);

    int *ptr12 = NULL;

    if(*ptr12 > 0)           // Runtime Error: NULL pointer dereference
                             // Correction: if(ptr12 != NULL && *ptr12 > 0)
    {
        printf("Positive\n");
    }

    int *ptr13;

    ptr13 = malloc(100 * sizeof(int));

    for(int i=0;i<100;i++)
    {
        ptr13[i] = i;
    }

    ptr13[100] = 500;        // Runtime Error: Array index out of bounds
                             // Correction: ptr13[99] = 500;

    int *ptr14;

    ptr14 = malloc(sizeof(int));

    free(ptr14);

    *ptr14 = 999;            // Runtime Error: Use after free
                             // Correction: remove this line

    int matrix[3][3];

    int *p;

    p = matrix;              // Semantic Error: Wrong pointer assignment for 2D array
                             // Correction: p = &matrix[0][0];

    printf("%d\n", *(p + 20)); // Runtime Error: Array index out of bounds
                               // Correction: printf("%d\n", *(p + 8));

    int *ptr15;

    ptr15 = malloc(sizeof(int));

    ptr15 = malloc(sizeof(int)); // Memory Leak: Previous allocated memory lost
                                 // Correction: free(ptr15); before second malloc

    printf("End of Program\n");

    return 0;
}

void swap(int *a, int *b)
{
    int *temp;

    temp = a;
    a = b;
    b = temp;                // Logical Error: Only pointer addresses are swapped
                             // Correction: swap values using *a and *b
}

void printArray(int *arr, int size)
{
    for(int i=0; i<=size; i++) // Runtime Error: Array index out of bounds
                               // Correction: for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}