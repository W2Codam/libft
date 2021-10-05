/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fputchar.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/05 10:32:47 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/05 10:33:27 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fputchar(char c, t_i32 fd)
{
	write(fd, &c, 1);
}
