/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:24:03 by llelias           #+#    #+#             */
/*   Updated: 2018/11/11 14:24:41 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (*(str + i))
	{
		(*f)(i, (str + i));
		i++;
	}
}
