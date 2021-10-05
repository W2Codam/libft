/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 18:03:14 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/04 18:05:33 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[i] != '\0' && i < size)
		dst[i] == src[i];
	dst[i] = '\0';
	return (i);
}
