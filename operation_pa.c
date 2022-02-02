#include "push_swap.h"

void	operation_pa(t_list **stack_a, t_list **stack_b)
{
	t_list *firstelem;

	if (ft_lstsize(*stack_b) > 0)
	{
		firstelem = *stack_b;
		*stack_b = firstelem ->next;
		ft_lstadd_front(stack_a, firstelem);
	}
	write(1, "pa\n", 3);
}