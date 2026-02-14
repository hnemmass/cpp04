NAME = Interface
CXX = c++ -std=c++98 -Wall -Werror -Wextra #-fsanitize=address

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp\
	MateriaSource.cpp
INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp\
	MateriaSource.cpp ICharacter.hpp IMateriaSource.hpp
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