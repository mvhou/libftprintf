/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 13:44:36 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 16:20:46 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	str = (char**)malloc(sizeof(char*) * (ft_count_wordsc(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
		if (s[i] == c)
			i++;
		else
		{
			l = 0;
			while (s[i + l] != '\0' && (s[i + l] != c))
				l++;
			str[j] = ft_memalloc(l + 1);
			str[j] = ft_strsub(s, i, l);
			j++;
			i = i + l;
		}
	str[j] = 0;
	return (str);
}
