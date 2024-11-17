NAME = megaphone

FLAGS = -Wall -Wextra -Werror

CPP = c++

RM = rm -rf

SRCS = megaphone.cpp 

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:clean

re: clean all

.PHONY:all re clean fclean