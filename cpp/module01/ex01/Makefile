NAME=morebrainz
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra -fsanitize=address
RM = rm -rf
SOURCES = main.cpp \
		  Zombie.cpp \
		  zombieHorde.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS}
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all