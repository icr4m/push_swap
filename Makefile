NAME = push_swap
BONUS_NAME = checker

SRCS = $(addprefix srcs/, big_sort.c costs.c data.c fill_stack.c free_stack.c moves.c operations1.c operations2.c operations3.c operations4.c overflow.c parsing_utils.c parsing.c push_swap_utils.c sorted.c stack_utils.c target_alt.c targets.c transfers.c)
MAIN = $(addprefix srcs/, main.c)

SRCS_B = $(addprefix srcs_bonus/, main_checker.c activate_op.c)
MAIN_B = $(addprefix srcs_bonus/, main.c)

OBJ =  $(SRCS:.c=.o)
OBJ_B = $(SRCS_B:.c=.o)
OBJ_MAIN		=	$(MAIN:.c=.o)
OBJ_MAIN_B		=	$(MAIN_B:.c=.o)

ALL_OBJS		+=	$(OBJ)
ALL_OBJS		+=	$(OBJ_B)
ALL_OBJS		+=	$(OBJ_MAIN)
ALL_OBJS		+=	$(OBJ_MAIN_B)

ALL_SRCS +=	$(SRCS)
ALL_SRCS +=	$(MAIN)
ALL_SRCS +=	$(SRCS_B)
ALL_SRCS +=	$(MAIN_B)

INCS = $(addprefix includes/, checker.h push_swap.h struct.h)
INCS_LIBFT = $(addprefix Libft/libft/includes/, ft_printf.h get_next_line_bonus.h libft.h)

ALL_INCS += $(INCS)
ALL_INCS += $(INCS_LIBFT)

CCFLAGS = -Wall -Wextra -Werror

INCLUDES_OPT = -Iincludes -I$(LIBFT_PATH)/includes

LIBFT_PATH = ./Libft

# Rules
all: $(LIBFT_PATH)/libft.a $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
	make $(LIBFT_PATH)
	cc $(CFLAGS) $^ $(LIBFT_PATH)/libft.a -o $(NAME)

$(LIBFT_PATH)/libft.a:
	make -C $(LIBFT_PATH)

$(BONUS_NAME) : $(OBJ_B) $(OBJ) $(OBJ_MAIN_B)
	make $(LIBFT_PATH)
	cc $(CFLAGS) $^ $(LIBFT_PATH)/libft.a -o $(BONUS_NAME)

bonus: $(LIBFT_PATH)/libft.a $(BONUS_NAME)

.c.o:
	cc $(CCFLAGS) $(INCLUDES_OPT) -c $< -o ${<:.c=.o}

norm:
	norminette -R CheckForbiddenSourceHeader $(ALL_SRCS)
	norminette -R CheckDefine $(ALL_INCS)

clean:
	rm -rf $(ALL_OBJS)
	cd $(LIBFT_PATH) && make clean

fclean: clean
		rm -f $(NAME) $(BONUS_NAME)
		cd $(LIBFT_PATH) && make fclean

re: fclean all

all: $(NAME)

