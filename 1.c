//Пользователь вводит количество секунд, прошедших с начала суток. Вывести , прошедших с начала последней минуты.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int get_info;
    int integer;
    int get_off_integer;

    printf("Введите количество секунд, прошедших с начала суток: ");
    scanf("%d", &get_info);
    integer=get_info/60;
    get_off_integer=get_info-(integer*60);

    printf("Количество секунд, прошедших с начала последней минуты: %4d\n", get_off_integer);
}
void Hello(){
    printf("Heelloo");
}