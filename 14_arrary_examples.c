#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*
int main()
{
    int arr[5];
    int last = -1;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Value %d for FILO: ", i + 1);
        scanf(" %d", &arr[i]);
        last = i;
        printf("Que: ");
        for (int j = 0; j <= last; j++)
        {
            printf(" %d ", arr[j]);
        }
    }
    printf("\nFinal FIFO: ");
    for (int k = 0; k < 5; k++)
        printf(" %d ", arr[k]);

    return 0;
}
*/
/*
int main()
{
    system("cls");
    int temp;
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 5; k++)
        printf(" %c", arr[k]);
    return 0;
}
*/
/*
int main()
{
    system("cls");
    int matrix[3][3];
    printf("Random 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = rand() % 100 + 1;
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
int main()
{
    system("cls");
    int temp;
    int arr[10];
    int last = -1;

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Value %d for FILO: ", i + 1);
        scanf(" %d", &arr[i]);
        last = i;
        printf("Current Array: ");
        for (int j = 0; j <= last; j++)
        {
            printf(" %d ", arr[j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nAscending order : ");
    for (int k = 0; k < 10; k++)
    {
        printf(" %d", arr[k]);
    }
    return 0;
}
*/
int main()
{
    system("cls");
    int arr[16] = {33, 4, 55, 42, 66, 22, 77, 21, 33, 34, 66, 88, 73, 2, 71, 23};
    int sum = 0;
    int maxCount = 0, mode;
    for (int i = 0; i < 16; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum: %d\n", sum);
    float mean = (float)sum / 16;
    printf("Mean Term: %.2f\n", mean);
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array (Ascending): ");
    for (int i = 0; i < 16; i++)
    {
        printf("%d ", arr[i]);
    }
    float median = (arr[7] + arr[8]) / 2.0;
    printf("\nMedian: %.2f\n", median);

    for (int i = 0; i < 16; i++)
    {
        int count = 0;
        for (int j = 0; j < 16; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }
    printf("\nMode: %d (appears %d times)", mode, maxCount);
    return 0;
}
