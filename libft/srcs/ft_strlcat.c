/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:54:57 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:54:59 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	res = i;
	while (i + 1 < n && s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	while (s2[j])
		j++;
	if (res > n)
		return (j + n);
	return (j + res);
}
