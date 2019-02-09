##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for libmy
##

SRC	=	my_display/my_putchar.c \
		my_display/my_put_errchar.c \
		my_display/my_put_errstr.c \
		my_display/my_putfloat.c \
		my_display/my_putnbr.c \
		my_display/my_putstr.c \
		my_math/my_atoi.c \
		my_math/my_itoa.c \
		my_math/my_pow.c \
		my_math/my_sqrt.c \
		my_math/my_minmax.c \
		my_memory/my_smalloc.c \
		my_str/my_char_is.c \
		my_str/my_getnbr.c \
		my_str/my_revstr.c \
		my_str/my_strcat.c \
		my_str/my_strcat.c \
		my_str/my_strcmp.c \
		my_str/my_strcpy.c \
		my_str/my_strdup.c \
		my_str/my_str_isneg.c \
		my_str/my_str_isnum.c \
		my_str/my_strlen.c \
		my_str/my_strreplace.c \
		my_str/my_strstr.c \
		my_str/my_count_line.c \
		my_str/my_line_lenght.c \
		my_str/my_str_to_line_arr.c \
		my_str/my_line_lenght.c \
		my_str/my_str_to_word_arr.c \
		my_fs/my_file_readall.c \
		my_fs/my_file_size.c \
		my_fs/my_open.c \
		my_chained/my_chained_debug.c \
		my_chained/simple_chain.c \
		my_chained/double_chain.c \
		my_vector/my_simple_vector_basics.c \
		my_vector/my_vector_debug.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I ../include/ -c

NAME	=	my/libmy.a

all:
	gcc $(SRC) $(CFLAGS)
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
