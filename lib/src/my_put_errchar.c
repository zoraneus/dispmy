/*
** EPITECH PROJECT, 2018
** my_put_errchar
** File description:
** display an char on err output
*/

#include "my.h"

void my_put_errchar(char c)
{
    write(2, &c, 1);
}
