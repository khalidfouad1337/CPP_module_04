NAME = a.out

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

Include = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp 

OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp ${Include}
		@$(CC) $(CFLAGS) -g -c $< -o $@

all:		$(NAME) 

$(NAME): $(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
				@$(RM) $(OBJS) 
			
fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: all fclean clean re