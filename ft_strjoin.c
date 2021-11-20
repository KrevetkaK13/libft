#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1 || *s2)
	{
		if (*s1)
		{
			str[i] = *s1;
			s1++;
		}
		else
		{
			str[i] = *s2;
			s2++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
