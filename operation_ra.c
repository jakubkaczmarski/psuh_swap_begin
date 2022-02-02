#include "push_swap.h"
void	operation_ra(t_list **stack_a)
{
	t_list *firstelem;
	// t_list *last;

	firstelem = *stack_a;
	*stack_a = firstelem->next;
	firstelem->next = NULL;
	ft_lstadd_back(stack_a, firstelem);
	write(1, "ra\n", 3);
}