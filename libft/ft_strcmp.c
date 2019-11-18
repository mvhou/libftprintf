/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/28 18:11:48 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/03/28 18:20:52 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	i = 0;
	while (a[i] == b[i] && (a[i] != '\0' && b[i] != '\0'))
		i++;
	return (a[i] - b[i]);
}
