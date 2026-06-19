```c
#include <stdio.h>

int main()
{
    int num;
    int marks;
    int year;
    int age;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 1)   //Logical Error: condition odd number check kar rahi hai but print Even ho raha hai
                       //Correction: if(num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    printf("\n");

    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks >= 90)    //Logical Error: 90 or above marks par Grade A hona chahiye
                       //Correction: printf("Grade A\n");
        printf("Grade B\n");
    else if(marks >= 80) //Logical Error: 80 or above marks par Grade B hona chahiye
                         //Correction: printf("Grade B\n");
        printf("Grade A\n");
    else if(marks >= 70)
        printf("Grade C\n");
    else if(marks >= 60)
        printf("Grade D\n");
    else
        printf("Fail\n");

    printf("\n");

    printf("Enter year: ");
    scanf("%d",&year);

    if(year % 4 == 0)   //Logical Error: Leap year condition incomplete hai
                        //Correction: if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

    printf("\n");

    printf("Enter age: ");
    scanf("%d",&age);

    if(age > 18)        //Logical Error: age 18 se jyada hai to eligible hona chahiye
                        //Correction: printf("Eligible for Voting\n");
        printf("Not Eligible for Voting\n");
    else
        printf("Eligible for Voting\n");

    printf("\n");

    int a = 10;
    int b = 20;

    if(a > b)           //Logical Error: Smaller number find karne ke liye condition wrong hai
                        //Correction: if(a < b)
        printf("Smaller Number = %d\n", a);
    else
        printf("Smaller Number = %d\n", b);

    printf("\n");

    int x = 10;
    int y = 20;
    int z = 30;

    int largest = x;

    if(y < largest)     //Logical Error: Largest number ke liye < ki jagah > hona chahiye
                        //Correction: if(y > largest)
        largest = y;

    if(z < largest)     //Logical Error: Largest number ke liye < ki jagah > hona chahiye
                        //Correction: if(z > largest)
        largest = z;

    printf("Largest Number = %d\n", largest);

    printf("\n");

    int totalMarks = 250;
    int subjects = 3;

    float average;

    average = totalMarks / subjects; //Logical Error: int division ho rahi hai
                                     //Correction: average = (float)totalMarks / subjects;

    printf("Average = %.2f\n", average);

    printf("\n");

    int radius = 7;

    float area;

    area = 2 * 3.14 * radius * radius; //Logical Error: Circle area formula wrong hai
                                       //Correction: area = 3.14 * radius * radius;

    printf("Circle Area = %.2f\n", area);

    printf("\n");

    int salary = 50000;

    float bonus;

    if(salary > 30000)
        bonus = salary * 0.02;   //Logical Error: salary > 30000 par 20% bonus hona chahiye
                                 //Correction: bonus = salary * 0.20;
    else
        bonus = salary * 0.20;   //Logical Error: else me 2% bonus hona chahiye
                                 //Correction: bonus = salary * 0.02;

    printf("Bonus = %.2f\n", bonus);

    printf("\n");

    int month = 4;

    switch(month)
    {
        case 1:
            printf("February\n"); //Logical Error: case 1 me January hona chahiye
                                  //Correction: printf("January\n");
            break;

        case 2:
            printf("March\n");   //Logical Error: case 2 me February hona chahiye
                                  //Correction: printf("February\n");
            break;

        case 3:
            printf("April\n");   //Logical Error: case 3 me March hona chahiye
                                  //Correction: printf("March\n");
            break;

        case 4:
            printf("May\n");     //Logical Error: case 4 me April hona chahiye
                                  //Correction: printf("April\n");
            break;

        default:
            printf("Invalid Month\n");
    }

    printf("\n");

    int n = 13;
    int isPrime = 1;

    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            isPrime = 1;  //Logical Error: factor milne par isPrime = 0 hona chahiye
                          //Correction: isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Not Prime\n"); //Logical Error: isPrime true hai to Prime print hona chahiye
                               //Correction: printf("Prime\n");
    else
        printf("Prime\n");     //Logical Error: else me Not Prime print hona chahiye
                               //Correction: printf("Not Prime\n");

    printf("\n");

    int purchaseAmount = 5000;

    float discount = 0;

    if(purchaseAmount > 1000)
        discount = 5;    //Logical Error: discount amount calculate nahi ho raha
                         //Correction: discount = purchaseAmount * 0.05;

    float finalAmount;

    finalAmount = purchaseAmount + discount; //Logical Error: discount minus hona chahiye
                                             //Correction: finalAmount = purchaseAmount - discount;

    printf("Final Amount = %.2f\n", finalAmount);

    printf("\n");

    int sum = 0;

    for(int i=1;i<=10;i++)
    {
        sum = i;        //Logical Error: sum me add karna chahiye
                        //Correction: sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    printf("\n");

    int temperature = 35;

    if(temperature < 40)
        printf("Cold Weather\n"); //Logical Error: 35 temperature cold nahi hota
                                  //Correction: printf("Hot Weather\n");
    else
        printf("Hot Weather\n");

    printf("\n");

    char grade = 'A';

    if(grade == 'A')
        printf("Average Performance\n"); //Logical Error: Grade A par Excellent Performance hona chahiye
                                         //Correction: printf("Excellent Performance\n");
    else
        printf("Excellent Performance\n");

    printf("\n");

    int length = 10;
    int width = 5;

    int rectangleArea;

    rectangleArea = length + width; //Logical Error: Rectangle area formula wrong hai
                                   //Correction: rectangleArea = length * width;

    printf("Rectangle Area = %d\n", rectangleArea);

    printf("\n");

    int percentage = 75;

    if(percentage >= 60)
        printf("Fail\n"); //Logical Error: percentage >= 60 par Pass hona chahiye
                          //Correction: printf("Pass\n");
    else
        printf("Pass\n"); //Logical Error: else me Fail hona chahiye
                          //Correction: printf("Fail\n");

    printf("\n");

    printf("Program Completed Successfully\n");

    return 0;
}
```
