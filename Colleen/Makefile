SOURCES = Colleen.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))

CFLAGS = -Wall -Wextra -Werror # -fsanitize=address #-g

NAME = Colleen

all: $(NAME) diff

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	cc $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f tmp_Colleen diff_file

fclean: clean
	@rm -f $(NAME)

re: fclean all

diff:
	@./Colleen > tmp_Colleen
	@diff Colleen.c tmp_Colleen > diff_file

.PHONY: all clean fclean re
