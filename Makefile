CC			= cc
CFLAGS 	= -Wall -Wextra -Werror -I.
AR = ar
ARFLAGS = rcs

SRCDIR 	= src
OBJDIR	= obj

NAME		= libft.a
HEADER  = libft.h

SRC			= $(shell find $(SRCDIR) -name "*.c")
OBJ 		= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME) : $(OBJ)
		@$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADER)
		mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
		@mkdir -p $(OBJDIR)

clean:
		rm -rf $(OBJDIR)
		@echo "Obj removed"

fclean: clean
		rm -f $(NAME)
		@echo "Exec rm"

re: fclean all

.PHONY: all clean fclean re