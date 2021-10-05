/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/04 17:56:37 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 13:07:43 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size	i;

	i = 0;
	while (((t_u8 *)s1)[i] == ((t_u8 *)s2)[i] && i < n)
	{
		i++;
	}
	return (((t_u8 *)s1)[i] - ((t_u8 *)s2)[i]);
}
