CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = 
OBJS = $(SRCS: .c = .o)
NAME = libft.a

all: $(NAME)

clean:

fclean: clean

re:
