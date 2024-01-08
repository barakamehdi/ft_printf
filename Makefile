NAME = libftprintf.a

CC = cc

CFLAGS += -Werror -Wextra -Wall

  SOURCES = ft_putchar.c ft_putnbr.c ft_puthex_upper.c \
			ft_puthex_lower.c ft_putstr.c ft_putptr.c \
			ft_putunsigned.c ft_printf.c


OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
