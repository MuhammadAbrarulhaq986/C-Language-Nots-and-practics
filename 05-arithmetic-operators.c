#include <stdio.h>
#include <math.h>
// #include <conio.h>
//  #include <stdlib.h>
int main()
{
    float kiloMe, meters;
    printf("Enter Distance in Kilometers: ");
    scanf("%f", &kiloMe);
    meters = kiloMe * 1000;
    printf("Kilometers: %.2f is equal to Meters: %.2f\n", kiloMe, meters);

    // Task:2
    int num2, square, cube;
    printf("Enter a num2ber to check its Square and Cube:");
    scanf("%d", &num2);
    square = num2 * num2;
    cube = num2 * num2 * num2;
    printf("Square of %d is: %d\n", num2, square);
    printf("Cube of %d is: %d\n", num2, cube);

    // Task:3
    int num3, sum;
    printf("Enter four digit: ");
    scanf("%d", &num3);
    sum = (num3 % 10) + ((num3 / 10) % 10) + ((num3 / 100) % 10) + (num3 / 1000);
    printf("The sum of your digit: %d", sum);

    // Task: 4
    int num4;
    printf("Enter a number to print a table: ");
    scanf("%d", &num4);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num4, i, num2 * i);
    }

    // Task: 5
    float x, result;
    printf("Enter a Value for x: ");
    scanf("%f", &x);
    result = 3 * pow(x, 4) + 4 * pow(x, 3) + pow(x, 2) + 7 * x + 9;
    printf("Result = %.2f", result);

    /*
    float x, result;
    printf("Enter a Value for x: ");
    scanf("%f", &x);
    result = 3 * pow(x, 4) * sin(180 * x * M_PI / 180.0) + 4 * pow(x, 3) * cos(90 * x * M_PI / 180.0) + pow(x, 2) * sin(tan(45 * M_PI / 180.0)) + 7 * x + 9 * cos(90 * pow(x, 2) * M_PI / 180.0);
    printf("Result = %.4f", result);
*/
    return 0;
}

/*
float a = 45, b = 1, sn, cs, tn, snh, csh, tnh;
sn = sin(a);
cs = cos(a);
tn = tan(a);

snh = sinh(b);
csh = cosh(b);
tnh = tanh(b);

printf("\n\n\n Trignometric Functions");
printf("\n Sin 45 %.2f", sn);
printf("\n Cos 45 = %.2f", cs);
printf("\n Tan 45 %.2f", tn);
printf("\n\n\n Hyperbolic Functions");
printf("\n SanH 1 %.2f", snh);
printf("\n CoSH 1 %.2f", csh);
printf("\n TanH 1 = %.2f", tnh);
*/

/*
float a = 45, b = 1, sn, cs, tn, snh, csh, tnh;
 sn = sin(a);
 cs = cos(a);
 tn = tan(a);
 snh = sinh(b);
 csh = cosh(b);
 tnh = tanh(b);
 printf("\n\n\n--Trignometric Functions--");
 printf("\n Sin 45%.2f", sn);
 printf("\n Cos 45 = %.2f", cs);
 printf("\n Tan 45 %.2f", tn);
 printf("\n\n\n--Hyperbolic Functions--");
 printf("\n SanH 1 = %.2f", snh);
 printf("\n CoSH 1 %.2f", csh);
 printf("\n TanH 1 = %.2f", tnh);
 printf("\n\n\--Math Functions--");
 printf("\n pow 2.3 %.2f", pow(2, 3));
 printf("\n sqrt 2.3 %.2f", sqrt(49));
*/

// M-AbrarUlHaq-C-language.cpp

// system("cls");
/*
int a = 2, b = 4, c1, c2, c3, c4, d1, d2, d3, d4;
c1 = c2 = c3 = c4 = 5;
d1 = d2 = d3 = d4 = 8;
printf("Arithmetic operations");
printf("\n a+b=%d, a-b= %d, a*b= %d, a/b= %d", a + b, a - b, a * b, a / b);
printf("\n Relational operations");
printf("\n a>b %d, a<b %d, a>=b %d, a<=b %d, a==b %d, a!=b %d", a > b, a < b, a >= b, a <= b, a == b, a != b);
printf("\n Assignment operations");
printf("\n c1+=%d, c2-= %d, c3*= %d, c4/3 %d", c1 += 3, c2 - 3, c3 = 3, c4 / 3);
printf("\n Increment/Decrement operations");
printf("\n d1++%d, ++d2 %d, d3--%d, --d4%d", d1++, ++d2, d3--, --d4);
*/
/*
int a = 5;
printf("\na++%d.\na = %d.", a++, a);
printf("\na = %d.", a);
*/
/*
    int a = 5;
    printf("\na-- %d, a = %d", a--, a);
    printf("\na = %d", a);
*/
/*
 int a = 5;
 printf("\n--a %d\n a = %d", --a, a);
 printf("\na = %d", a);
 */
/*
int a = 5;
printf("\na-=%d\n--a %d\na = %d", a -= 5, --a, a);
printf("\na = %d", a);
*/
/*
 int a = 5;
 printf("\na += %d\n++a %d\na = %d", a += 5, a++, a);
 printf("\na = %d", a);
*/
