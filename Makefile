CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
       ft_isalpha.c  ft_isdigit.c  ft_memset.c ft_bzero.c \
       ft_memcpy.c
OBJS = $(SRCS:.c=.o)
HFILE = libft.h
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HFILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

test:
	cd ../libftTester; \
		make a
	make fclean

re: fclean all
