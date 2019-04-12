/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 07:53:49 by llelias           #+#    #+#             */
/*   Updated: 2019/04/11 19:18:18 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# ifndef NULL
#  define NULL (void*)0
# endif

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstadd(t_list *lst, t_list *nnode);
t_list			*ft_lstnew(void	const *content, size_t content_size);

char			to_lc(char c);
int				is_num(char c);
int				ft_nsqr(int num);
int				ft_atoi(char *num);
int				ft_power(int num, int exponent);
void			ft_strrev(char *str);
void			ft_putstr(const char *s);
void			ft_strdel(char **s);
size_t			ft_strlen(const char *s);
size_t			ft_strwcpy(char *dst, const char *src, size_t n);
size_t			ft_strwcat(char *dst, const char *src, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memalloc(size_t n);
void			*ft_memset(void *dst, int c, size_t n);
char			*ft_strdup(const char *s);
char			*ft_fstrdup(char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strnew(size_t n);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_fstrjoin(char *s1, char *s2, int x);
char			*ft_itoa_base(long long num, int base);
int				ft_printf(char *format, ...);
#endif
