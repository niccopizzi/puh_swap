CFLAGS = -Wall -Wextra -Werror -g -no-pie

NAME = ps

BONUS_NAME = checker

LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)libft.a

PRINTF_PATH = ./ft_printf/
PRINTF = $(PRINTF_PATH)libftprintf.a

SRCS = ./srcs/check_input.c 				\
        ./srcs/init_functions.c 			\
        ./srcs/main.c 						\
        ./srcs/stack_operations_one.c 		\
        ./srcs/stack_operations_two.c 		\
        ./srcs/utils.c 						\
        ./algorithm/rotation_functions.c 	\
		./algorithm/set_functions.c 		\
        ./algorithm/stack_sort.c

BONUS_SRCS = ./check_dir/checker.c			 	\
			./check_dir/utils.c 				\
			./check_dir/utils_two.c 			\
			./srcs/check_input.c 				\
        	./srcs/init_functions.c 			\
			./srcs/stack_operations_one.c 		\
        	./srcs/stack_operations_two.c 		\
        	./srcs/utils.c 						\
        	./algorithm/rotation_functions.c 	\
			./algorithm/set_functions.c 		\
        	./algorithm/stack_sort.c

all: $(NAME)

$(PRINTF):
	@make -C ft_printf 
	
$(LIBFT):
	@make -C libft bonus
	
$(NAME):  $(LIBFT) $(PRINTF) $(SRCS)
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)  $(LIBFT) $(PRINTF)
	@echo "... Amazing! I managed to compile ps"

$(BONUS_NAME): $(LIBFT) $(PRINTF) $(BONUS_SRCS)
	@gcc $(CFLAGS) $(BONUS_SRCS) -o $(BONUS_NAME) $(LIBFT) $(PRINTF)
	@echo "... Amazing! I managed to compile the checker"

clean:
	@$(RM) $(OBJ)
	@make -C $(LIBFT_PATH) clean
	@make -C $(PRINTF_PATH) clean
	@echo "Objects files removed."

fclean: clean
	@$(RM) $(NAME) $(BONUS_NAME)
	@make -C $(LIBFT_PATH) fclean
	@make -C $(PRINTF_PATH) fclean
	@echo "Executables removed."

re: fclean all

.PHONY: all clean fclean re bonus
