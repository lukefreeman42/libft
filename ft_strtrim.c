/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:08:22 by llelias           #+#    #+#             */
/*   Updated: 2018/11/11 19:33:19 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	len;

	len = 0;
	while (ft_isws(*str))
	{
		str++;
		if (!*str)
			return ("");
	}
	start = (char*)str;
	while (*str)
		str++;
	str--;
	while (ft_isws(*str))
		str--;
	end = (char*)str;
	len = end + 1 - start;
	trim = ft_strnew(len);
	trim = ft_strncpy(trim, start, len);
	return (trim);
}
