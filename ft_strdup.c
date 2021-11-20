#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dup == NULL)
		return (dup);
	while (dup[i])
	{
		dup[i]	= str[i];
		i++;
	}
	return (dup);
}