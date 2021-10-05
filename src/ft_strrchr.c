/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:48:24 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:28:40 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, t_i32 c)
{
	t_size	len;

	len = ft_strlen(s);
	while (len > 0 && s[len] != c)
		len--;
	return (&((char *)s)[len]);
}
