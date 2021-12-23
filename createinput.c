#include "push_swap.h"

t_list	**createinput(int argc, char **argv)
{
	t_list				**stack_a;
	t_list				*new;
	// long int			temp;
	int					ind;
	int					*tab;
	
	ind = 0;
	tab = malloc(sizeof(int) * argc);
	stack_a = NULL;
	while (argc > 0)
	{
		// temp = ft_atolongi(argv[ind]);
		// if (temp > 2147483647 || temp < -2147483648)
		// 	return(error());
		tab[ind] = ft_atoi(argv[ind]); 
		new = ft_lstnew(&tab[ind]);
		ft_lstadd_back(stack_a, new);
		argc--;
		ind++;
	}
	return (stack_a);
}

int main(int argc, char **argv)
{
	t_list *ptr;
	t_list **stack_a;
	int		*temp;

	stack_a = createinput(argc, argv);
	ptr = *stack_a;
	while (ptr)
	{
		temp = (int*) ptr->content;
		ft_printf("%i\n", &temp);
		ptr = ptr ->next;
	}
}