/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:33:30 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 18:33:54 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_intlen(int n, int base)
{
	size_t len;

	len = 1;
	while (n /= base)
		len++;
	return (len);
}