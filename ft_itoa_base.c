/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:41:58 by llelias           #+#    #+#             */
/*   Updated: 2018/11/12 13:02:13 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, int base)
{
	void	*p;
	char	*str;
	int		flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	if(!(str = ft_strnew(ft_intlen(n, base) + flag)))
		return (NULL);
	*str = '0';
	if (n == -2147483648)
	{
		str = ft_strncpy(str, "-2147483648", 11);
		return (str);
	}	
	p = (void*)str;
	if (flag)
		n *= -1;
	while (n)
	{
		*str++ = ft_itoc(n % base);
		n /= base;
	}
	if (flag)
		*str++ = '-';
	ll_strrev((char*)p);
	return ((char*)p);
}
