/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:52:02 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:52:03 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_replchar(char *s, char c, char z)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			s[i] = z;
		i++;
	}
	return (s);
}
