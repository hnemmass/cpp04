NAME = Animal
CXX = c++ -std=c++98 -Wall -Werror -Wextra

SRC = Animal.cpp Dog.cpp Cat.cpp main.cpp\
	WrongAnimal.cpp WrongDog.cpp WrongCat.cpp
INC = Animal.hpp Dog.hpp Cat.hpp \
	WrongAnimal.hpp WrongDog.hpp WrongCat.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CXX) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all