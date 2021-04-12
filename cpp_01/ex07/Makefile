NAME	= Replace

SRCS	= Replace.cpp \
				main.cpp

OBJS	= $(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)	:	$(OBJS)
					clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -o $(NAME) $(SRCS)

clean		:
					rm -rf $(OBJS)

fclean	:	clean
					rm -rf $(NAME)

re			:	fclean all

test		: $(NAME)
					./Replace
					./Replace input ok ko
					./Replace input1 caca prout
					./Replace input2 or rrrr
					./Replace Makefile .cpp .c
