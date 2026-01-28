#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
int main()
{
    system("cls");
    struct student
    {
        char name[25];
        char gender;
        int rollNum;
        float marks;
    };
    struct student stu1 = {"M.Abrarulhaq", 'M', 123, 5.0};
    struct student stu2 = {"Gojo Saturo", 'M', 321, 10.0};
    struct student stu3 = {"Mikasa Ackerman", 'F', 231, 8.0};
    struct student stu4 = {"Yoruichi Shihouin", 'F', 312, 9.0};

    printf("\Name = %s\t Gender = %c\t Roll Number = %d\tMarks = %.2f\n", stu1.name, stu1.gender, stu1.rollNum, stu1.marks);
    printf("\Name = %s\t Gender = %c\t Roll Number = %d\tMarks = %.2f\n", stu2.name, stu2.gender, stu2.rollNum, stu2.marks);
    printf("\Name = %s\t Gender = %c\t Roll Number = %d\tMarks = %.2f\n", stu3.name, stu3.gender, stu3.rollNum, stu3.marks);
    printf("\Name = %s\tGender = %c\tRoll Number = %d\tMarks = %.2f\n", stu4.name, stu4.gender, stu4.rollNum, stu4.marks);
    return 0;
}
*/

int main()
{
    system("cls");
    struct distance
    {
        int feet;
        float inch;
    } d1, d2, result;

    printf("Enter First distances (Feets & Inches): ");
    scanf("%d %f", &d1.feet, &d1.inch);
    printf("Enter Second distances (Feets & Inches): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    if (result.inch >= 12.0)
    {
        result.feet++;
        result.inch -= 12.0;
    }
    printf("Result %d Feet\t %.f Inches\n", result.feet, result.inch);
    return 0;
}
