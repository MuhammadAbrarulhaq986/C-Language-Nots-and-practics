/*
#include <stdio.h>
float circle(float radius)
{
    float area = 3.142 * radius * radius;
    return area;
}
float rectangle(float width, float length)
{
    return width * length;
}
float triangle(float base, float height)
{
    return 0.5 * base * height;
}

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
        area = circle(r);
        printf("Area of Circle = %.2f", area);
        break;
    case 2:
        printf("Enter width: ");
        scanf("%f", &w);
        printf("Enter length: ");
        scanf("%f", &l);
        area = rectangle(w, l);
        printf("Area of Rectangle = %.2f", area);
        break;
    case 3:
        printf("Enter height: ");
        scanf("%f", &h);
        printf("Enter base: ");
        scanf("%f", &base);
        area = triangle(base, h);
        printf("Area of Triangle = %.2f", area);
        break;
    default:
        printf("Invalid choice! Enter 1, 2, 3...");
    }

    return 0;
}
*/

#include <stdio.h>
float calculateCGPA(int marks)
{
    if (marks >= 96 && marks <= 100)
        return 4.0;
    else if (marks >= 90 && marks <= 95)
        return 3.5;
    else if (marks >= 80 && marks <= 89)
        return 3.0;
    else if (marks >= 70 && marks <= 79)
        return 2.75;
    else if (marks >= 60 && marks <= 69)
        return 2.5;
    else if (marks >= 50 && marks <= 59)
        return 2.25;
    else if (marks >= 0 && marks <= 49)
        return 0.0;
    else
        return -1;
}
float calculatePercen(int marks)
{
    return (float)marks;
}
void printGrade(int marks)
{
    if (marks >= 96 && marks <= 100)
        printf("Grade A+");
    else if (marks >= 90 && marks <= 95)
        printf("Grade A");
    else if (marks >= 80 && marks <= 89)
        printf("Grade B+");
    else if (marks >= 70 && marks <= 79)
        printf("Grade B");
    else if (marks >= 60 && marks <= 69)
        printf("Grade C+");
    else if (marks >= 50 && marks <= 59)
        printf("Grade C");
    else
        printf("Grade F");
}
int main()
{
    int math, phy, elec, isla, comp;
    printf("Welcom to Mark Sheet Markit\n");
    printf("Please Enter your Marks (0 to 100): \n");

    printf("Math: ");
    scanf("%d", &math);
    printf("Physics: ");
    scanf("%d", &phy);
    printf("Electronic: ");
    scanf("%d", &elec);
    printf("islamiat: ");
    scanf("%d", &isla);
    printf("Computer Programing: ");
    scanf("%d", &comp);

    printf("\n========== MARK SHEET ==========");
    printf("\nMath: %d marks, ", math);
    printGrade(math);
    printf(", CGPA: %.2f", calculateCGPA(math));
    printf(", Percentage: %.0f%%", calculatePercen(math));

    printf("\nPhysics: %d marks, ", phy);
    printGrade(phy);
    printf(", CGPA: %.2f", calculateCGPA(phy));
    printf(", Percentage: %.0f%%", calculatePercen(phy));

    printf("\nElectronics: %d marks, ", elec);
    printGrade(elec);
    printf(", CGPA: %.2f", calculateCGPA(elec));
    printf(", Percentage: %.0f%%", calculatePercen(elec));

    printf("\nIslamiat: %d marks, ", isla);
    printGrade(isla);
    printf(", CGPA: %.2f", calculateCGPA(isla));
    printf(", Percentage: %.0f%%", calculatePercen(isla));

    printf("\nComputer Programing: %d marks, ", comp);
    printGrade(comp);
    printf(", CGPA: %.2f", calculateCGPA(comp));
    printf(", Percentage: %.0f%%", calculatePercen(comp));

    return 0;
}
