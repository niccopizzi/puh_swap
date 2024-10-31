CFLAGS = -Wall -Wextra -Werror -g

NAME = checker

LIB = -I../libft -L../libft -lft -I../ft_printf -L../ft_printf -lftprintf

SRCS = checker.c \
		utils.c \
		utils_two.c \
		./get_next_line/get_next_line.c \
		./get_next_line/get_next_line_utils.c \
		../srcs/check_input.c \
        ../srcs/init_functions.c \
        ../srcs/stack_operations_one.c \
        ../srcs/stack_operations_two.c \
        ../srcs/utils.c \
        ../algorithm/rotation_functions.c \
		../algorithm/set_functions.c \
        ../algorithm/stack_sort.c

bonus : $(NAME)

$(NAME) : $(SRCS)
	@cd ../libft && make bonus 
	@cd ../ft_printf && make all
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)  $(LIB)
	@echo "... Amazing! I managed to compile the checker"

