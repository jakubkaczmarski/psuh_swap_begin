#include "push_swap.h"

t_list	*createinput(int argc, char **argv)
{
	t_list				*stack_a;
	t_list				*new;
	int					ind;
	int					*tab;
	
	ind = 1;
	tab = malloc(sizeof(int) * argc);
	stack_a = NULL;
	while (argc > 1)
	{
		tab[ind] = ft_atoi(argv[ind]);
		new = ft_lstnew(&tab[ind]);
		ft_lstadd_back(&stack_a, new);
		argc--;
		ind++;
	}
	return (stack_a);
}

// int main(int argc, char **argv)
// {
// 	t_list *ptr;
// 	t_list **stack_a;
// 	// t_list **stack_b;
// 	int		*temp;

// 	printf("HELLO");

// 	printf("HELLO");

// 	printf("HELLO");
// 	printf("HELLO");
// 	stack_a = createinput(argc, argv);
// 	ptr = *stack_a;
// 	while (ptr)
// 	{
// 		temp = (int*)(ptr->content);
// 		printf("%i\n", *temp);
// 		ptr = ptr ->next;
// 	}
// }