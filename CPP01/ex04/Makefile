NAME = ex04

SRC = main.cpp 

CC = g++

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%o: %cpp 
	@$(CC) $(CFLAG) -c $< -o $@ 

$(NAME): $(OBJ)
	@printf "$(GREEN)"
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm *.replace

re: fclean all

.PHONY: all clean fclean re