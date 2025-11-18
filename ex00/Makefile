NAME = Animal
CXX = c++ -std=c++98 -Wall -Werror -Wextra

SRC = src/Animal.cpp src/Dog.cpp src/Cat.cpp src/main.cpp\
	src/WrongAnimal.cpp src/WrongDog.cpp src/WrongCat.cpp
INC = include/Animal.hpp include/Dog.hpp include/Cat.hpp \
	include/WrongAnimal.hpp include/WrongDog.hpp include/WrongCat.hpp
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