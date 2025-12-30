COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

NAME = ex02

SOURCES = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp

HEADER_FILES = ClapTrap.hpp\
	ScavTrap.hpp\
	FragTrap.hpp

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
