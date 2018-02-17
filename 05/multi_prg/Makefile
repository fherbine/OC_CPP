NAME = multi
SRC = main.cpp display_name.cpp
OBJ = $(SRC:.cpp=.o)
IPATH = ./
CC = g++
IFLAGS = -I$(IPATH)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $?

%.o: %.c
	$(CC) -c $(IFLAGS) $? -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
