NAME = megaphone

SRCS = megaphone.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all: $(NAME)

$(NAME):
	@echo "$(GRAY)$(CURSIVE)Compiling $(NAME)...$(RESET)"
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "$(GREEN)$(NAME) is ready$(RESET)"

clean: 
	@ $(RM) $(NAME)
	@ echo "$(YELLOW)$(NAME) has been removed$(RESET)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
