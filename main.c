#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;

	if (!check_arguments(argc, argv) || !unvalid_value(argc, argv))
		return (write(1, "Error\n", 6));
	if (argc <= 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = createinput(argc, argv);
	reapply_values(&stack_a, argc - 2);
	// print_stack(stack_a);
	if (argc <= 6)
		sort_small(&stack_a, &stack_b, argc);
	else
		sortbigstack(&stack_a, &stack_b);
}