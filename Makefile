CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
       ft_isalpha.c ft_isdigit.c ft_memset.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
