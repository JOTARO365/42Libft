#include "libft.h"

int	ft_tolowwer(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
