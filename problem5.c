#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 0;

    printf("Division Result = %d\n", a / b); //Runtime Error: division by zero
                                             //Correction: check b != 0 before division

    int *ptr1 = NULL;

    *ptr1 = 50; //Runtime Error: dereferencing NULL pointer
                //Correction: allocate memory or use valid address

    int arr[5];

    arr[10] = 100; //Runtime/Logical Error: array index out of bounds
                   //Correction: use index 0 to 4

    int *ptr2;

    *ptr2 = 200; //Runtime Error: uninitialized pointer dereference
                 //Correction: initialize pointer before use

    char name[5];

    strcpy(name, "Programming"); //Runtime Error: buffer overflow
                                 //Correction: increase array size

    printf("%s\n", name);

    int *ptr3;

    printf("%d\n", *ptr3); //Runtime Error: uninitialized pointer dereference
                           //Correction: initialize pointer before use

    FILE *fp;

    fp = fopen("unknown.txt", "r");

    fscanf(fp, "%d", &a); //Runtime Error: file pointer may be NULL
                          //Correction: check if(fp != NULL)

    fclose(fp);

    char *ptr4 = malloc(5);

    strcpy(ptr4, "Computer Science"); //Runtime Error: insufficient memory / buffer overflow
                                      //Correction: allocate enough memory

    printf("%s\n", ptr4);

    free(ptr4);

    printf("%c\n", ptr4[0]); //Runtime Error: use after free
                             //Correction: do not use pointer after free

    int *ptr5 = malloc(sizeof(int));

    free(ptr5);

    free(ptr5); //Runtime Error: double free
                //Correction: free only once, then set pointer NULL

    int x = 5;

    int y = 0;

    int result = x % y; //Runtime Error: modulo by zero
                        //Correction: check y != 0 before modulo

    printf("%d\n", result);

    char str1[10] = "Hello";

    strcat(str1, "WorldProgramming"); //Runtime Error: buffer overflow
                                      //Correction: increase array size

    printf("%s\n", str1);

    int *numbers;

    numbers = malloc(3 * sizeof(int));

    for(int i=0; i<10; i++) //Runtime/Logical Error: loop exceeds allocated size
                            //Correction: i < 3
    {
        numbers[i] = i;
    }

    free(numbers);

    int matrix[3][3];

    matrix[5][5] = 100; //Runtime/Logical Error: 2D array index out of bounds
                        //Correction: valid index 0 to 2

    int *ptr6 = NULL;

    printf("%d\n", ptr6[0]); //Runtime Error: NULL pointer access
                             //Correction: allocate memory or use valid pointer

    char password[8];

    gets(password); //Runtime/Security Error: gets causes buffer overflow
                    //Correction: use fgets(password, sizeof(password), stdin)

    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));

    *ptr7 = 500;

    free(ptr7);

    *ptr7 = 1000; //Runtime Error: use after free
                  //Correction: do not access after free

    int age;

    printf("Age = %d\n", age); //Logical Error: uninitialized variable
                               //Correction: initialize age

    int index = -1;

    arr[index] = 50; //Runtime/Logical Error: negative array index
                     //Correction: use valid index 0 to 4

    int *ptr8;

    if(*ptr8 > 0) //Runtime Error: uninitialized pointer dereference
                  //Correction: initialize pointer before use
    {
        printf("Positive\n");
    }

    char *text = NULL;

    printf("%s\n", text); //Runtime Error: printing NULL string
                          //Correction: assign valid string

    int size = 1000000000;

    int *hugeArray;

    hugeArray = malloc(size * sizeof(int));

    hugeArray[0] = 1; //Runtime Error: malloc may fail
                      //Correction: check hugeArray != NULL

    free(hugeArray);

    int *ptr9 = NULL;

    while(1) //Logical Error: infinite loop
             //Correction: use proper condition or break
    {
        ptr9++;
    }

    printf("End of Program\n");

    return 0;
}