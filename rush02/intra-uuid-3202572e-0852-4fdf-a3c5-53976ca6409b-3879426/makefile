SRCDIR	= src

INCLUDEDIR = include

SRCS	= $(wildcard $(SRCDIR)/*.c)

HEAD	= ./include/

OBJS	= ${SRCS:.c=.o}

NAME	=	rush-02
CC		= 	gcc
RM		= 	rm -f
CFLAGS	= 	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
re:			fclean all
