/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:56:35 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:56:38 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		if (n > (ft_strlen(s2) - 1) && *s1 == *s2)
		{
			if (ft_memcmp(s1, s2, ft_strlen(s2)) == 0)
				return ((char *)s1);
		}
		if (n == 0)
			break ;
		n--;
		s1++;
	}
	return (0);
}
