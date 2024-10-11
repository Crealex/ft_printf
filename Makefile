SRCS	=	ft_printf_print.c print_arg1.c print_arg2.c
TEST	=	main_test.c
HEADS	=	ft_printf.h
OBJS	=
CC = gcc
CFLAGS = -Werror -Wextra -Wall

all: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} ${HEADS} ${TEST}
