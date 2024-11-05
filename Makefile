CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_strlen.c	ft_memset.c ft_bzero.c \
       ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
       ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)
HFILE = libft.h
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c $(HFILE)
	@echo "compiling c files into o files..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "removing objs files..."; 
	@rm -f $(OBJS)

fclean: clean
	@echo "removing lib and objs..."
	@rm -f $(NAME)

test:
	@echo "testing..."
	cd libftTester; \
		make a
	make fclean

re: fclean all
