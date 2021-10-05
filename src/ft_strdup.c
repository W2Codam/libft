/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 18:16:34 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/04 18:30:55 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	t_size	ln;

	ln = ft_strlen(s1);
	str = (char *)malloc(ln * sizeof(char) + 1);
	{
		ft_strlcpy(str, s1, ln);
		str[ln] = '\0';
	}
	return (str);
}
