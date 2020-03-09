
NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra
SRC		= *.c
OBJ		= $(SRC:%.c=%.o)
all:	$(NAME)

$(NAME):	
		gcc $(CFLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

norm:
		norminette -R CheckForbiddenSourceHeader $(SRC) libft.h
