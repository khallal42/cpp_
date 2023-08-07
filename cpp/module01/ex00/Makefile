NAME=Brainz
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf
SOURCES = Zombie.cpp \
		  main.cpp \
		  newZombie.cpp \
		  randomChump.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS}
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all