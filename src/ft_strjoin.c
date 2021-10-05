/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 09:26:08 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 09:33:24 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	len1;
	t_size	len2;
	t_size	lenout;
	char	*out;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lenout = len1 + len2;
	out = (char *)malloc(lenout * sizeof(char) + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, lenout);
	ft_strlcat(out, s2, lenout);
	return (out);
}
