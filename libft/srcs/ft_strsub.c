/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:57:33 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:57:34 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	res[len] = '\0';
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	return (res);
}
