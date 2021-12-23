#include "push_swap.h"

static int	checksign(const char *ptr)
{
	if (ptr[0] == '+')
		return (1);
	if (ptr[0] == '-')
		return (2);
	return (0);
}

static long int	makenumber(int i, const char *start)
{
	int	x;
	long int	nmb;

	nmb = 0;
	x = 1;
	while (i > -1)
	{	
		nmb -= (start[i] - 48) * x;
		x *= 10;
		i--;
	}
	return (nmb);
}

long int	ft_atolongi(const char *nptr)
{
	long int			nmb;
	int			i;
	const char	*start;
	int			sign;

	nmb = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	sign = checksign(&nptr[i]);
	if (sign > 0)
		i++;
	start = (const char *) nptr + i;
	i = 0;
	while (ft_isdigit(start[i]) == 1)
		i++;
	i--;
	nmb = makenumber(i, start);
	if (sign == 0 || sign == 1)
		nmb = nmb * (-1);
	return (nmb);
}