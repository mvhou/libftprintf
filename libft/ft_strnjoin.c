/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnjoin.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 13:08:30 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 14:02:07 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *s1, char *s2, int n1, int n2)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(n1 + n2 + 1);
	if (str)
	{
		while (i < n1)
		{
			str[i] = s1[i];
			i++;
		}
		while (i < n1 + n2)
		{
			str[i] = s2[i - n1];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
