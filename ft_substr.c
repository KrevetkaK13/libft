#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return(NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = s[start + len - 1];
		len--; 
	}
	return (str);
}