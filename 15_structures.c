#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
int main()
{
    system("cls");

    struct iqra
    {
        char chr;
        int num;
    } iq1, iq2;

    iq1.chr = 'a';
    iq1.num = 1;
    iq2.chr = 'b';
    iq2.num = 2;

    printf("\niq1.chr = %c \t iq1.num = %d", iq1.chr, iq1.num);
    printf("\niq2.chr = %c \t iq2.num = %d", iq2.chr, iq2.num);

    return 0;
}
*/
/*
int main()
{
    system("cls");
    struct iqra
    {
        char chr;
        int num;
    };
    struct iqra iq1 = {'a', 1};
    struct iqra iq2 = {'b', 2};

    printf("\niq1.chr = %c \t iq1.num = %d", iq1.chr, iq1.num);
    printf("\niq2.chr = %c \t iq2.num = %d", iq2.chr, iq2.num);

    return 0;
}
*/

int main()
{
    system("cls");
    struct iqra
    {
        char name[25];
        int num;
    };
    struct iqra iq1 = {"Engineering", 1};
    struct iqra iq2 = {"Media Science", 2};
    struct iqra iq3 = {"Management", 3};
    struct iqra iq4 = {"Computer Science", 4};
    struct iqra iq5 = {"Fashion Design", 5};

    printf("\nDepartment = %s \t\t Department Code = %d", iq1.name, iq1.num);
    printf("\nDepartment = %s \t\t Department Code = %d", iq2.name, iq2.num);
    printf("\nDepartment = %s \t\t Department Code = %d", iq3.name, iq3.num);
    printf("\nDepartment = %s \t\t Department Code = %d", iq4.name, iq4.num);
    printf("\nDepartment = %s \t\t Department Code = %d", iq5.name, iq5.num);

    return 0;
}
