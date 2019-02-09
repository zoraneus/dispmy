/*
** EPITECH PROJECT, 2018
** my_putfloat
** File description:
** display an float
*/

#include "my_display.h"

void my_putfloat(float nb, int sensibility)
{
    if (nb < 0){
        nb = nb * -1;
        my_putchar('-');
    }
    my_putnbr((int)nb);
    if (sensibility == 0)
        return;
    nb -= (int)nb;
    nb = nb * my_pow(10, sensibility);
    my_putchar('.');
    if ((int)nb == 0){
        my_putchar('0');
    }
    my_putnbr((int)nb);
}
