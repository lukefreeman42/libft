/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:59:39 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 18:00:20 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int tot;
	int	flag;

	flag = 0;
	tot = 0;
	while (ft_isws(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flag = 1;
		str++;
	}
	while (ft_isdigit(*str))
		tot = (tot * 10) + ft_ctoi(*str++);
	if (flag)
		tot = tot * -1;
	return (tot);
}
