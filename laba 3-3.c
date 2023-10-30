/*Дана квадратная матрица размерности N. Обнулить элементы матрицы, лежащие
одновременно ниже главной и выше побочной диагонали. Вывести исходную и
преобразованную матрицу. Условный оператор не использовать*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int b;
    printf("введите количество элементов массива");
    scanf("%d", &n);
    int arr[n][n], i, j;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    for (int g = 1; g < ((n/2)); g++) // обнуление элементов массива нижe главной диагонали
    {
        for (int k = 0; k < g; k++)
        {
            arr[g][k] = 0;
        }
    }

    for (int q = (n/2); q < (n-1); q++) // обнуление элементов массива выше побочной
    {
        for (int l = 0; l < (n-q-1); l++)
         {
            arr[q][l] = 0;
         }
    }

    printf("\n NEW ARRAY: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}