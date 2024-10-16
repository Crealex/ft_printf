SRCS	=	ft_printf_print.c print_arg1.c print_arg2.c
TEST	=	main_test.c
OBJS	=	${SRCS:%.c=${OBJDIR}/%.o}
OBJDIR	=	objet
CC	=	gcc
CFLAGS	=	-Werror -Wextra -Wall
NAME	=	libftprintf.a
AR	=	ar rcs

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

${OBJDIR}/%.o: %.c | ${OBJDIR}
	${CC} ${CFLAGS} -c -o $@ $<

${OBJDIR}:
	mkdir -p ${OBJDIR}

#test : ${SRCS} ${TEST}
#	${CC} ${CFLAGS} ${SRCS} ${TEST}
#	./a.out

clean:
	rm -rf ${OBJDIR}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

