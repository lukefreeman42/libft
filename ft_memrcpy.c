/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:30:07 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 18:56:42 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	void *p;

	p = dst;
	dst += n - 1;
	src += n - 1;
	while (n--)
		*(uint8_t*)dst-- = *(uint8_t*)src--;
	return (p);
}
