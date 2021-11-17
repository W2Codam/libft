/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 11:00:23 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/11/17 10:42:50 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size num, t_size size)
{
	t_size	count;
	void	*out;

	count = num * size;
	out = malloc(count);
	if (!out)
		return (NULL);
	return (ft_memset(out, 0, count));
}
