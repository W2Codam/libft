/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:12:19 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 10:37:41 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	t_u64	i;

	i = 0;
	if (src > dst)
	{
		while (len-- > 0)
			((t_u8 *)dst)[len] = ((t_u8 *)src)[len];
	}
	else
	{
		while (i < len)
			((t_u8 *)dst)[i] = ((t_u8 *)src)[i++];
	}
	return (dst);
}
