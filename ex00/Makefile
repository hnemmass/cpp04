NAME = Animal
CC = c++ -std=c++98 -Wall -Werror -Wextra

SRC = src/Animal.cpp src/Dog.cpp src/Cat.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp include/Animal.hpp include/Dog.hpp include/Cat.hpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean make

.PHONY= re fclean clean all