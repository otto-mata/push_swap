NAME=push_swap
BONUS_NAME=checker
CC=cc
CFLAGS=-Wall -Wextra -Werror -g3
LIB_PATH=./osgc/
LIB_NAME=osgc
ARGS_SRC_FILES=args_destroy.c \
	args_instance.c \
	args_prepare.c \
	args_register_handler.c \
	args_use_argv.c \
	args_validate.c 

CORE_SRC_FILES= core_can_start.c \
	core_get_ref_mid.c \
	core_get_ref_q1.c \
	core_get_ref_q3.c \
	core_init.c \
	core_instance.c \
	core_init_ref.c

UTILS_SRC_FILES=ft_atoi.c \
	ft_isalpha.c \
	ft_nb_length.c \
	ft_print_op.c \
	ft_quick_sort.c \
	ft_split.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_swap.c \
	ft_strjoin.c

SORTING_SRC_FILES=op_cost.c \
	op_get_best.c \
	op_insertion_sort.c \
	op_optimize.c \

STACK_SRC_FILES=stack_index_of.c \
	stack_first.c \
	stack_get_target_place.c \
	stack_init.c \
	stack_init_ref.c \
	stack_inner.c \
	stack_is_sorted.c \
	stack_max.c \
	stack_min.c \
	stack_print.c \
	stack_replace_a.c \
	stack_reserve.c \
	stack_set_quartiles.c \
	stack_sort.c \
	stack_sort_a.c \
	stack_sort_b.c \
	stack_sort_three_a.c \
	stack_value_at.c

STACKOP_SRC_FILES=stackop_push.c \
	stackop_shift_down.c \
	stackop_shift_up.c \
	stackop_swap.c

ARGS_HANDLER_SRC_FILES=transformer_atoi.c \
	validator_all_atoi_safe.c \
	validator_all_int32.c \
	validator_all_uniq.c

OPCODES_SRC_FILES=pa.c \
	pb.c \
	ra.c \
	rb.c \
	rr.c \
	sa.c \
	sb.c \
	ss.c \
	rra.c \
	rrb.c \
	rrr.c

BONUS_CHECKER_SRC_FILES=checker_get_stdin.c \
	checker_instance.c \
	checker_register_instruction.c \
	checker_apply.c

BONUS_CORE_ADDONS_SRC_FILES=core_enable_check_mode.c

BONUS_MAIN_SRC=bonus.c

BONUS_STACK_SRC_FILES=stack_reserve.c \
	stack_init.c \
	stack_is_sorted.c \
	stack_print.c

BONUS_CORE_SRC_FILES=core_init.c \
	core_instance.c

MAIN_SRC=main.c 

ARGS_SRC_PATH=./args/
ARGS_HANDLER_SRC_PATH=$(addprefix $(ARGS_SRC_PATH), handlers/)
CORE_SRC_PATH=./core/
UTILS_SRC_PATH=./utils/
OPCODES_SRC_PATH=./opcodes/
SORTING_SRC_PATH=./sorting/
STACK_SRC_PATH=./stack/
STACKOP_SRC_PATH=$(addprefix $(STACK_SRC_PATH), operations/)

BONUS_SRC_PATH=./bonus/
BONUS_CHECKER_SRC_PATH=$(addprefix $(BONUS_SRC_PATH), checker/)
BONUS_CORE_ADDONS_SRC_PATH=$(addprefix $(BONUS_SRC_PATH), core/)

ARGS_FULL_PATH=$(addprefix $(ARGS_SRC_PATH), $(ARGS_SRC_FILES))
ARGS_HANDLER_FULL_PATH=$(addprefix $(ARGS_HANDLER_SRC_PATH), $(ARGS_HANDLER_SRC_FILES))
CORE_FULL_PATH=$(addprefix $(CORE_SRC_PATH), $(CORE_SRC_FILES))
UTILS_FULL_PATH=$(addprefix $(UTILS_SRC_PATH), $(UTILS_SRC_FILES))
OPCODES_FULL_PATH=$(addprefix $(OPCODES_SRC_PATH), $(OPCODES_SRC_FILES))
SORTING_FULL_PATH=$(addprefix $(SORTING_SRC_PATH), $(SORTING_SRC_FILES))
STACK_FULL_PATH=$(addprefix $(STACK_SRC_PATH), $(STACK_SRC_FILES))
STACKOP_FULL_PATH=$(addprefix $(STACKOP_SRC_PATH), $(STACKOP_SRC_FILES))

