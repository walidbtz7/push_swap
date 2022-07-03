SRCS    		=   ft_strlen.c ft_memcpy.c ft_strrchr.c ft_strchr.c ft_strdup.c \
					ft_substr.c ft_strjoin.c ft_strcmp.c ft_split.c \

FLAGS 			=	-Wall -Wextra -Werror
OBJS			=    $(SRCS:.c=.o)

NAME    		=    helpers.a
RM        		=     rm -f

all:    $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	${RM} ${OBJS}

fclean:    clean
	${RM} ${NAME}

re:        fclean all

.PHONY:		all clean fclean re bonus