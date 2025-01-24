SOURCES = Sully.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

CFLAGS = -Wall -Wextra -Werror # -fsanitize=address #-g

NAME = Sully

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	cc $(OBJ) $(CFLAGS) -o $(NAME)

clean: c
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

c:
	@rm -f Sully_*

re: fclean all

.PHONY: all clean fclean re
