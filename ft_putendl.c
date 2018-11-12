/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:59:01 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 18:57:10 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *str)
{
	char	*str_endl;
	size_t	len;

	len = ft_strlen(str);
	str_endl = ft_strnew(len + 1);
	str_endl = ft_strncpy(str_endl, str, len);
	str_endl = ft_strncat(str_endl, "\n", 1);
	ft_putstr(str_endl);
	ft_strdel(&str_endl);
}
