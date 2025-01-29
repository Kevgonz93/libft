NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard src/*.c)
SRCS_BONUS	=	$(wildcard bonus/*.c)
SRCS_ALL = $(SRCS) $(SRCS_BONUS)

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
OBJS_ALL = $(SRCS_ALL:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_ALL)
		ar -cr $(NAME) $(OBJS_ALL)

bonus: ${NAME} bonus_complete

bonus_complete: $(OBJS_BONUS)
		ar -cr $(NAME) $(OBJS_BONUS)
		touch bonus_complete

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	rm -f bonus_complete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus bonus_complete clean fclean re