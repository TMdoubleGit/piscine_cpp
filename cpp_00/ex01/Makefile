NAME 		= PhoneBook


CC 			= c++
FLAGS 		= -Wall -Wextra -Werror -std=c++98
RM 			= rm -rf

OBJDIR		=	.obj

SRCS 		= 	Contact PhoneBook main

SRC 		= $(SRCS:=.cpp)
OBJ 		= $(addprefix $(OBJDIR)/, $(SRCS:=.o))
HEADER		= Contact.hpp PhoneBook.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@echo "$(GRAY)$(CURSIVE)Compiling $(NAME)...$(RESET)"
	@ $(CC) $(OBJ) $(OPTS) -o $(NAME)
	@echo "$(GREEN)$(NAME) is ready$(RESET)"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@ mkdir -p $(dir $@)
	@ $(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@ $(RM) $(OBJDIR) $(OBJ)
	@ $(RM) $(NAME)
	@ echo "$(YELLOW)$(NAME) has been removed$(RESET)"

fclean: clean

re: fclean all
