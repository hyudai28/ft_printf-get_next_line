NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SOURCE_FILE = ft_printf.c \
			printf_excute.c \
			printf_hex.c \
			printf_pr.c \
			printf_pr02.c \
			libft_utils.c \
			libft_utils02.c \

OBJECT_FILE = $(SOURCE_FILE:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECT_FILE)
	ar rcs $(NAME) $(OBJECT_FILE)

clean:
	rm -f $(OBJECT_FILE)
	make clean -C ./libft/

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean
