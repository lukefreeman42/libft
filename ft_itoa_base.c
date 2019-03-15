#include "libft.h"

static int num_of_digits(int num, int base)
{
    int i;

    i = 0;
    while (num /= base)
        i++;
    return (i);
}

char    *ft_itoa_base(int num, int base)
{
    char *str;
    char *p;

    str = (char*)malloc(num_of_digits(num, base) + 1);
    p = str;
    while (num)
    {
        *str++ = (num % base) + 48;
        num /= base;
    }
    ft_strrev(p);
    *str = 0;
    return (p);
}