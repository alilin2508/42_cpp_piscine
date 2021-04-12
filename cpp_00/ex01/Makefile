NAME	= phonebook

SRCS	= phonebook.cpp \
				contact.cpp \

INCLS	= contact.hpp

OBJS	= $(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)	:	$(OBJS)
					clang++ -Wall -Wextra -Werror -std=c++98 -pedantic -o $(NAME) $(SRCS)

clean		:
					rm -rf $(OBJS)

fclean	:	clean
					rm -rf phonebook

re			:	fclean all
