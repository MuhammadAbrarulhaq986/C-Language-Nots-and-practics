#include <stdio.h>
/*
int main()
{
    static char *s[] = {"Black", "White", "Pink", "Violet"};
    char **ptr[] = {s + 3, s + 2, s + 1, s};
    char ***p;
    p = ptr;
    ++p;
    printf("%s\n", **p + 1); // this will print: ink
    printf("%s", **p);       // THis will print: Pink
    return 0;
}
*/
/*
int main()
{
    int i = 3, *j, k;
    j = &i;
    printf("%d\n", i * *j * i + *j);
    printf("%d\n", i * (*j) * i + (*j)); // for me to understand
    return 0;
}
*/
/*
int main()
{
    char str[20] = "Hello";
    char *const p = str;
    *p = 'M';
    printf("%s\n", str);
    return 0;
}
*/
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int *ptrArr[5];
    for (int i = 0; i < 5; i++)
    {
        ptrArr[i] = &num[i];
        printf("%p\n", ptrArr[i]);  // ForAddresses
        printf("%d\n", *ptrArr[i]); // ForArrayValues
    }
    return 0;
}
