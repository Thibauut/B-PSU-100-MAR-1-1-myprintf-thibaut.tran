##
## EPITECH PROJECT, 2021
## B-PSU-100-MAR-1-1-myprintf-thibaut.tran
## File description:
## Makefile
##

SRC	=	src/my_printf.c	\
		src/my_strlen.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/my_put_nbr.c	\
		src/test.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all	:	$(NAME)	$(SRC)

$(NAME)	:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm	-f	*.o
	rm	-f	*~
	rm src/*.o

fclean :clean
	rm	-f	$(NAME)

re :	fclean	all