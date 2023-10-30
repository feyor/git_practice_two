// Дан целочисленный массив размера N.
// Заменить нулевыми значениями все локальные минимумы.
// Локальный минимум – элемент, который меньше любого из своих соседей.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* massive; // инициализация массива с элементами

int main()
{

    int n;
    printf("Введите кол-во элементов: ");
    scanf("%d", &n);
    printf("\n");

    massive = (int*)malloc(sizeof(int)*n);

    
    srand(time(NULL)); // "подключение рандома (установка SEED)"
    int i;
    for (int i = 0; i < n; i++) // заполнение массива
    {
        massive[i] = rand() % n; // заполнение рандомными значениями в промежутке [0;20]
    }

    printf("ОРИГИНАЛЬНЫЙ МАССИВ:\n");

    for (int i = 0; i < n; i++) // вывод массива
    {
        printf("%d элемент массива: %d\n", i, massive[i]); // вывод элементов массива
    }

    printf("\n");
    
    for (int g = 1; g < (n-1); g++) //замена локальных минимумов
    {
        if (massive[g] < massive[g + 1] && massive[g] < massive[g - 1])
        {
            massive[g] = 0;
        }
        else
            continue;
    }

    printf("НОВЫЙ (ЗАМЕНЕННЫЙ) МАССИВ:\n");

    for (int i = 0; i < n; i++) // вывод массива
    {
        printf("%d элемент массива: %d\n", i, massive[i]); // вывод элементов массива
    }
}