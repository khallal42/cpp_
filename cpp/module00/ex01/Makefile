NAME=phonebook
CC = c++
CPPFLAGS = -std=c++98 -Wall -Werror -Wextra
RM = rm -rf
SOURCES = utils.cpp \
		  phonebook.cpp \
		  contact.cpp \
		  my_awesome_phonebook.cpp

OBJECTS = $(SOURCES:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJECTS}
	${CC} ${CPPFLAGS} ${OBJECTS} -o ${NAME}

clean :
	${RM} ${OBJECTS}

fclean : clean
	${RM} ${NAME}

re : fclean all