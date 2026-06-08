COMPILER = c++

COMPILATION_FLAGS = -Wall -Wextra -Werror

CPP_V = -std=c++98

NAME = ex02

SOURCES =	main.cpp\
			Base.cpp
		
HEADER_FILES =	Base.hpp\
				A.hpp\
				B.hpp\
				C.hpp

OBJECTS = $(SOURCES:.cpp=.o)

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
