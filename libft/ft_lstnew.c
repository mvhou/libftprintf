/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 11:51:15 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 13:52:58 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst		*ft_lstnew(void const *content, size_t content_size)
{
	t_lst *new;

	new = (t_lst*)malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	new->content = malloc(content_size);
	if (new->content == NULL)
		return (NULL);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
