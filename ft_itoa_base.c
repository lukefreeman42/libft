/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:41:58 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 14:10:38 by llelias          ###   ########.fr       */
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
	str = ft_strnew(ft_intlen(n, base) + flag);
	*str = '0';
	if (n == -2147483648)
		return ("-2147483648");
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
