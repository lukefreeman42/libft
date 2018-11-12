/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:06:28 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 20:06:30 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char *sub;

	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	sub = ft_strncpy(sub, (str + start), len);
	return (sub);
}
