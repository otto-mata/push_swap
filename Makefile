NAME=push_swap
ARGS_SRC=args_destroy.c \
	args_instance.c \
	args_prepare.c \
	args_register_handler.c \
	args_use_argv.c \
	args_validate.c 

CORE_SRC= core_can_start.c \
	core_get_ref_mid.c \
	core_get_ref_q1.c \
	core_get_ref_q3.c \
	core_init.c \
	core_instance.c

UTILS_SRC=ft_atoi.c
	ft_isalpha.c \
	ft_memcmp.c \
	ft_nb_length.c \
	ft_pow.c \
	ft_print_op.c \
	ft_quick_sort.c \
	ft_split.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strtrim.c \
	ft_swap.c 

SORTING_SRC=op_cost.c \
	op_get_best.c \
	op_insertion_sort.c \
	op_optimize.c \

STACK_SRC=stack_index_of.c \
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
	stack_sort_three_a.c \
	stack_value_at.c

STACKOP_SRC=stackop_push.c \
	stackop_shift_down.c \
	stackop_shift_up.c \
	stackop_swap.c

ARGS_HANDLER_SRC=transformer_atoi.c \
	validator_all_atoi_safe.c \
	validator_all_int32.c \
	validator_all_uniq.c

MAIN_SRC=main.c 