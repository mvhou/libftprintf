/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_wordsc.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 12:55:08 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/04/08 11:53:40 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_wordsc(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}
