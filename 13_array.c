#include <stdio.h>
#include <math.h>
int main()
{
    /*
    int arr[4][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}},
        {{13, 14}, {15, 16}, {17, 18}},
        {{19, 20}, {21, 22}, {23, 24}},
        };
        printf("%d", arr[2][1][0]);
    */
    /*
     int arr[5] = {8, 6, 3, 7, 2};
     int val, i, found = 0;
     for (i = 0; i <= 4; i++)
         printf("%d", arr[i]);
     printf("\nFrom the above enter one value to search [8,6,3,7,2]: ");
     scanf("%d", &val);
     while (arr[found] != val)
     {
         found++;
     }
     printf("Location of %d is %d", val, found + 1);
    */
    /*
    system("cls");
    int arr[5] = {0, 0, 0, 0, 0};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 5; j >= 0; j--)
            {
                arr[j] = arr[j - 1];
            }
            printf("Enter Value for FILO\n");
            scanf("%d", &arr[0]);
            for (int k = 0; k < 5; k++)
                printf(" %d", arr[k]);
            //	retrun 0; This is not letting us run the code.
            //	system("cls"); This is not showing the process.
        }
        for (int l = 0; l < 5; l++)
        printf("\n%d", arr[l]);
        */
    /*
 int temp;
 int arr[5] = {23, 16, 97, 33, 42};
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
     printf(" %d", arr[k]);
*/
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (rand() % 100) + 1;
        printf("%d ", arr[i]);
    }

    return 0;
}
