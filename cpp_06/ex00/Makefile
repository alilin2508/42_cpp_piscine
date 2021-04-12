NAME	= convert

SRCS	= Convert.cpp \
				main.cpp

OBJS	= $(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)	:	$(OBJS)
					clang++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(SRCS)

clean		:
					rm -rf $(OBJS)

fclean	:	clean
					rm -rf $(NAME)

re			:	fclean all

test		: $(NAME)
					./convert 0
					./convert nan
					./convert 42.0f
					./convert -inf
					./convert +inf
					./convert 42
					./convert
