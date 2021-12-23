#include "push_swap.h"

void	freecontent(void *elem)
{
	t_list *ptr;

	ptr = (t_list*) elem;
	free(ptr -> content);
}
