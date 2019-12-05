/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:52:12 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:52:13 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_rotng(char *s, int i)
{
	char		*r;
	char		*res;
	int			a;

	if (!*s)
		return (0);
	i = -i;
	if (!(r = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	res = r;
	while (*s)
	{
		a = i;
		if (*s > 64 && *s < 91)
			while (*s - a < 65)
				a -= 26;
		else if (*s > 96 && *s < 123)
			while (*s - a < 97)
				a -= 26;
		else
			a = 0;
		*r++ = *s++ - a;
	}
	*r = '\0';
	return (res);
}

char			*ft_rotnb(char *s, int i)
{
	char		*r;
	char		*res;
	int			a;

	if (i < 0 || !*s)
		return (ft_rotng(s, i));
	if (!(r = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	res = r;
	while (*s)
	{
		a = i;
		if (*s > 64 && *s < 91)
			while ((int)*s + a > 90)
				a -= 26;
		else if ((int)*s > 96 && *s < 123)
			while ((int)*s + a > 122)
				a -= 26;
		else
			a = 0;
		*r++ = *s++ + a;
	}
	*r = '\0';
	return (res);
}
