NAME = harl
SRCS = main.cpp harl.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re: clean all

.PHONY:all re clean fclean