// M-AbrarUlHaq-C-language.cpp
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    float num1 = 1, num2 = 1.0;
    int op;
    while (!(num1 == 0.0 && num2 == 0.0))
    {
        printf("Type 1 for addition and 2 for subtraction in Operator\n");
        printf("Type Number Operator Number: ");
        scanf("%f %d %f", &num1, &op, &num2);
        switch (op)
        {
        case 1:
            printf(" = %f", num1 + num2);
            break;
        case 2:
            printf(" = %f", num1 - num2);
            break;
        default:
            printf("Unknown Operator");
        }
        printf("\n\n");
    }

    /*
    system("cls");
    float num1, num2;
    char op;
    while (!(num1 == 0.0 && num2 == 0.0))
    {
        printf("Type Number Operator Number: ");
        scanf("%f %c %f", &num1, &op, &num2);
        switch (op)
        {
        case '+':
            printf(" = %f", num1 + num2);
            break;
        case '-':
            printf(" = %f", num1 - num2);
            break;
        default:
            printf("Unknown Operator");
        }
        printf("\n\n");
    }
    */
    /*
    system("cls");
    char ch;
    printf("Enter Name : ");
    while ((ch = getche()) != '\r')
    {
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) || ch == ' ')
            ;
        else
            printf("\b \b");
    }
*/
    /*
    float guss, incre;
    char cha;
    printf("Think of a number between 1 & 99\n");
    printf("Press 'G' for Grater\n");
    printf("Press 'L' for Less\n");
    printf("Press Enter for Exit\n");
    incre = guss = 50;
    while (incre > 1.0)
    {
        printf("Is your number grater,                      less or equal to %.0f\n", guss);
        incre /= 2;
        if ((cha = getch()) == 'e')
            break;
            else if (cha == 'g')
            guss += incre;
            else
            guss -= incre;
        }
        printf("You guessed %.0f\n", guss);
        */
    /*
    int cp;
    printf("Enter CP marks between 1 & 100\n");
    scanf("%d", &cp);
    if (cp >= 0 && cp <= 100)
    {
        if (cp >= 75)
        {
            printf("\nGrade A");
        }
        else if (cp >= 50)
        {
            printf("\nGrade C");
        }
        else
        {
            printf("\nIncorrect Input");
        }
    }
    */
    /*
    char ch;
    int chr = 0, wrd = 1;
    printf("Type any sentence\n");
    while ((ch = getche()) != '\r')
    {
        chr++;
        if (ch == '\n')
        {
            wrd++;
            chr--;
        }
    }
    printf("Total Characters = %d\n", chr);
    printf("Total Word = %d\n", wrd);
    getch();
    */
    return 0;
}
