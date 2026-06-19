#include <stdio.h>
#include <math.h>

int calculate(int a, int b);

int main()
{
    int x = 10  //syntex error= ; missing
                //correction= int x = 10;
    int y = 20;

    printf("Program Started\n");

    if(x = 10)  //logical error ==
                //correction= if(x==10)
    {
        printf("X is 10\n");
    }

    int marks = "Ninety"; //Semantic Error: String assigned to int
                          //Correction: char marks[] = "Ninety";or int marks = 90;

    printf("%d\n", z);  //Semantic Error: z is not declared
                        //Correction: declare z first, e.g. int z = 0; or printf("%s\n", marks);

    100 = x;  //Syntex Error: Constant cannot be assigned value
              //Correction: x = 100;

    int arr[5];

    arr[10] = 50; //Logical error: Array index out of bounds
                //Correction:  arr[0] = 50; valid index 0 to 4

    float *ptr = &x; // Semantic Error: float pointer stores int variable address
                    //Correction: int *ptr = &x;

    printf("%f\n", x); //Semantic Error: Wrong format specifier for int
                       //Correction: printf("%d\n", x);


    int a = 10;
    int b = 0;

    printf("%d\n", a/b);   //Runtime Error: Division by zero
                        //Correction: check b != 0 before division


    char ch = 'AB';  //Semantic Error: char can store only one character
                    //Correction: char ch = 'A';

    if(x > y)
        printf("X is greater");
    else
        printf("X is greater"); //Error: Logical error: else message wrong
                                //Correction: printf("Y is greater");

    sqrt(25);  //Logical Error: Result not used
                //Correction: double s = sqrt(25);


    show();   // error unwanted line 

    while(x < 15);  //logocal Error: Semicolon does not need
                    //Correction: while(x < 15)
    {
        x++;
    }

    continue;  // syntex error: continue used outside loop
                //Correction: remove it or use inside loop

    break; //syntax Error: break used outside loop/switch
            //Correction: remove it or use inside loop/switch


    int result = calculate(10);  // symatic Error: calculate needs 2 arguments
                                // Correction: int result = calculate(10, 20);

    printf("%d\n", result);

    printf("Program Ended\n");

    return 0;
}

int calculate(int a, int b)
{
    return a + b;
}