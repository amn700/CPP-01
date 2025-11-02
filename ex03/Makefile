CC = c++
CPP_FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = violance

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CPP_FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re