#include <stdio.h>

// int main()
////*Task-01: Basic Arithmetic Operations
//{
//    int a, b;

//    printf("Enter two values:\n");
//    scanf("%d %d", &a, &b);

//    printf("Addition: %d\n", a + b);
//    printf("Subtraction: %d\n", a - b);
//    printf("Multiplication: %d\n", a * b);
//    printf("Division: %d\n", a / b);
//    printf("Modulus: %d\n", a % b);

//    return 0;
//}

// int main()
////*Task-02 Area and Perimeter of Rectangle
//{
//    int length, width, area, perimeter;

//    printf("Enter length of rectangle: ");
//    scanf("%d", &length);

//    printf("Enter width of rectangle: ");
//    scanf("%d", &width);

//    area = length * width;
//    perimeter = 2 * (length + width);

//    printf("Area of rectangle: %d\n", area);
//    printf("Perimeter of rectangle: %d\n", perimeter);

//    return 0;
//}

// int main()
//{
//     //*Task-03: Average of Three Numbers
//     int a, b, c;
//     float average;

//    printf("Enter first number: ");
//    scanf("%d", &a);

//    printf("Enter second number: ");
//    scanf("%d", &b);

//    printf("Enter third number: ");
//    scanf("%d", &c);

//    average = (a + b + c) / 3.0;

//    printf("Average is: %.2f\n", average);

//    return 0;
//}

// int main()
//{
//     //* Task - 04 : Convert Days into Years, Weeks, Days
//     int totalDays, years, weeks, days;

//    printf("Enter total days: ");
//    scanf("%d", &totalDays);

//    years = totalDays / 365;
//    weeks = (totalDays % 365) / 7;
//    days = (totalDays % 365) % 7;

//    printf("%d days = %d years, %d weeks, %d days\n",
//           totalDays, years, weeks, days);

//    return 0;
//}

// int main()
//{
//     //*Task - 05 : Range Check(10–50)
//     int num;

//    printf("Enter a number: ");
//    scanf("%d", &num);

//    if (num >= 10 && num <= 50)
//        printf("Number is between 10 and 50\n");
//    else
//        printf("Number is NOT between 10 and 50\n");

//    return 0;
//}

// int main()
//{
//     //*Task - 06 : Positive OR Even Check
//     int num;

//    printf("Enter a number: ");
//    scanf("%d", &num);

//    if (num > 0 || num % 2 == 0)
//        printf("Number is positive or even\n");
//    else
//        printf("Number is neither positive nor even\n");

//    return 0;
//}

// int main()
//{
//     //*Task - 07 : Student Pass / Fail
//     int mathMarks, englishMarks;

//    printf("Enter Math marks: ");
//    scanf("%d", &mathMarks);

//    printf("Enter English marks: ");
//    scanf("%d", &englishMarks);

//    if (mathMarks >= 40 && englishMarks >= 40)
//        printf("Student Passed\n");
//    else
//        printf("Student Failed\n");

//    return 0;
//}

// int main()
//{
//     //*Task - 08 : Complex Logical Conditions
//     int n1, n2, n3;

//    printf("Enter three numbers: ");
//    scanf("%d %d %d", &n1, &n2, &n3);

//    printf("All positive: %s\n",
//           (n1 > 0 && n2 > 0 && n3 > 0) ? "Yes" : "No");

//    printf("At least one even: %s\n",
//           (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0) ? "Yes" : "No");

//    printf("Not all divisible by 5: %s\n",
//           (n1 % 5 == 0 && n2 % 5 == 0 && n3 % 5 == 0) ? "No" : "Yes");

//    return 0;
//}

int main()
{
    //*Task - 09 : Assignment Operators
    int numA, numB, result;

    printf("Enter two numbers A and B: ");
    scanf("%d %d", &numA, &numB);

    result = numA;
    result += numB;
    printf("After += : %d\n", result);

    result = numA;
    result -= numB;
    printf("After -= : %d\n", result);

    result = numA;
    result *= numB;
    printf("After *= : %d\n", result);

    return 0;
}