/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sortstrings.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 18:40:38 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 18:58:00 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_sortstrings(char **array)
{
	int		i;
	char	*temp;

	i = 0;
	while (array[i + 1] != '\0')
	{
		if (ft_strcmp(array[i], array[i + 1]) > 0)
		{
			temp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp;
			i = 0;
		}
		i++;
	}
	return (array);
}
