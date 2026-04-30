NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_print_addr.c ft_printf.c ft_print_hexa.c ft_print_str.c \
	ft_print_char.c ft_printf.h ft_print_number.c ft_print_unsigned.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
