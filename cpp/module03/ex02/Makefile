NAME=ex02
HEADER = FragTrap.hpp
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf
SOURCES = main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp \
		  FragTrap.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS} ${HEADER} ClapTrap.hpp ScavTrap.hpp
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all