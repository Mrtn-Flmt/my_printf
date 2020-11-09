##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

MY	=	lib/my/

SRC	=	./main.c	\
		./$(MY)my_printf.c	\
		./$(MY)my_putchar.c \
		./$(MY)my_put_nbr.c	\
		./$(MY)my_putstr.c	\
		./$(MY)my_printf_char.c	\
		./$(MY)my_printf_str.c	\
		./$(MY)my_printf_nbr.c	\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include

NAME = a.out

$(NAME): $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
		rm -f clean $(OBJ)

fclean: clean
		rm -f $(NAME)

re:	fclean all