BONUS_CHECKER_FULL_PATH=$(addprefix $(BONUS_CHECKER_SRC_PATH), $(BONUS_CHECKER_SRC_FILES))
BONUS_CORE_ADDONS_FULL_PATH=$(addprefix $(BONUS_CORE_ADDONS_SRC_PATH), $(BONUS_CORE_ADDONS_SRC_FILES))
BONUS_STACK_FULL_PATH=$(addprefix $(STACK_SRC_PATH), $(BONUS_STACK_SRC_FILES))
BONUS_CORE_FULL_PATH=$(addprefix $(CORE_SRC_PATH), $(BONUS_CORE_SRC_FILES))

ARGS_OBJ=$(ARGS_FULL_PATH:.c=.o)
ARGS_HANDLER_OBJ=$(ARGS_HANDLER_FULL_PATH:.c=.o)
CORE_OBJ=$(CORE_FULL_PATH:.c=.o)
UTILS_OBJ=$(UTILS_FULL_PATH:.c=.o)
OPCODES_OBJ=$(OPCODES_FULL_PATH:.c=.o)
SORTING_OBJ=$(SORTING_FULL_PATH:.c=.o)
STACK_OBJ=$(STACK_FULL_PATH:.c=.o)
STACKOP_OBJ=$(STACKOP_FULL_PATH:.c=.o)

BONUS_CHECKER_OBJ=$(BONUS_CHECKER_FULL_PATH:.c=.o)
BONUS_CORE_ADDONS_OBJ=$(BONUS_CORE_ADDONS_FULL_PATH:.c=.o)
BONUS_STACK_OBJ=$(BONUS_STACK_FULL_PATH:.c=.o)
BONUS_CORE_OBJ=$(BONUS_CORE_FULL_PATH:.c=.o)

$(NAME): $(ARGS_OBJ) $(ARGS_HANDLER_OBJ) $(CORE_OBJ) $(UTILS_OBJ) $(OPCODES_OBJ) $(SORTING_OBJ) $(STACK_OBJ) $(STACKOP_OBJ)
	make -C $(LIB_PATH)
	$(CC) $(CFLAGS) $(MAIN_SRC) $^ -L $(LIB_PATH) -l$(LIB_NAME) -o $@ 

$(BONUS_NAME): $(BONUS_STACK_OBJ) $(BONUS_CHECKER_OBJ) $(BONUS_CORE_ADDONS_OBJ) $(ARGS_OBJ) $(ARGS_HANDLER_OBJ) $(BONUS_CORE_OBJ) $(UTILS_OBJ) $(OPCODES_OBJ) $(STACKOP_OBJ)
	make -C $(LIB_PATH)
	$(CC) $(CFLAGS) $(addprefix $(BONUS_SRC_PATH), $(BONUS_MAIN_SRC)) $^ -L $(LIB_PATH) -l$(LIB_NAME) -o $@ 

all: $(NAME)

bonus: $(BONUS_NAME)

clean:
	rm -f $(ARGS_OBJ)
	rm -f $(ARGS_HANDLER_OBJ)
	rm -f $(CORE_OBJ)
	rm -f $(UTILS_OBJ)
	rm -f $(OPCODES_OBJ)
	rm -f $(SORTING_OBJ)
	rm -f $(STACK_OBJ)
	rm -f $(STACKOP_OBJ)
	rm -f $(BONUS_STACK_OBJ)
	rm -f $(BONUS_CHECKER_OBJ)
	rm -f $(BONUS_GNL_OBJ)
	rm -f $(BONUS_CORE_OBJ)
	rm -f $(BONUS_CORE_ADDONS_OBJ)
	make clean -C $(LIB_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

default: all
