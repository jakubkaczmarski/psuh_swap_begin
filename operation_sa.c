#include "push_swap.h"

void	operation_sa(t_list **stack_a)
{
	t_list *firstelement;
	t_list *secondelement;
	t_list *thirdelement;

	if (ft_lstsize(*stack_a) > 1)
	{
		firstelement = *stack_a;
		secondelement = firstelement ->next;
		thirdelement = secondelement ->next;
		secondelement->next = firstelement;
		firstelement->next = thirdelement;
	}
}