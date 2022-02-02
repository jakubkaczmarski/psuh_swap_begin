#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

#include "./Libft/libft.h"

# include <stddef.h>

#include <stdlib.h>

#include <stdio.h>

# include <fcntl.h>				//all of these out
# include <sys/wait.h>
# include <errno.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>				//until here

// #include "libft.a"
// #include "libftprintf.a"

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

int	case_1_of_3_value_permutation(t_list **stack_a);
int	case_2_of_3_value_permutation(t_list **stack_a);
int	case_3_of_3_value_permutation(t_list **stack_a);
int	case_4_of_3_value_permutation(t_list **stack_a);
int	case_5_of_3_value_permutation(t_list **stack_a);
int	sort_small(t_list **stack_a, t_list **stack_b, int argc);
// long int	ft_atolong(const char *nptr);
int		unvalid_value(int argc, char **argv);
int		check_arguments(int argc, char **argv);
long	ft_atolong(const char *nptr);
void	reapply_values(t_list **stack_x, int max);
void	print_stack(t_list *ptr);								//deletee before push
int sortbigstack(t_list **stack_a, t_list **stack_b);
t_list	*createinput(int argc, char **argv);
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
