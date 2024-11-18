NAME = a.out

SRC = megaphone.cpp

CFLAGS = -Wall -Werror -Wextra

DIR_SRC = src

DIR_OBJ = obj

OBJ =

SRC := $(addprefix $(DIR_SRC)/, $(SCR))

OBJ := $(subst $(DIR_SRC)/, $(DIR_SRC), $(SRC:.cpp=.o))


$(NAME): $(OBJ)
	$(CC) -o  $(CFLAGS) $^ -o $@

all: $(NAME)

$(OBJ): $(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(DIR_OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
