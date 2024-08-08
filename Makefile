NAME = push_swap

SRCS = $(addprefix srcs/, big_sort.c costs.c data.c fill_stack.c free_stack.c main.c moves.c operations1.c operations2.c operations3.c operations4.c overflow.c parsing_utils.c parsing.c push_swap_utils.c sorted.c stack_utils.c target_alt.c targets.c transfers.c)
OBJ =  $(SRCS:.c=.o)

# CCFLAGS = -Wall -Wextra -Werror

INCLUDES = -Iincludes -I$(LIBFT_PATH)/includes

LIBFT_PATH = ./Libft

# Rules
all: $(LIBFT_PATH)/libft.a $(NAME)

$(NAME): $(OBJ)
	make $(LIBFT_PATH)
	cc $(CFLAGS) $^ $(LIBFT_PATH)/libft.a -o $(NAME)

$(LIBFT_PATH)/libft.a:
	make -C $(LIBFT_PATH)

.c.o:
	cc $(CCFLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJ)
	cd $(LIBFT_PATH) && make clean

fclean: clean
		rm -f $(NAME)
		cd $(LIBFT_PATH) && make fclean

re: fclean all

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

