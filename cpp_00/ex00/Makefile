NAME	= megaphone

SRCS	= megaphone.cpp \

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
					./megaphone "shhhhh... I think the students are asleep..."
					./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
					./megaphone
