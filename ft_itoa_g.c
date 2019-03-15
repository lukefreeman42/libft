#include "libft.h"

char *ft_itoa_g(void *p)
{
    int num = *(int*)p;
    return (ft_itoa_base(num, 10));
}
