/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:47:27 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:47:29 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	while (n-- > 0)
	{
		*str1++ = *str2;
		if (*str2++ == (char)c)
			return (str1);
	}
	return (NULL);
}
