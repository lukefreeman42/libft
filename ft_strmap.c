/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:25:55 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 18:56:29 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *str, char (*f)(char))
{
	char	*strmap;
	void	*p;

	strmap = ft_strnew(ft_strlen(str));
	p = (void*)strmap;
	while (*str)
		*strmap++ = (*f)(*str++);
	return ((char*)p);
}
