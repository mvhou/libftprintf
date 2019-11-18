/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 21:38:51 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 13:57:27 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst		*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*new;
	t_lst	*temp;
	t_lst	*start;

	if (!lst)
		return (NULL);
	new = (*f)(lst);
	start = new;
	while (lst->next)
	{
		lst = lst->next;
		temp = (*f)(lst);
		new->next = temp;
		new = new->next;
	}
	return (start);
}
