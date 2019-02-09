/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** function for display an entire str
*/

#include "my_display.h"

void my_putstr(char const *str)
{
    write(1, str, s_strlen(str));
}
