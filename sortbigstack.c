#include "push_swap.h"

void	print_stack(t_list *ptr)
{
	int i = 0;
	while(ptr)
	{
		printf("element nr:%i\n", i + 1);
		printf("%i\n", *((int *)(ptr->content)));
		// if(*((int *)(ptr->content)) == 12)
		// 	printf("   %p\n", ptr->next);
		ptr = ptr->next;
		i++;
	}
}

int	is_sorted(t_list **stack_x)
{
	t_list *ptr;
	int		temp;

	temp = -1;
	ptr = *stack_x;
	while(ptr)
	{
		if ((*(int*)(ptr->content)) < temp)
			return (0);
		temp = (*(int*)(ptr->content));
		ptr = ptr->next;
	}
	return (1);
}

int	stack_empty(t_list **stack_x)
{
	if(*stack_x == NULL)
		return(1);
	return(0);
}

int sortbigstack(t_list **stack_a, t_list **stack_b)
{
	int size = ft_lstsize(*stack_a);
	int max_num = size - 1; // the biggest number in a is stack_size - 1	
	int max_bits = 0; // how many bits for max_num
	int i = 0;
	int j = 0;
	int *temp;

	while ((max_num >> max_bits) != 0) 
		++max_bits;
	while (i < max_bits && !is_sorted(stack_a))
	{
		j = 0;
		while (j < size)
		{
			temp = (int*)(*stack_a)->content;
			if (((*temp >> i )&1) == 1)
				operation_ra(stack_a);
			else
				operation_pb(stack_a, stack_b);
			j++;
		}
		// printf("\n\n\nThis is stack_a:\n");
		// print_stack(*stack_a);
		// printf("\nThis is stack_b:\n");
		// print_stack(*stack_b);
		while (!stack_empty(stack_b))
			operation_pa(stack_a, stack_b);
		i++;
	}
	// printf("%i   %i\n", max_bits, i);
	return (0);
}


// int size = a.size();
// int max_num = size - 1; // the biggest number in a is stack_size - 1
// int max_bits = 0; // how many bits for max_num 
// while ((max_num >> max_bits) != 0) ++max_bits;
// for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
// {
//     for(int j = 0 ; j < size ; ++j)
//     {
//         int num = a.top(); // top number of A
//         if ((num >> i)&1 == 1) ra(); 
//         // if the (i + 1)-th bit is 1, leave in stack a
//         else pb();
//         // otherwise push to stack b
//     }
//     // put into boxes done
//     while (!b.empty()) pa(); // while stack b is not empty, do pa
    
//     // connect numbers done
// }