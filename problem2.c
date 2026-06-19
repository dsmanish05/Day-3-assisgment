#include <stdio.h>

int add(int a, int b);

int main()
{
    int choice;
    int num1 = 10;
    int num2 = 20  //syntax error= ; missing
                   //correction= int num2 = 20;
    int result;

    printf("=== MENU ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1  //syntax error= ) missing
                    //correction= if(choice == 1)
    {
        result = num1 + num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 2)
    {
        result = num1 - num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 3))  //syntax error= extra )
                           //correction= else if(choice == 3)
    {
        result = num1 * num2;
        printf("Result = %d\n", result);
    }

    else if(choice == 4)
    {
        result = num1 / num2;
        printf("Result = %d\n", result);
    }

    else
    {
        printf("Invalid Choice\n");
    }

    for(int i=0; i<5; i++  //syntax error= ) missing
                            //correction= for(int i=0; i<5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    while(choice > 0  //syntax error= ) missing
                       //correction= while(choice > 0)
    {
        choice--;
    }

    do
    {
        printf("Processing...\n");
    }
    while(choice > 5)  //syntax error= ; missing
                       //correction= while(choice > 5);

    switch(choice)
    {
        case 1:
            printf("One\n");
            break;

        case 2  //syntax error= : missing
                //correction= case 2:
            printf("Two\n");
            break;

        default:
            printf("Other\n");
    }

    int marks = 80;

    if(marks >= 90)
    {
        printf("Grade A\n");
    }
    else if(marks >= 80)
    {
        printf("Grade B\n");
    }
    else if(marks >= 70)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }

    char grade = 'A;  //syntax error= closing ' missing
                      //correction= char grade = 'A';

    printf("Grade = %c\n", grade);

    int arr[5;  //syntax error= ] missing
                //correction= int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    printf("%d\n", arr[0]);

    if(arr[0] > 5)
    {
        printf("Greater\n");
    }

    {
        printf("Block Start\n");

        if(arr[1] > 10)
        {
            printf("Condition True\n");
        }

    printf("Still Running\n");  //syntax error= outer block ka } missing
                                //correction= add } before or after this line as per block

    for(int j=0; j<3; j++)
    {
        printf("%d\n", j);
    }

    printf("End of Program\n")  //syntax error= ; missing
                                //correction= printf("End of Program\n");

    return 0;
}

int add(int a, int b)
{
    return a + b;
}