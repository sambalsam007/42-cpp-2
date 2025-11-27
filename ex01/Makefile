CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJ_DIR = obj
SRCS = main.cpp \
       Fixed.cpp
OBJS = $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/Fixed.o
NAME = a.out

all: $(NAME)
	@echo
	@cat .art | while IFS= read -r line; do \
	    echo "$$line"; \
	    sleep 0.05; \
	  done
	@echo

quick: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/main.o: main.cpp Fixed.hpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c main.cpp -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/Fixed.o: Fixed.cpp Fixed.hpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c Fixed.cpp -o $(OBJ_DIR)/Fixed.o

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all fclean clean quick
