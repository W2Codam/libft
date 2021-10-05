/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 14:53:36 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:15:41 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_i32	ft_wcount(const char *str, char c)
{
	t_i32	w;
	t_i32	i;

	i = -1;
	w = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != c)
			w++;
		while (str[i] != c && str[i + 1])
			i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	t_i64	sindex;
	t_i64	windex;
	t_i32	wcout;
	t_i32	ccout;

	sindex = 0;
	windex = -1;
	wcout = ft_wcount(s, c);
	out = (char **)ft_calloc(wcout + 1, sizeof(char *));
	while (++windex < wcout)
	{
		while (s[sindex] == c)
			sindex++;
		ccout = ft_strclen(&s[sindex], c);
		out[windex] = (char *)malloc(ccout * sizeof(char) + 1);
		if (out[windex])
			sindex += ft_strlcpy(out[windex], &s[sindex], ccout);
	}
	return (out);
}
