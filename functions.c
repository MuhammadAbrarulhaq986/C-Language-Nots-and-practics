// M-AbrarUlHaq-C-language.cpp
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//* first way to call a function
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
//* Second way
void iqra(void)
{
    printf("\nIqra University");
}
int main()
{
    system("cls");
    iqra();
    return 0;
}
*/
/*
//* This is another way to call a function.
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
    a = 5;
    b = 10;
    system("cls");
    c = sum(5, 10);
    printf("%d + %d = %d", a, b, c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
