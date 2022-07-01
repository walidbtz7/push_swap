SRCS    		=  ./src/checker.c ./src/helpers.c ./src/table.c ./src/sort_under_fifteen.c  ./src/sort.c ./src/linkedlist.c ./src/operation_reverse.c ./src/operation_swap.c ./src/operation_rotate.c ./src/operation_push.c ./src/a_to_b.c ./src/b_to_a.c ./src/push_swap.c  

FLAGS 			=	-Wall -Wextra -Werror 
OBJS			=    $(SRCS:.c=.o)

NAME    		=    push_swap
PRINTF    		=    ./src/include/ft_printf/libftprintf.a
.PHONY:		all clean fclean re bonus


all: $(NAME)

$(NAME): $(PRINTF) $(OBJS)
	cc $(FLAGS) $(OBJS) $(PRINTF) -o $(NAME)

$(PRINTF):
	@make -C ./src/include/ft_printf
%.o:%.c 
	cc $(FLAGS) -c $< -o $@
clean:
	@rm -f ${OBJS}
	@make  -C ./src/include/ft_printf clean

fclean:    clean
	@make  -C ./src/include/ft_printf fclean
	@rm -f ${NAME}
re: fclean all
