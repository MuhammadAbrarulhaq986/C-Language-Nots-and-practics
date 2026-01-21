// M-AbrarUlHaq-C-language.cpp
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int op;
    float area, r, l, w, base, h;
    printf("Area calculator\n");
    printf("For Area of Circle press: 1\n");
    printf("For Area of Rectangle press: 2\n");
    printf("For Area of the Triangle press: 3\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter radius: ");
        scanf("%f", &r);
        area = 3.142 * r * r;
        printf("Area of Circle = %.2f", area);
        break;
    case 2:
        printf("Enter width: ");
        scanf("%f", &w);
        printf("Enter length: ");
        scanf("%f", &l);
        area = w * l;
        printf("Area of Rectangle = %.2f", area);
        break;
    case 3:
        printf("Enter height: ");
        scanf("%f", &h);
        printf("Enter base: ");
        scanf("%f", &base);
        area = (h * base) / 2;
        printf("Area of the Triangle = %.2f", area);
        break;
    default:
        printf("Invalid choice! Enter 1, 2, or 3.");
    }
    getch();
    return 0;
}

/* Calclulate Grade and GPA
int cp;
printf("Enter CP marks between 1 & 100\n");
scanf("%d", &cp);
if (cp >= 96 && cp <= 100)
{
    printf("\nGrade A+, GPA: 4");
}
else if (cp >= 90 && cp <= 95)
{
    printf("\nGrade A, GPA: 3.5");
}
else if (cp >= 80 && cp <= 89)
{
    printf("\nGrade B+, GPA: 3");
}
else if (cp >= 70 && cp <= 79)
{
    printf("\nGrade B, GPA: 2.75");
}
else if (cp >= 60 && cp <= 69)
{
    printf("\nGrade C+, GPA: 2.5");
}
else if (cp >= 50 && cp <= 59)
{
    printf("\nGrade C, GPA: 2.25");
}
else if (cp >= 0 && cp <= 49)
{
    printf("\nGrade F, GPA: 2");
}
else
{
    printf("\nIncorrect Input");
}
return 0;
}

*/