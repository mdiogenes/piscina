EXECINCLUDEDIR = include

SRCS	= found.c ft_build_matrix.c ft_freemem.c ft_print_matrix.c main.c solver.c

HEAD	= ./include/

OBJS	= ${SRCS:.c=.o}

NAME	=	bsq
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
