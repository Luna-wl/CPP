NAME = phonebook

SRC = PhoneBook2.cpp PhoneBook.cpp Contact.cpp Main.cpp

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

re: fclean all

.PHONY: all clean fclean re