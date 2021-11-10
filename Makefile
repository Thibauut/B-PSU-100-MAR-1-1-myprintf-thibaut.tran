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
		src/check_type.c	\
		src/nb_to_binary.c	\
		src/my_super_putstr.c	\
		src/my_getnbr.c	\
		src/my_strcpy.c	\
		src/str_to_octal.c

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