#include "push_swap.h"

void	operation_rb(t_list **stack_b)
{
	t_list *firstelem;
	// t_list *last;
	
	firstelem = *stack_b;
	*stack_b = firstelem->next;
	firstelem->next = NULL;
	ft_lstadd_back(stack_b, firstelem);
	write(1, "rb\n", 3);
}