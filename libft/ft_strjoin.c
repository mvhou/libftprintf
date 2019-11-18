/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 13:08:30 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 16:22:10 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char*)malloc(len1 + len2 + 1);
	if (str)
	{
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
		while (i < len1 + len2)
		{
			str[i] = s2[i - len1];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
