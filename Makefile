SRC = $(shell find src -name "*.c")
OBJ = $(SRC:src/%.c=obj/%.o)

all: a.out

a.out: $(OBJ)
	@ar rcs a.out $(OBJ)

obj/%.o: src/%.c libft.h
	mkdir -p $(dir $@)
	@cc -Wall -Wextra -Werror -I. -c $< -o $@

clean:
	rm -rf obj
	@echo "Obj removed"

fclean: clean
	rm -f a.out
	@echo "Exec rm"

re: fclean all

.PHONY: all clean fclean re
