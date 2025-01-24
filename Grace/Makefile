SOURCES = Grace.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

CFLAGS = -Wall -Wextra -Werror # -fsanitize=address #-g

NAME = Grace

all: $(NAME) diff

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	cc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f Grace_kid.c diff_file

fclean: clean
	@rm -f $(NAME)

re: fclean all

diff:
	@./Grace
	@diff Grace.c Grace_kid.c > diff_file

.PHONY: all clean fclean re
