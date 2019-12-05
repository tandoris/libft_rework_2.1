/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:50:45 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:50:46 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int a;

	a = n;
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (a < 0)
	{
		ft_putchar('-');
		ft_putnbr(-a);
	}
	else if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + 48);
}
