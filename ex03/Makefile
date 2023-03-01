CC = c++
RM = rm -f
C++FLAGS = -Wall -Wextra -Werror
C++STDFLAGS= -std=c++98
INCLUDES_DIR = ./includes/
INCLUDES = AMateria.hpp\
			Character.hpp\
			Cure.hpp\
			Ice.hpp\
			ICharacter.hpp\
			IMateriaSource.hpp\
			MateriaSource.hpp
INCLUDES_PATH = $(addprefix $(SRCS_DIR), $(SRCS))
NAME = interfacerecap
SRCS_DIR = ./srcs/
SRCS = AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\
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