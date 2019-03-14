#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	void *p;

	p = dst;
	while (n--)
		*(unsigned char*)dst++ = *(unsigned char*)src++;
	return (p);
}
