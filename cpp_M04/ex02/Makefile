COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

NAME = ex01

SOURCES = main.cpp\
		AAnimal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp

HEADER_FILES = AAnimal.hpp\
		Cat.hpp\
		Dog.hpp\
		WrongAnimal.hpp\
		WrongCat.hpp\
		Brain.hpp

OBJECTS = $(SOURCES:.cpp=.o)

CPP_V = -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER_FILES)
	$(COMPILER) $(CPP_V) $(COMPILATION_FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(COMPILER) -c $(CPP_V) $(COMPILATION_FLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: fclean all clean re
