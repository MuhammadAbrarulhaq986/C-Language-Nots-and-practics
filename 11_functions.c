#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
void iqra(void);

int main()
{
    system("cls");
    iqra();
    return 0;
}
void iqra(void)
{
    printf("\nIqra University");
}
*/
/*
void sum(int a, int b);
// The above line was missing
int main()
{
    system("cls");
    sum(2, 4);
    return 0;
}
void sum(int a, int b)
{
    printf("%d + %d = %d", a, b, a + b);
}
*/
int sum(int, int);
int main()
{
    int a, b, c;
    a = 2;
    b = 4;
    system("cls");
    c = sum(2, 4);
    printf("%d + %d = %d", a, b, c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
