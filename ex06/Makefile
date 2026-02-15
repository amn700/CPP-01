CC = c++
CPP_FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = harlFilter

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAG) $(OBJS) -o $(NAME)

%.o: %.cpp harl.hpp
	$(CC) $(CPP_FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re