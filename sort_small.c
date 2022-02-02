#include "push_swap.h"

int	sort_3(t_list **stack_a)
{
	t_list	*ptr;
	int		first;
	int		third;
	int		second;

	ptr = *stack_a;
	first = *(int *)ptr->content;
	ptr = ptr->next;
	second = *(int *)ptr->content;
	ptr = ptr->next;
	third = *(int *)ptr->content;
	if (first == 0 && second == 1 && third == 2)
		return (0);
	if (first == 0 && second == 2 && third == 1)
		return (case_1_of_3_value_permutation(stack_a));
	if (first == 1 && second == 0 && third == 2)
		return (case_2_of_3_value_permutation(stack_a));
	if (first == 1 && second == 2 && third == 0)
		return (case_3_of_3_value_permutation(stack_a));
	if (first == 2 && second == 0 && third == 1)
		return (case_4_of_3_value_permutation(stack_a));
	else
		return (case_5_of_3_value_permutation(stack_a));
}

int	sort_4(t_list **stack_a, t_list **stack_b)
{
	operation_pb(stack_a, stack_b);
	sort_3(stack_a);
	if ((*(int *)(*stack_b)->content) == 0)
		operation_pa(stack_a, stack_b);
	else if ((*(int *)(*stack_b)->content) == 1)
	{
		operation_pa(stack_a, stack_b);
		operation_sa(stack_a);
	}
	else if ((*(int *)(*stack_b)->content) == 2)
	{
		operation_rra(stack_a);
		operation_pa(stack_a, stack_b);

	}
	else if ((*(int *)(*stack_b)->content) == 3)
	{
		operation_pa(stack_a, stack_b);
		operation_ra(stack_a);
	}
	// print_stack(*stack_a);
	// print_stack(*stack_b);
	return (0);
}

// int	sort_5(t_list **stack_a, t_list **stack_b)
// {
// 	int	temp;
// 	int	temp2;

// 	operation_pb(stack_a, stack_b);
// 	operation_pb(stack_a, stack_b);
// 	sort_3(stack_a);
// 	temp = (*(int *)((*stack_b)->next)->content);
// 	if ((*(int *)(*stack_b)->content) > temp)
// 		operation_rb(stack_b);
// 	while (*stack_b)
// 	{
// 		temp = (*(int *)(*stack_b)->content);
// 		temp2 = (*(int *)(*stack_a)->content);
// 		printf("size stack_a = %d   size stack_b = %d\n", ft_lstsize(*stack_a), ft_lstsize(*stack_b));
// 		print_stack(*stack_a);
// 		print_stack(*stack_b);
// 		printf("temp = %d   temp2 = %d\n", temp, temp2);
// 		while (temp != temp2)
// 			// operation_ra(stack_a);
// 			break;
// 		operation_pa(stack_a, stack_b);	
// 	}
// 	return (0);
// }

int	sort_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		value;

	while (ft_lstsize(stack_a) > 3)
	{
		ptr = *stack_a;
		value = *(int *)ptr->content;
		if (value == 0 || value == 1)
			operation_pb(stack_a, stack_b);
		else
			operation_ra(stack_a);
	}
	sort_3(stack_1);
	ptr = *stack_a;
		value = *(int *)ptr->content
	if (value == 1)
		operation_sb(stack_b);
	operation_pa(stack_a, stack_b);
	operation_pa(stack_a, stack_b);
}

int	sort_small(t_list **stack_a, t_list **stack_b, int argc)
{
	int 	temp;
	t_list	*ptr;

	ptr = *stack_a;
	if (argc == 3)
	{
		temp = *(int*)ptr->content;
		ptr = ptr->next;
		if (temp > *(int*)ptr->content)
			operation_sa(stack_a);
	}
	if (argc == 4)
		sort_3(stack_a);
	if (argc == 5)
		sort_4(stack_a, stack_b);
	if (argc == 6)
		sort_5(stack_a, stack_b);
}