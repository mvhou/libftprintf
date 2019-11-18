/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 12:31:57 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 16:26:06 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int r;

	i = 0;
	r = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			r = i;
		i++;
	}
	if (c == 0)
		r = i;
	if (r == -1)
		return (NULL);
	return ((char*)&s[r]);
}
