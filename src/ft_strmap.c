/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:57:39 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:20:53 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	t_u64	i;
	char	*out;

	i = 0;
	out = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!out || !f)
		return (NULL);
	while (s[i] != '\0')
		out[i] = f(s[i]);
	return (out);
}
