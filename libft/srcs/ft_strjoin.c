/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:54:45 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:54:47 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*res;
	char	*buf;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = (char *)malloc(i + 1)))
		return (0);
	buf = res;
	res[i] = '\0';
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	return (buf);
}
