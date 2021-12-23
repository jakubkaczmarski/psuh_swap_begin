#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stddef.h>

#include <stdlib.h>

#include "libft/libft.h"

#include "ft_printf/ft_printf.h"

// #include "libft.a"
// #include "libftprintf.a"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

long int	ft_atolongi(const char *nptr);
void		freecontent(void *elem);
void		operation_sa(t_list **stack_a);
void		operation_sb(t_list **stack_b);
void		operation_ss(t_list **stack_a, t_list **stack_b);
void		operation_pa(t_list **stack_a, t_list **stack_b);
void		operation_pb(t_list **stack_a, t_list **stack_b);
void		operation_ra(t_list **stack_a);
void		operation_rb(t_list **stack_b);
void		operation_rr(t_list **stack_a, t_list **stack_b);
void		operation_rra(t_list **stack_a);
void		operation_rrb(t_list **stack_b);
void		operation_rrr(t_list **stack_a, t_list **stack_b);

# endif
