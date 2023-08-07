NAME=attacks
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -fsanitize=address
RM = rm -rf
SOURCES = HumanA.cpp \
		  HumanB.cpp \
		  main.cpp \
		  Weapon.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS}
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all