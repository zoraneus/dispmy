/*
** EPITECH PROJECT, 2018
** my_put_errstr
** File description:
** put an str on the standard err output
*/
#include "my.h"

void my_put_errstr(char const *str)
{
    write(2, str, my_strlen(str));
}
