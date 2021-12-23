#include "push_swap.h"

void	operation_sb(t_list **stack_b)
{
	t_list *firstelement;
	t_list *secondelement;
	t_list *thirdelement;

	if (ft_lstsize(*stack_b) > 1)
	{
		firstelement = *stack_b;
		secondelement = firstelement ->next;
		thirdelement = secondelement ->next;
		secondelement->next = firstelement;
		firstelement->next = thirdelement;
	}
}