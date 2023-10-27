NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf


RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m

SRC_DIR		=	src/
OBJ_DIR		=	obj/
INC_DIR		=	include/

SRC_FILES	=	main.cpp PhoneBook.cpp Contact.cpp
SRC_BONUS	=	test.cpp src/PhoneBook.cpp src/Contact.cpp
OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

#compile the executable
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

#compile objects
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean : 
	@$(RM) $(OBJ_DIR)

fclean : clean
	@$(RM) $(NAME)

re : clean all

bonus : all
	@$(CC) $(CFLAGS) -I $(INC_DIR) $(SRC_BONUS) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"
