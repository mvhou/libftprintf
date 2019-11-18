/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-hou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 19:51:51 by mvan-hou       #+#    #+#                */
/*   Updated: 2019/11/18 13:51:43 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst	*next;
	t_lst	*lst;

	lst = *alst;
	while (lst)
	{
		next = (lst)->next;
		del((lst)->content, (lst)->content_size);
		free(lst);
		lst = next;
	}
	*alst = NULL;
}
