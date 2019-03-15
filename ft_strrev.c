#include "libft.h"

static void     ft_swap(char *a, char *b)
{
    char c;

    c = *a;
    *a = *b;
    *b = c;
}

void    ft_strrev(char *str)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    while (i < len/2)
    {
        ft_swap(str + i, str + len - 1 - i);
        i++;
    }
}