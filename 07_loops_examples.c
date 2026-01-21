#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    system("cls"); // clear screen system("cls");
    int num = -1;
    int sum = 0;

    printf("\nEnter 0 to stop adding the numbers");
    while (num != 0)
    {
        printf("\nEnter Number: ");
        scanf("%d", &num); // this was fixed

        sum = sum + num;
    }
    printf("\nSum = %d ", sum);
    */
    /*
     int a = 0, b;
     for (a = 0; a <= 3; a++)
     {
         b = 0;
         while (b <= 3)
         {
             printf("%d%d\t", a, b);
             b++;
         }
         printf("\n");
     }
     int a1 = 0, b1;
     while (a1 <= 3)
     {
         for (b1 = 0; b1 <= 3; b1++)
         {
             printf("%d%d\t", a1, b1);
         }
         printf("\n");
         a1++;
     }
 */
    /*
        int i;
        double number, sum = 0.0;

        for (i = 1; i <= 10; ++i)
        {
            printf("To exit press n\nEnter a n%d: ", i);
            scanf("%lf", &number);

            // If user enters negative number, loop is terminated
            if (number < 0.0)
            {
                break;
            }
            sum += number; // sum = sum + number;
        }
        printf("Sum = %.2lf", sum);
        */
    /*
     int i;
     double number, sum = 0.0;

     for (i = 1; i <= 10; ++i)
     {
         printf("To exit press n\nEnter a n%d: ", i);
         scanf("%lf", &number);

         // If user enters negative number, loop is terminated
         if (number < 0.0)
         {
             continue;
         }
         sum += number; // sum = sum + number;
     }
     printf("Sum = %.2lf", sum);
     */
    /*
        int n, i;
        unsigned long long fact = 1; // For larger numbers

        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Error! Factorial of negative number doesn't exist.");
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d = %llu\n", n, fact); // %llu for unsigned long long
        }
    */
    int i, j, rows, gap;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (gap = 1; gap <= rows - i; gap++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}