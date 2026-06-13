NAME = libft.a
SRC = $(shell find src -name "*.c")
OBJ = $(SRC:src/%.c=./%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

./%.o: src/%.c libft.h
	@cc -Wall -Wextra -Werror -I. -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
