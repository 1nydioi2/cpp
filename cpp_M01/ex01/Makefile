COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

NAME = ex01

SOURCES = Zombie.cpp\
	   randomChump.cpp\
	   newZombie.cpp\
	   zombieHorde.cpp\
	   main.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CPP_V = -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(CPP_V) $(COMPILATION_FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(COMPILER) -c $(CPP_V) $(COMPILATION_FLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: fclean all clean re
