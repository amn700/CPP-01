CC = c++
CPP_FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = brain

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re