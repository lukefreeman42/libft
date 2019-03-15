#include "libft.h"

static int num_of_digits(int num, int base)
{
    int i;

    i = 0;
    while (num /= base)
        i++;
    return (i);
}

static char    convertion(int dig)
{
    if (dig < 10)
        return (dig + 48);
    else
        return (dig + 55);
}

char    *ft_itoa_base(long long num, int base)
{
    char *str;
    char *p;
    int flag;

    if (num == 0)
        return ("0");
    if (base < 2)
        exit(-1);
    flag = 0;
    if (num < 0 && (num *= -1))
        flag = 1;
    str = (char*)malloc(num_of_digits(num, base) + 1 + flag);
    p = str;
    while (num)
    {
        *str++ = convertion(num % base);
        num /= base;
    }
    if (flag)
        *str++ = '-';
    ft_strrev(p);
    *str = 0;
    return (p);
}