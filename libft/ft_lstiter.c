/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 21:32:34 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 13:51:10 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_lst *lst, void (*f)(t_lst *elem))
{
	t_lst *list;

	list = lst;
	while (list)
	{
		(*f)(list);
		list = list->next;
	}
}
