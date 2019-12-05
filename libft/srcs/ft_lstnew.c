/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:46:46 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:47:11 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *res;

	if (!(res = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content == NULL)
	{
		res->content = NULL;
		res->content_size = 0;
	}
	else
	{
		if (!(res->content = malloc(content_size)))
			return (0);
		ft_memcpy(res->content, content, content_size);
		res->content_size = content_size;
	}
	res->next = NULL;
	return (res);
}
