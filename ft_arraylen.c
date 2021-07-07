#include "libft.h"

int	ft_arraylen(char **array)
{
	int	i;

	i = -1;
	while (array[++i] != NULL)
		;
	return (i);
}
