/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:48:51 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:48:52 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_unblen(uintmax_t c)
{
	int			i;

	i = 1;
	while (c > 9)
	{
		c /= 10;
		i++;
	}
	return (i);
}

int				ft_nbrlen(intmax_t c, int a)
{
	int			i;

	if (!a)
		return (ft_unblen(c));
	i = 1;
	if (c < -9223372036854775807)
		return (20);
	else if (c < 0)
	{
		i++;
		c = -c;
	}
	while (c > 9)
	{
		c /= 10;
		i++;
	}
	return (i);
}
