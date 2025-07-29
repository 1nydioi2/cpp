COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

NAME = my_awesome_phonebook

SOURCES = my_awesome_phonebook.cpp \
	   Contact.cpp\
	   PhoneBook.cpp

OBJECTS = $(SOURCES:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(COMPILATION_FLAGS) $(OBJECTS) -o $(NAME)

std98: $(OBJECTS)
	$(COMPILER) -std=c++98 $(COMPILATION_FLAGS) $(OBJECTS) -o $(NAME)
%.o: %.cpp
	$(COMPILER) -c $(COMPILATION_FLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJECTS)

re: fclean all

.PHONY: fclean all clean re std98
