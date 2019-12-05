/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:57:43 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:57:44 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_full(void)
{
	char		*res;

	if (!(res = (char *)malloc(1)))
		return (0);
	res[0] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	char		*res;
	char		*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i >= j)
		return (ft_full());
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(res = (char *)malloc(j - i + 2)))
		return (0);
	res[j - i + 1] = '\0';
	str = res;
	while (i < j + 1)
	{
		*res++ = s[i];
		i++;
	}
	return (str);
}
