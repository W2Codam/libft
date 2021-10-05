/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:33:52 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:27:54 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_trimlen(char const *s1, char const *set)
{
	t_size	i;
	t_size	ln;

	i = 0;
	ln = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchrn(set, s1[i]) != 0)
			i++;
		else
			ln++;
	}
	return (ln);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	t_size	si;
	t_size	oi;
	t_size	outln;

	si = 0;
	oi = 0;
	outln = ft_trimlen(s1, set);
	if (!s1 || !set)
		return (NULL);
	out = (char *)malloc(outln * sizeof(char) + 1);
	if (!out)
		return (NULL);
	while (s1[si] != '\0')
	{
		if (ft_strchrn(set, s1[si]) != 0)
			si++;
		else
			out[oi++] = s1[si++];
	}
	out[outln] = '\0';
	return (out);
}
