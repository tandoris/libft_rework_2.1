/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:48:32 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:48:33 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (ds < sr)
		ft_memcpy(ds, sr, n);
	else
		while (n-- > 0)
			ds[n] = sr[n];
	return (dst);
}
