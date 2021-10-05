/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fputnbr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:33:39 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 10:36:55 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fputnbr(t_i32 n, t_i32 fd)
{
	if (n < 0)
	{
		ft_fputchar('-', fd);
		n = ft_abs(n);
	}
	if (n < 10)
	{
		ft_fputchar(n + '0', fd);
	}
	else
	{
		ft_fputnbr(n % 10, fd);
		ft_fputnbr(n / 10, fd);
	}
}
