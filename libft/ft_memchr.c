/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 14:11:52 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 16:07:40 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	a;
	size_t			i;

	d = (unsigned char*)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (d[i] == a)
			return ((unsigned char*)&d[i]);
		i++;
	}
	return (NULL);
}
