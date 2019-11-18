/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 11:55:28 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/09 14:36:14 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			s1;
	size_t			s2;
	size_t			i;

	i = 0;
	s1 = ft_strlen(dst);
	s2 = ft_strlen(src);
	if (size <= s1)
		return (s2 + size);
	while (src[i] != '\0' && i + s1 < size - 1)
	{
		dst[i + s1] = src[i];
		i++;
	}
	dst[i + s1] = '\0';
	return (s1 + s2);
}
