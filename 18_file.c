#include <stdio.h>
/*
int main()
{

FILE *fp;
char buff[255];

fp = fopen("test.txt", "r"); // this onlt works in Linux/Mac: /tmp/test.txt . not on windos
fscanf(fp, "%s", buff);
printf("1 : %s\n", buff);

fgets(buff, 255, (FILE *)fp);
printf("2: %s\n", buff);

fgets(buff, 255, (FILE *)fp);
printf("3: %s\n", buff);
fclose(fp);

return 0;
}
*/
/*
int main()
{
    FILE *fp;
    int num;
    fp = fopen("program.txt", "w"); // this onlt works in Linux/Mac: /tmp/test.txt . not on windos

    if (fp == NULL)
    {
        printf("Error creating file!\n");
        return 1;
    }
    printf("Enter an integer number: ");
    scanf("%d", &num);

    fprintf(fp, "%d", num);
    printf("Number %d written to program.txt\n", num);
    fclose(fp);

    return 0;
}
*/
int main()
{
    FILE *fp;
    int num;
    fp = fopen("program.txt", "r"); // this onlt works in Linux/Mac: /tmp/test.txt . not on windos

    if (fp == NULL)
    {
        printf("Error creating file!\n");
        printf("Run Program 1 first to create the file.\n");
        return 1;
    }
    printf("Enter an integer number: ");
    scanf("%d", &num);

    fprintf(fp, "%d", num);
    printf("Number read from file %d\n", num);
    fclose(fp);

    return 0;
}
