CFLAGS = -Wall -Wextra -Werror -g

NAME = ps

BONUS = checker

LIB = -I./libft -L./libft -lft -I./ft_printf -L./ft_printf -lftprintf

SRCS = ./srcs/check_input.c \
        ./srcs/init_functions.c \
        ./srcs/main.c \
        ./srcs/stack_operations_one.c \
        ./srcs/stack_operations_two.c \
        ./srcs/utils.c \
        ./algorithm/rotation_functions.c \
		./algorithm/set_functions.c \
        ./algorithm/stack_sort.c

BONUS_SRCS = ./check_dir/checker.c \
			./check_dir/utils.c \
			./check_dir/utils_two.c \
			./check_dir/get_next_line/get_next_line.c \
			./check_dir/get_next_line/get_next_line_utils.c

all: $(NAME)

lib: 
	cd ./libft && make bonus 
	cd ./ft_printf && make all

$(NAME): lib $(SRCS)
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)  $(LIB)
	@echo "... Amazing! I managed to compile ps"

bonus: lib $(SRCS) $(BONUS_SRCS)
	@gcc $(CFLAGS) $(SRCS) $(BONUS_SRCS) -o $(BONUS) $(LIB) 
	@echo "... Amazing! I managed to compile the checker"

clean:
	@$(RM) $(OBJ)
	@echo "Objects files removed."

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(BONUS)
	@echo "$(NAME) and $(BONUS) removed."

re: fclean all

.PHONY: all clean fclean re bonus
