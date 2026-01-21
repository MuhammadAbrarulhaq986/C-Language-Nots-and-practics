#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    /*
    int a = 0;
    printf("Type any sentence\n");
    while (getche() != '\r')
        a++;
    printf("\nTotal Characters typed = %d", a);
    */
    /*
    for (int a = 0; a <= 12; a++)
    {
        printf("%d x 2 = %d\n", a, a ^ 2);
    }
    */
    /*
    for (int a = 0; a <= 1; a++)
    {
        printf("%d x 2 = %d\n", a, a ^ 2);
        // In the for loop if we dont add a compare oprator it will on infinit loop
        //	wrong: for(int a = 0; 1; a++){}. Corrcet: 	for(int a = 0; a <= 1; a++){
        }
        */
    /*
    int a;
    while (a <= 5)
    {
        printf("%d x 2 = %d\n", a, a * 2);
        a++;
        // We need to add a Limit in while parameters
    }
    */
    int a = 0, b;
    while (a <= 3)
    {
        while (b <= 3)
        {
            printf("%d%d\t", a, b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}
