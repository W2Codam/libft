/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:59:29 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 11:40:12 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size size)
{
	((char *)ft_memcpy(dst, src, size))[size] = '\0';
	return (size);
}

/* 
	t_size	i;

	i = 0;
	while (src[i] != '\0' && i < size)
		dst[i] == src[i++];
	dst[i] = '\0';
	return (i);
*/