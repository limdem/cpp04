CC = c++
RM = rm -f
C++FLAGS = -Wall -Wextra -Werror
C++STDFLAGS= -std=c++98
INCLUDES_DIR = ./includes/
INCLUDES = Animal.hpp\
			Brain.hpp\
			Cat.hpp\
			Dog.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp
INCLUDES_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
NAME = abstract
SRCS_DIR = ./srcs/
SRCS = Animal.cpp\
		Brain.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		main.cpp
SRCS_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
OBJS = $(SRCS:.cpp=.o)

%.o: %.c
	${CC} -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH} $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		c++ -o $(NAME) $(OBJS)

$(OBJS): $(SRCS_PATH)
	c++ -c ${C++FLAGS} ${C++STDFLAGS} ${INCLUDES_PATH} ${SRCS_PATH}

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: fclean re all clean