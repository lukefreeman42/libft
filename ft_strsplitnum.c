/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplitnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:02:25 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 20:02:35 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strsplitnum(const char *str, char c)
{
	size_t num;

	num = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			num++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (num);
}
