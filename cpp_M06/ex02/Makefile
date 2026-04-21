COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

NAME = ex03

SOURCES = main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp
		
HEADER_FILES = Bureaucrat.hpp\
		AForm.hpp\
		ShrubberyCreationForm.hpp\
		RobotomyRequestForm.hpp\
		PresidentialPardonForm.hpp\
		Intern.cpp

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
	rm -f $(OBJECTS) *shrubbery

re: fclean all

.PHONY: fclean all clean re
