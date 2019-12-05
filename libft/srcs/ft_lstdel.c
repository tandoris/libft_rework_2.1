/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:45:28 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:45:34 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nextlst;
	t_list *tmp;

	if (alst && del)
	{
		tmp = *alst;
		while (tmp)
		{
			nextlst = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = nextlst;
		}
		*alst = NULL;
	}
}
