SRC = main.cpp
SRC += ClapTrap.cpp
SRC += ScavTrap.cpp
SRC += FragTrap.cpp
SRC += DiamondTrap.cpp
NAME = DiamondTrap
CC = c++ -I. -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re