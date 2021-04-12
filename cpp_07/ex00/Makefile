NAME	= whatever

SRCS	= main.cpp

OBJS	= $(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)	:	$(OBJS)
					clang++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRCS)

clean		:
					rm -rf $(OBJS)

fclean	:	clean
					rm -rf $(NAME)

re			:	fclean all
