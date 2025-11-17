NAME = Interface
CXX = c++ -std=c++98 -Wall -Werror -Wextra #-fsanitize=address

SRC = src/AMateria.cpp src/Character.cpp src/Cure.cpp src/Ice.cpp src/main.cpp\
	src/MateriaSource.cpp
INC = include/AMateria.cpp include/Character.cpp include/Cure.cpp include/Ice.cpp include/main.cpp\
	include/MateriaSource.cpp include/ICharacter.hpp include/IMateriaSource.hpp
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