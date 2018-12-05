/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 10:14:23 by llelias           #+#    #+#             */
/*   Updated: 2018/12/05 15:58:39 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file	*ft_filenew(int fd)
{
	t_file *file;

	file = (t_file*)malloc(sizeof(t_file));
	if (!file)
		return (NULL);
	file->s = ft_strnew(0);
	file->fd = fd;
	file->next = NULL;
	return (file);
}

