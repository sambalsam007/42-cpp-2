CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

OBJ_DIR = obj

SRCS = main.cpp \
	Fixed.cpp

OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))

TARGET = a.out

all: $(TARGET)
	@echo
	@cat .art | while IFS= read -r line; do \
	    echo "$$line"; \
	    sleep 0.05; \
	  done
	@echo
	
quick: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
clean:
	@[ -d $(OBJ_DIR) ] \
		&& rm -rf $(OBJ_DIR) \
		|| echo "no obj/ dir to remove"

fclean: clean 
	@[ -f $(TARGET) ] \
		&& rm $(TARGET) \
		|| echo "no target to remove"

re: fclean all

.PHONY: clean fclean all re quick
