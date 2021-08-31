#include "libft.h"

char	*ft_untilrskip(char *str, char c)
{
	size_t	len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	while (!(str[len] == c || len == 0))
		len--;
	len--;
	return (&str[len]);
}
