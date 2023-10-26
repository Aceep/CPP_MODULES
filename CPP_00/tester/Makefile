NAME = tester

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

OBJ_DIR	= obj/
SRC_DIR = src/

SRC_EX00_FILES = test_megaphone.cpp
OBJ_EX00_FILES = $(SRC_EX00_FILES:.cpp=.o)

SRC_EX00 = $(addprefix $(SRC_DIR), $(SRC_EX00_FILES))
OBJ_EX00 = $(addprefix $(OBJ_DIR), $(OBJ_EX00_FILES))

all : $(NAME)

ex00 : $(OBJ_EX00)
	@$(CC) $(FLAGS) $(OBJ_EX00) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@

ex02 :
	@if [ "$(OPT)" = "1" ]; then \
        ./src/ex02_tester.sh 1; \
	elif [ "$(OPT)" = "2" ]; then \
		./src/ex02_tester.sh clean; \
	else \
		./src/ex02_tester.sh; \
	fi

ex01 :
	@./src/ex01_eval.sh

clean :
	@$(RM) $(OBJ_DIR)

fclean : clean
	@make --no-print-directory -C ../ex00/ fclean
	@make --no-print-directory -C ../ex01/ fclean
	@make --no-print-directory -C ../ex02/ fclean
	@$(RM) $(NAME)
	@echo "Cleaning done !	\033[0;32m✓\033[0m"

re : clean all