/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:55:18 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:55:20 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (s)
	{
		if (!(res = (char *)malloc(ft_strlen(s) + 1)))
			return (0);
		res[ft_strlen(s)] = '\0';
		while (s[i])
		{
			res[i] = f((char)s[i]);
			i++;
		}
		return (res);
	}
	return (0);
}
