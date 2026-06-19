#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80, 75, 90, 85, 95};

    printf("Student Marks\n");

    for(int i=0; i<=5; i++)   //Logical Error: array index out of bounds
                              //Correction: for(int i=0; i<5; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\n");

    int total = 0;

    for(int i=0; i<5; i++)
    {
        total += marks[i];
    }

    float average;

    average = total / 5;      //Logical Error: integer division
                              //Correction: average = (float)total / 5;

    printf("Average = %.2f\n", average);

    printf("\n");

    int numbers[10];

    for(int i=1; i<=10; i++)  //Logical Error: array index out of bounds
                              //Correction: for(int i=0; i<10; i++)
    {
        numbers[i] = i * 10;  //Logical Error: value starts from 0 after correction
                              //Correction: numbers[i] = (i + 1) * 10;
    }

    printf("Numbers Array\n");

    for(int i=0; i<10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    char name[10];            //Runtime Error: array size too small
                              //Correction: char name[20];

    strcpy(name, "ComputerScience");

    printf("%s\n", name);

    printf("\n");

    char city[20] = "Jaipur";

    city = "Delhi";           //Syntax Error: array cannot be assigned directly
                              //Correction: strcpy(city, "Delhi");

    printf("%s\n", city);

    printf("\n");

    char str1[20] = "Hello";
    char str2[20] = "Hello";

    if(str1 == str2)          //Logical Error: wrong string comparison
                              //Correction: if(strcmp(str1, str2) == 0)
    {
        printf("Strings are Equal\n");
    }
    else
    {
        printf("Strings are Different\n");
    }

    printf("\n");

    char password[8];         //Runtime Error: array size may be small
                              //Correction: char password[20];

    printf("Enter Password: ");
    gets(password);           //Runtime Error: gets() is unsafe
                              //Correction: scanf("%s", password);

    printf("Password = %s\n", password);

    printf("\n");

    char firstName[20] = "Robil";
    char lastName[20] = "Varshney";

    strcat(firstName, lastName);

    printf("%s\n", firstName);

    printf("\n");

    char grade[5];

    grade[0] = 'A';
    grade[1] = '+';
                              //Logical Error: null character missing
                              //Correction: grade[2] = '\0';

    printf("%s\n", grade);

    printf("\n");

    int arr[5] = {1,2,3,4,5};

    printf("%d\n", arr[-1]);  //Runtime Error: negative index invalid
                              //Correction: printf("%d\n", arr[0]);

    printf("\n");

    char department[10];

    scanf("%s", department);

    printf("%s\n", department);

    printf("\n");

    char email[15] = "student@gmail.com"; //Runtime Error: array size too small
                                          //Correction: char email[20] = "student@gmail.com";

    printf("%s\n", email);

    printf("\n");

    int scores[3];            //Runtime Error: array size too small
                              //Correction: int scores[4];

    scores[0] = 90;
    scores[1] = 80;
    scores[2] = 70;
    scores[3] = 60;

    printf("%d\n", scores[3]);

    printf("\n");

    char subject[10] = "Programming"; //Runtime Error: array size too small
                                      //Correction: char subject[12] = "Programming";

    printf("%s\n", subject);

    printf("\n");

    char username[20];

    printf("Enter Username: ");
    scanf("%s", username);

    if(username == "admin")   //Logical Error: wrong string comparison
                              //Correction: if(strcmp(username, "admin") == 0)
    {
        printf("Valid User\n");
    }
    else
    {
        printf("Invalid User\n");
    }

    printf("\n");

    char mobile[10];          //Runtime Error: array size too small
                              //Correction: char mobile[13];

    strcpy(mobile, "987654321012");

    printf("%s\n", mobile);

    printf("\n");

    int attendance[5] = {1,1,1,1,1};

    int present = 0;

    for(int i=0; i<=5; i++)   //Logical Error: array index out of bounds
                              //Correction: for(int i=0; i<5; i++)
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char course[20] = "C Programming";

    printf("%c\n", course[20]); //Runtime Error: index out of bounds
                                //Correction: printf("%c\n", course[0]);

    printf("\n");

    char college[20];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';
                                //Logical Error: null character missing
                                //Correction: college[5] = '\0';

    printf("%s\n", college);

    printf("\n");

    int rollNo[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d", &rollNo[i]);
    }

    printf("\nRoll Numbers\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ", rollNo[i]);
    }

    printf("\n");

    char section[3] = "IT-A"; //Runtime Error: array size too small
                              //Correction: char section[5] = "IT-A";

    printf("%s\n", section);

    printf("\n");

    printf("Program Finished\n");

    return 0;
}