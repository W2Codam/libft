/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:15:14 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 09:25:47 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, t_u32 start, t_size len)
{
	char	*sub;
	t_size	strln;

	strln = ft_strlen(s);
	if (!s || !strln || start > strln || len > strln)
		return (NULL);
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len);
	return (sub);
}
