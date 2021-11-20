#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void  *mem;

	mem = (void *)malloc(count * size);
	if (mem == NULL)
		return (mem);
	ft_bzero(mem, count * size);
	return (mem);
}