/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:57:19 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:57:20 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		a = i;
		j = 0;
		while (s1[a] == s2[j] || !s2[j])
		{
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
			else if (s1[a++] != s2[j++])
				break ;
		}
		i++;
	}
	return (0);
}
