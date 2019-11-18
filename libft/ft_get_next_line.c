/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/30 16:00:12 by mvan-hou      #+#    #+#                 */
/*   Updated: 2019/07/21 20:10:10 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_next_line(char *str, char *n, char **remainder)
{
	n = ft_strchr(str, '\n');
	if (n)
	{
		if (*remainder)
			free(*remainder);
		*remainder = ft_strdup(n + 1);
		if (!(*remainder))
			return (-1);
		*n = '\0';
	}
	return (0);
}

int		add_to_line(char *buf, char **line)
{
	char	*temp;
	size_t	len;

	len = ft_strlen(*line);
	temp = ft_strndup(*line, len);
	if (!temp)
		return (-1);
	free(*line);
	*line = ft_strnjoin(temp, buf, len, BUFF_SIZE);
	if (!(*line))
		return (-1);
	free(temp);
	return (0);
}

int		read_file(const int fd, char **remainder, char **line)
{
	char	buf[BUFF_SIZE + 1];
	char	*n;
	int		ret;

	ret = 1;
	while (ret > 0)
	{
		ft_bzero(buf, BUFF_SIZE + 1);
		ret = read(fd, buf, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		n = ft_strchr(buf, '\n');
		if (find_next_line(buf, n, remainder) == -1)
			return (-1);
		if (add_to_line(buf, line) == -1)
			return (-1);
		if (ret == 0 && ft_strlen(*line) > 0)
			return (1);
		if (n)
			return (1);
	}
	return (0);
}

int		check_remainder(int fd, char **remainder, char **line)
{
	char	*temp;
	char	*n;
	size_t	len;

	len = ft_strlen(remainder[fd]);
	temp = ft_strndup(remainder[fd], len);
	if (!temp)
		return (-1);
	n = ft_strchr(temp, '\n');
	if (find_next_line(temp, n, &remainder[fd]) == -1)
		return (-1);
	if (!n)
		remainder[fd] = NULL;
	free(*line);
	*line = ft_strndup(temp, len);
	if (!(*line))
		return (-1);
	free(temp);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char		*remainder[4096];
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || fd > 4095 || !line || read(fd, buf, 0) < 0)
		return (-1);
	*line = ft_strnew(0);
	if (!(*line))
		return (-1);
	if (remainder[fd])
	{
		if (check_remainder(fd, remainder, line) == -1)
			return (-1);
	}
	if (!remainder[fd])
		return (read_file(fd, &remainder[fd], line));
	if (remainder[fd])
		return (1);
	return (0);
}
