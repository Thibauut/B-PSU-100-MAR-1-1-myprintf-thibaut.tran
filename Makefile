##
## EPITECH PROJECT, 2021
## B-PSU-100-MAR-1-1-myprintf-thibaut.tran
## File description:
## Makefile
##

SRC	=	src/check_type.c	\
		src/my_nblen.c	\
		src/my_printf.c	\
		src/my_put_nbr.c	\
		src/my_put_to_binary.c	\
		src/my_put_to_hexadecimal.c	\
		src/my_put_to_octal.c	\
		src/my_put_uns_nbr.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/my_strdup.c	\
		src/my_strlen.c

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