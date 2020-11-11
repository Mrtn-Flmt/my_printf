##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile for printf
##

MY	=	lib/my/

INC = 	-include ./include/my.h

SRC	=	./$(MY)my_printf.c	\
		./$(MY)my_putchar.c \
		./$(MY)my_put_nbr.c	\
		./$(MY)my_putstr.c	\
		./$(MY)my_printf_char.c	\
		./$(MY)my_printf_str.c	\
		./$(MY)my_printf_nbr.c	\
		./$(MY)my_printf_bin.c

OBJ = $(SRC:.c=.o)

LIB = -L ./lib -my

CFLAGS += -Wall -Wextra -g

NAME = libmy.a

$(NAME): $(OBJ)
		gcc -c $(CFLAGS) $(INC) $(SRC)
		ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f clean $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all