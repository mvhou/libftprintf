/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 13:34:30 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/03 18:14:22 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = (unsigned int)ft_strlen(s);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		i++;
	while ((s[l] == ' ' || s[l] == '\t' || s[l] == '\n' ||
				s[l] == '\0') && l > 0)
		l--;
	if (s[i] == '\0')
		return (ft_strnew(0));
	return (ft_strsub(s, i, (size_t)(l - i) + 1));
}
