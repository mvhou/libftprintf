/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_words.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 12:55:08 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 15:59:56 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(const char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != '\0' && ft_isspace(s[i]) == 1)
			i++;
		if (s[i] != '\0' && ft_isspace(s[i]) == 0)
			count++;
		while (s[i] != '\0' && ft_isspace(s[i]) == 0)
			i++;
	}
	return (count);
}
