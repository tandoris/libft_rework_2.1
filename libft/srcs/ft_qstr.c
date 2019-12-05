/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clboutry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 22:51:49 by clboutry          #+#    #+#             */
/*   Updated: 2019/10/13 22:51:51 by clboutry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_qstr(char *s, int *i)
{
	char		*res;
	int			j;

	j = -1;
	if (i[11] < 0 || i[11] > (int)ft_strlen(s))
		res = ft_strdup(s);
	else
	{
		if (!(res = (char *)malloc(sizeof(char) * i[11] + 1)))
			return (0);
		res[i[11]] = '\0';
		while (++j < i[11])
			res[j] = s[j];
	}
	i[10] -= (int)ft_strlen(res) - 1;
	if ((i[3] != 2 && (i[13] = 1)) || i[8] == 9)
		strendf(res[0], i);
	if (res[i[13]] && res[0])
		i[1] += write(1, &res[i[13]], ft_strlen(&res[i[13]]));
	while ((i[10] -= 1) > 0)
		i[1] += write(1, " ", 1);
	free(res);
	return (s);
}

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

static	void	outunsec(char *s, int *i, int j, int c)
{
	while (i[11] != -2 && (i[16] -= 1) > 0)
	{
		if (!s[j] && ++j)
			i[16] -= 1;
		s[c++] = s[j++];
	}
	s[c] = '\0';
	if (i[10] > (int)ft_strlen(s))
	{
		while (i[3] == 2 && i[10] > (int)ft_strlen(s))
			s = ft_joinfree(s, " ", 1);
		while (i[3] == 1 && i[10] > (int)ft_strlen(s))
			s = ft_joinfree("0", s, 0);
		while (i[10] > (int)ft_strlen(s))
			s = ft_joinfree(" ", s, 0);
	}
	i[1] += write(1, s, ft_strlen(s));
}

void			ft_outun(char *s, int *i, int j, int c)
{
	int			b;

	b = 0;
	if (i[11] > -1)
	{
		while ((i[11] -= 1) > -1 && s[j])
		{
			if ((i[16] -= 1) > 0 && !s[++j])
			{
				while (s[b])
					s[c++] = s[b++];
				b = ++j;
			}
			else if (i[16] < 0)
				break ;
		}
		i[11] = -2;
		s[c] = '\0';
	}
	outunsec(s, i, j, c);
}
