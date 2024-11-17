NAME = Phone

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors 

CPP = c++

RM = rm -rf

SRCS = Contact.cpp PhoneBook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:clean

re: clean all

.PHONY:all re clean fclean