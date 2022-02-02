#include "push_swap.h"

void	operation_rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*secondtolast;
	int		length;

	length = ft_lstsize(*stack_b);
	if (length > 1)
	{
		secondtolast = *stack_b;
		while (length > 2)
		{
			secondtolast = secondtolast -> next; 
			length--;	
		}
		last = secondtolast -> next;
		secondtolast -> next = NULL;
		ft_lstadd_front(stack_b, last);
	}
	write(1, "rrb\n", 4);
}