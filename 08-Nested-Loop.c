// M-AbrarUlHaq-C-language.cpp
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n, first = 0, second = 1, next, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    /*
    system("cls");
    for (int a = 0; a <= 3; a++)
    {
        for (int b = 0; b <= 3; b++)
        {
            printf("%d%d\t", a, b);
        }
        printf("\n");
    }
    */
    /*
    int a = 0, b;
    while (a <= 3)
    {
            b = 0;
            while (b <= 3)
            {
                printf("%d%d\t", a, b);
                b++;
            }
            printf("\n");
            a++;
        }
        */
    /*
 int a = 0, b;
 do
 {
     b = 1;
     do
     {
         printf("%d%d\t", a, b);
         b++;
     } while (b <= 3);
     printf("\n");
     a++;
 } while (a <= 3);
 */
    /*
        system("cls");
        for (int a = 0; a <= 12; a++)
        {
            printf("%d x 2 = %d\n", a, a * 2);
        }
    */
    /*
    system("cls");
    int a = 0;
    do
    {
     printf("%d x 2 = %d\n", a, a * 2);
     a++;
 } while (a <= 12);
 */
    /*
        int i, j, rows, gap;
        printf("Enter number of rows: ");
        scanf("%d", &rows);
        for (i = 1; i <= rows; i++)
        {
            for (gap = 1; gap <= rows - i; gap++)
            {
                printf("  ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            for (j = i - 1; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    */
    /*
     int a = 12, b = 0;
     while (a >= b)
     {
         printf("%d x 2 = %d\n", a, a * 2);
         --a;
     }
 */

    return 0;
}
