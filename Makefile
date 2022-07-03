SRCS    		=  ./src/checker.c ./src/helpers.c ./src/table.c ./src/sort_under_fifteen.c  ./src/sort.c ./src/linkedlist.c ./src/operation_reverse.c ./src/operation_swap.c ./src/operation_rotate.c ./src/operation_push.c ./src/a_to_b.c ./src/b_to_a.c ./src/push_swap.c ./src/get_next_line.c

BONUS_SRCS    		=  ./src/checker.c ./src/helpers.c ./src/table.c ./src/sort_under_fifteen.c  ./src/sort.c ./src/linkedlist.c ./src/operation_reverse.c ./src/operation_swap.c ./src/operation_rotate.c ./src/operation_push.c ./src/a_to_b.c ./src/b_to_a.c ./src/checker_bonus.c ./src/get_next_line.c

FLAGS 			=	-Wall -Wextra -Werror 

OBJS			=    $(SRCS:.c=.o)

BONUS_OBJS		=    $(BONUS_SRCS:.c=.o)


NAME    		=    push_swap

BONUS    		=    checker

HELPERS    		=   ./src/include/tools/helpers.a

PRINTF    		=    ./src/include/ft_printf/libftprintf.a
.PHONY:		all clean fclean re bonus


all: $(NAME)

bonus: $(BONUS)

$(NAME):  $(HELPERS) $(PRINTF) $(OBJS)
	cc $(FLAGS) $(OBJS) $(PRINTF) $(HELPERS) -o $(NAME)

$(BONUS):  $(HELPERS) $(PRINTF) $(BONUS_OBJS)
	cc $(FLAGS) $(BONUS_OBJS) $(PRINTF) $(HELPERS) -o $(BONUS)
$(HELPERS):
	@make -C ./src/include/tools

$(PRINTF):
	@make -C ./src/include/ft_printf

%.o:%.c 
	cc $(FLAGS) -c $< -o $@

clean:
	@rm -f ${OBJS}
	@rm -f ${BONUS_OBJS}
	@make  -C ./src/include/ft_printf clean
	@make  -C ./src/include/tools clean

fclean:    clean
	@make  -C ./src/include/ft_printf fclean
	@make  -C ./src/include/tools fclean
	@rm -f ${NAME}
	@rm -f ${BONUS}
re: fclean all
