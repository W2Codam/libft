/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 11:28:11 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:06:10 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, t_i32 c, t_size n)
{
	t_u64	i;

	i = 0;
	while (i < n && ((t_u8 *)s)[i] != (t_u8)c)
		i++;
	return (&((void *)s)[i]);
}
