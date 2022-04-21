SRCDIR	= src

SRCS	= $(wildcard $(SRCDIR)/*.c)

OBJS	= ${SRCS:.c=.o}

NAME	=	rush-02
CC		= 	gcc
RM		= 	rm -f
CFLAGS	= 	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o ${NAME} ${OBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
re:			fclean all
