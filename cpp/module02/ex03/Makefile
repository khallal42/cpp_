NAME=ex03
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf
SOURCES = main.cpp \
		  Fixed.cpp \
		  bsp.cpp \
		  Point.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS}
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all