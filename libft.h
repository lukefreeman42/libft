/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 07:53:49 by llelias           #+#    #+#             */
/*   Updated: 2018/11/30 14:13:01 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# ifndef NULL
#  define NULL (void*)0
# endif

void	ft_strdel(char *s);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
void	*ft_memalloc(size_t n);
void	*ft_memset(void *dst, int c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_fstrdup(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strnew(size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_fstrjoin(char *s1, char *s2, int x);
#endif
