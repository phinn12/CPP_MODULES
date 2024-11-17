NAME = address
SRCS = main.cpp
CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRCS:.cpp=.o)
%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
all: $(NAME)

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re: fclean all